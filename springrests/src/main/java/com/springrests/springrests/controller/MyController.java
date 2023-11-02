package com.springrests.springrests.controller;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RestController;

import com.springrests.springrests.entities.Course;
import com.springrests.springrests.services.CourseService;
//Rest full form is Representational state transfer in which data is sent in JSON format
@RestController
public class MyController {
	@Autowired
	private CourseService courseService;
	
	@GetMapping("/home")
	public String home() {
		return "this is home";
	}
	@GetMapping("/courses")
	public List<Course> getCourses(){
	
		return this.courseService.getCourses();
		
	}
	@GetMapping("/courses/{CourseId}")
	public Course getCourse(@PathVariable String courseId){
		return this.courseService.getCourse(Long.parseLong(courseId));
	}
	
	@PostMapping("/courses")
	public Course addCourses(@RequestBody Course course) {
		return 	this.courseService.addCourse(course);
	}
}
