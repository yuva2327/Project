package dataAccess.interfases;

import entity.Courses;
import entity.Student_Total_mark;

public interface StudentTotalMark {
	void SaveMarkData(Student_Total_mark studentTotalMark);
	void UpdateMarkData(int toMark,Student_Total_mark studentTotalMark);
	boolean DeleteMarkData(int toMark);
	Student_Total_mark getMarkData(int toMark);
}
