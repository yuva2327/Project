package entity;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;
import jakarta.persistence.JoinColumn;
import jakarta.persistence.ManyToOne;
import jakarta.persistence.OneToOne;

@Entity
public class Student {
	@Column(name = "COLUM NO")
	@GeneratedValue(strategy = GenerationType.SEQUENCE)
	private int Id;
    @Id
	@Column(name = "STUDNET ID",nullable = false ,unique = true, length = 20)
	private int student_Id;
	@Column(name = "STUDNET NAME",nullable = false , length = 20)
	private String student_Name;
	@Column(name = "STUDNET PHONE",nullable = false ,unique = true, length = 20)
	private long student_PhoneNumber;
	@Column(name = "STUDNET ADDRESS",nullable = false , length = 20)
	private String student_Address;
	public int getId() {
		return Id;
	}

	public int getStudent_Id() {
		return student_Id;
	}

	public void setStudent_Id(int student_Id) {
		this.student_Id = student_Id;
	}

	public String getStudent_Name() {
		return student_Name;
	}

	public void setStudent_Name(String student_Name) {
		this.student_Name = student_Name;
	}

	public long getStudent_PhoneNumber() {
		return student_PhoneNumber;
	}

	public void setStudent_PhoneNumber(long student_PhoneNumber) {
		this.student_PhoneNumber = student_PhoneNumber;
	}

	public String getStudent_Address() {
		return student_Address;
	}

	public void setStudent_Address(String student_Address) {
		this.student_Address = student_Address;
	}

	public String getStudent_Course() {
		return student_Course;
	}

	public void setStudent_Course(String student_Course) {
		this.student_Course = student_Course;
	}

	public College getCollege() {
		return college;
	}

	public void setCollege(College college) {
		this.college = college;
	}

	public Teachers getTeachers() {
		return teachers;
	}

	public void setTeachers(Teachers teachers) {
		this.teachers = teachers;
	}

	public Courses getCourses() {
		return courses;
	}

	public void setCourses(Courses courses) {
		this.courses = courses;
	}

	public Student_Total_mark getStudent_Total_mark() {
		return Student_Total_mark;
	}

	public void setStudent_Total_mark(Student_Total_mark student_Total_mark) {
		Student_Total_mark = student_Total_mark;
	}

	public StudentCourse getCourse() {
		return course;
	}

	public void setCourse(StudentCourse course) {
		this.course = course;
	}

	private String student_Course;
	
	@ManyToOne
	@JoinColumn 
	College college;
	
	@ManyToOne
	@JoinColumn 
	Teachers teachers;
	
	@ManyToOne
	@JoinColumn 
	Courses courses;
	
	@OneToOne(mappedBy = "student")
	Student_Total_mark Student_Total_mark;
	
	@OneToOne(mappedBy = "student")
	StudentCourse course;
	
}
