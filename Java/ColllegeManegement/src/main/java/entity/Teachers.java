package entity;

import java.util.List;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;
import jakarta.persistence.JoinColumn;
import jakarta.persistence.ManyToOne;
import jakarta.persistence.OneToMany;

@Entity
public class Teachers {
	
	@Id
	@Column(name = "TEACHER ID")
	private int teachers_Id;
	@Column(name = "TEACHER NAME",nullable = false , length = 20)
	private String teacher_Name;
	@Column(name = "TEACHER SUB",nullable = false , length = 20)
	private String subject;
	@Column(name = "TEACHER PHONE",nullable = false ,unique = true, length = 20)
	private long teacher_Phone_number;
	
	
	@ManyToOne
	@JoinColumn 
	College college;
	
	@OneToMany(mappedBy ="teachers")
	List<Student> student;

	public void setTeachers_Id(int teachers_Id) {
		this.teachers_Id = teachers_Id;
	}
	
	public int getTeachers_Id() {
		return teachers_Id;
	}

	public String getTeacher_Name() {
		return teacher_Name;
	}

	public void setTeacher_Name(String teacher_Name) {
		this.teacher_Name = teacher_Name;
	}

	public String getSubject() {
		return subject;
	}

	public void setSubject(String subject) {
		this.subject = subject;
	}

	public long getTeacher_Phone_number() {
		return teacher_Phone_number;
	}

	public void setTeacher_Phone_number(long teacher_Phone_number) {
		this.teacher_Phone_number = teacher_Phone_number;
	}

	public College getCollege() {
		return college;
	}

	public void setCollege(College college) {
		this.college = college;
	}

	public List<Student> getStudent() {
		return student;
	}

	public void setStudent(List<Student> student) {
		this.student = student;
	}

	
}
