package servises;

import dataAccess.implement.ImplementStudentCourseData;
import dataAccess.interfases.StudentCourseInterface;
import entity.StudentCourse;

public class StudentCourseServices {
	public void SavedStudentCourse(StudentCourse course) {
		StudentCourseInterface stco=new ImplementStudentCourseData();
		if(course!=null) {
			stco.SaveStudentCourseData(course);
			System.out.println("Student Course Data is Saved");
		}System.out.println("Student Course Data is not Saved");
	}
	
	public void UpdateStudentCourse(int stC, StudentCourse studentCourse) {
		StudentCourseInterface stco=new ImplementStudentCourseData();
		stco.UpdateStudentCourseData(stC, studentCourse);
		System.out.println("Student Course Data is Update");
	}
	
	public void DeleteStudentCourse(int stC) {
		StudentCourseInterface stco=new ImplementStudentCourseData();
		if(stco.DeleteStudentCourseData(stC)==true) {
			stco.DeleteStudentCourseData(stC);
			System.out.println("Student Data Course is Delete");
		}else System.out.println("Student Data is not Found");
	}
	
	public void getStudentCourse(int stC) {
		StudentCourseInterface stco=new ImplementStudentCourseData();
		StudentCourse course=stco.getStudentCourse(stC);
		if(course!=null) {
			System.out.println(course);
		}else System.out.println("Student Course Data is Not Found");
		
	}

}
