package dataAccess.interfases;

import entity.StudentCourse;

public interface StudentCourseInterface {
	void SaveStudentCourseData(StudentCourse studentCourse);
	void UpdateStudentCourseData(int stC,StudentCourse studentCourse);
	boolean DeleteStudentCourseData(int stC);
	StudentCourse getStudentCourse(int stC);
}
