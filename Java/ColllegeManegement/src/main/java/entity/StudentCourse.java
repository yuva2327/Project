package entity;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;
import jakarta.persistence.JoinColumn;
import jakarta.persistence.ManyToOne;

@Entity
public class StudentCourse {

	@Id
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	@Column(name = "STU COURSE ID")
	private int studentCourse;
	@Column(name = "STUDNET COURSE",nullable = false , length = 20)
	private String studentCourse_Name;
	
	
	public void setStudentCourse(int studentCourse) {
		this.studentCourse = studentCourse;
	}

	public void setStudent(Student student) {
		this.student = student;
	}

	
	@ManyToOne
	@JoinColumn
	Student student;
	
	public int getStudentCourse() {
		return studentCourse;
	}

	public String getStudentCourse_Name() {
		return studentCourse_Name;
	}

	public void setStudentCourse_Name(String studentCourse_Name) {
		this.studentCourse_Name = studentCourse_Name;
	}

	public Student getStudent() {
		return student;
	}

}
