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
public class Courses {
	
	
	@Column(name = "COURSE ID")
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	private int course_Id;
	@Id
	@Column(name = "COLLEGE COURSE",nullable = false ,unique = true, length = 20)
	private String course_Name;
	
	public String getCourse_Name() {
		return course_Name;
	}

	public void setCourse_Name(String course_Name) {
		this.course_Name = course_Name;
	}

	@ManyToOne
	@JoinColumn()
	College college;
	
	public int getCourse_Id() {
		return course_Id;
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

	@OneToMany(mappedBy ="courses")
	List<Student> student;
	

}
