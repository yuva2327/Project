package servises;

import dataAccess.implement.ImplementTotalMarkData;
import dataAccess.interfases.StudentTotalMark;
import entity.Student_Total_mark;

public class StudentTotalMarkServices {
	
	public void SavedStudentTotalMark(Student_Total_mark studentTotalMark) {
		StudentTotalMark Stmark=new ImplementTotalMarkData();
		if(studentTotalMark!=null) {
			Stmark.SaveMarkData(studentTotalMark);
			System.out.println("Student Total Mark is Saved");
		}System.out.println("Student Total Mark is Not Saved");
	}
	
	public void UpdateStudentTotalMark(int toMark, Student_Total_mark studentTotalMark) {
		StudentTotalMark Stmark=new ImplementTotalMarkData();
		Stmark.UpdateMarkData(toMark, studentTotalMark);
		System.out.println("Student Total Mark is update");
	}
	
	public void DeleteStudentTotalMark(int toMark) {
		StudentTotalMark Stmark=new ImplementTotalMarkData();
		if(Stmark.DeleteMarkData(toMark)==true) {
			Stmark.DeleteMarkData(toMark);
			System.out.println("Student Total Mark is Delete");
		}else System.out.println("Student Total Mark is not Delete");
	}
	
	public void getStudentMark(int toMark) {
		StudentTotalMark Stmark=new ImplementTotalMarkData();
		Student_Total_mark mark=Stmark.getMarkData(toMark);
		if(mark!=null) {
			System.out.println(mark);
		}System.out.println("Student Total Mark is Not Found");
	}

}
