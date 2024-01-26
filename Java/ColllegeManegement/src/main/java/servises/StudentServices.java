package servises;

import dataAccess.implement.ImpleamentStudentData;
import dataAccess.interfases.StudentInterface;
import entity.Student;

public class StudentServices {
	public void SavedStudentData(Student student) {
		StudentInterface stu=new ImpleamentStudentData();
		if(student!=null) {
			stu.SaveStudentData(student);
			System.out.println("Student Data is Saved");
		}else System.out.println("Student Data is Not Saved");
	}
	
	public void UpdateStudentData(int stuId, Student student) {
		StudentInterface stu=new ImpleamentStudentData();
		stu.UpdateStudentData(stuId, student);
		System.out.println("Student Data is Update");
	}
	
	public void DaleteStudentData(int stuId) {
		StudentInterface stu=new ImpleamentStudentData();
		if(stu.DeleteStudentData(stuId)==true) {
			stu.DeleteStudentData(stuId);
			System.out.println("Student Data is Delete");
		}else System.out.println("Student Data is not Delete");
	}
	
	public void getStudentData(int stuId) {
		StudentInterface stu=new ImpleamentStudentData();
		Student student=stu.getStudentData(stuId);
		if(student!=null) {
			System.out.println(student);
		}else System.out.println("Student Data is Not Avaleble");
	}

}
