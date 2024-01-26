package dataAccess.interfases;

import entity.Courses;

public interface CourseInterfaces {
	void SaveCourseData(Courses courses);
	void UpdateCourseData(int coId,Courses courses);
	boolean DeleteCourseData(int coId);
	Courses getCoureseData(int coId);
	
}
