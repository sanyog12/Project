package com.springrests.springrests.services;

import java.util.List;

import com.springrests.springrests.entities.Course;

public interface CourseService{
	
	public List<Course> getCourses();
	public Course getCourse(long courseId);
	public Course addCourse(Course course);

}