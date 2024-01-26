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
import jakarta.persistence.Table;

@Entity
@Table(name = "COLLEGE")
public class College {
	@Id
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	private int college_Id;
	@Column(name = "COLLEGE NAME",nullable = false , length = 20)
	private String college_Name;
	@Column(name = "COLLEGE PRINCIPAL",nullable = false , length = 20)
	private String principal_Name;
	@Column(name = "COLLEGE WEBSITE",nullable = false, length = 20)
	private String college_website;
	@Column(name = "COLLEGE PHONE",nullable = false, length = 20)
	private long college_PhoneNumber;
	@Column(name = "COLLEGE ADDRESS",nullable = false , length = 20)
	private String college_Address;

	public int getCollege_Id() {
		return college_Id;
	}

	public String getCollege_Name() {
		return college_Name;
	}

	public void setCollege_Name(String college_Name) {
		this.college_Name = college_Name;
	}

	public String getPrincipal_Name() {
		return principal_Name;
	}

	public void setPrincipal_Name(String principal_Name) {
		this.principal_Name = principal_Name;
	}

	public String getCollege_website() {
		return college_website;
	}

	public void setCollege_website(String college_website) {
		this.college_website = college_website;
	}

	public long getCollege_PhoneNumber() {
		return college_PhoneNumber;
	}

	public void setCollege_PhoneNumber(long college_PhoneNumber) {
		this.college_PhoneNumber = college_PhoneNumber;
	}

	public String getCollege_Address() {
		return college_Address;
	}

	public void setCollege_Address(String college_Address) {
		this.college_Address = college_Address;
	}

	public CollegeManegemant getCollegeManegemant() {
		return collegeManegemant;
	}

	public void setCollegeManegemant(CollegeManegemant collegeManegemant) {
		this.collegeManegemant = collegeManegemant;
	}

	public List<College_Staff> getCollege_Staffs() {
		return college_Staffs;
	}

	public void setCollege_Staffs(List<College_Staff> college_Staffs) {
		this.college_Staffs = college_Staffs;
	}

	public List<Teachers> getTeachers() {
		return teachers;
	}

	public void setTeachers(List<Teachers> teachers) {
		this.teachers = teachers;
	}

	public List<Courses> getCoures() {
		return coures;
	}

	public void setCoures(List<Courses> coures) {
		this.coures = coures;
	}

	public List<Student> getStudent() {
		return student;
	}

	public void setStudent(List<Student> student) {
		this.student = student;
	}

	@ManyToOne
	@JoinColumn 
	CollegeManegemant collegeManegemant;
	
	@OneToMany(mappedBy = "college")
	List<College_Staff> college_Staffs;
	
	@OneToMany(mappedBy ="college")
	List<Teachers> teachers;
	
	@OneToMany(mappedBy = "college")
	List<Courses> coures;
	
	@OneToMany(mappedBy = "college")
	List<Student> student;
}
