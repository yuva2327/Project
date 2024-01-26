package servises;

import dataAccess.implement.implementCourseData;
import dataAccess.interfases.CourseInterfaces;
import entity.Courses;

public class CourseServices {
	public void SavedCourseData(Courses courses) {
		CourseInterfaces course=new implementCourseData();
		if(courses!=null) {
			course.SaveCourseData(courses);
			System.out.println("Course is Saved");
		}System.out.println("Courses is Not Saved");
	}
	
	public void UpdateCourseData(int coId, Courses courses) {
		CourseInterfaces course=new implementCourseData();
		course.UpdateCourseData(coId, courses);
		System.out.println("Course is Update");
	}
	public void DeleteCourseData(int coId) {
		CourseInterfaces course=new implementCourseData();
		if(course.DeleteCourseData(coId)==true) {
			course.DeleteCourseData(coId);
		}else System.out.println("Course is Not Found");
	}
	
	public void getCourseData(int coId) {
		CourseInterfaces course=new implementCourseData();
		Courses cou=course.getCoureseData(coId);
		if(cou!=null) {
			System.out.println(cou);
		}System.out.print("Course Data is Not Found");
	}
}
