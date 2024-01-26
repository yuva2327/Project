package entity;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;
import jakarta.persistence.JoinColumn;
import jakarta.persistence.ManyToOne;

@Entity
public class Student_Total_mark {
	@Id
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	@Column(name ="STU MARK ID")
	private int mark_Id;
	@Column(name = "STUDNET MARK",nullable = false , length = 20)
	private int student_TotalMark;
	public int getMark_Id() {
		return mark_Id;
	}
	public int getStudent_TotalMark() {
		return student_TotalMark;
	}
	@ManyToOne
	@JoinColumn
	Student student;
	
	public Student getStudent() {
		return student;
	}
	public void setStudent(Student student) {
		this.student = student;
	}
	public void setMark_Id(int mark_Id) {
		this.mark_Id = mark_Id;
	}
	public void setStudent_TotalMark(int student_TotalMark) {
		this.student_TotalMark = student_TotalMark;
	} 

}
