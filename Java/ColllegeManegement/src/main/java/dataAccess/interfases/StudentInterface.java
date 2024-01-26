package dataAccess.interfases;

import entity.Student;

public interface StudentInterface {
	void SaveStudentData(Student student);
	void UpdateStudentData(int stuId,Student student);
	boolean DeleteStudentData(int stuId);
	Student getStudentData(int stuId);
}
