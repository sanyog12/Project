package com.springrests.springrests.services;



import java.util.ArrayList;
import java.util.List;

import org.springframework.stereotype.Service;

import com.springrests.springrests.entities.Course;

@Service
public class CourseServiceImpl implements CourseService{
	
	List<Course> list;
	
	public CourseServiceImpl() {
		list = new ArrayList<>();
		list.add(new Course(145,"java core","learn core java"));
		list.add(new Course(146,"Spring Boot","learn Spring Boot"));
	}
	
	@Override
	public List<Course> getCourses(){
		return list;
	}
	
	@Override
	public Course getCourse(long courseId) {
		Course c=null;
		for(Course course:list) {
			if(course.getId() == courseId) {
				c=course;
				break;
			}
		}
		return c;
	}
	@Override
	public Course addCourse(Course course) {
		list.add(course);
		return course;
	}
}
 