package entity;

import java.util.List;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.EntityManager;
import jakarta.persistence.EntityManagerFactory;
import jakarta.persistence.EntityTransaction;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;
import jakarta.persistence.OneToMany;
import jakarta.persistence.Persistence;
import jakarta.persistence.Table;

@Entity
@Table(name = "MANEGEMANT")
public class CollegeManegemant {
	
	@Id
	@GeneratedValue(strategy = GenerationType.IDENTITY)
	@Column(name = "MANEGEMANT ID")
	private int collegeManegemant_Id;
	@Column(name = "MANEGEMANT NAME",nullable = false , length = 20)
	private String collegeManegemant_Name;
	@Column(name = "MANEGEMANT WEBSITE",nullable = false , length = 20)
	private String collegeManegemant_website;
	@Column(name = "MANEGEMANT PHONE",nullable = false , length = 20)
	private long collegeManegemant_PhoneNumber;
	@Column(name = "MANEGEMANT ADDRESS",nullable = false, length = 20)
	private String collegeManegemant_Address;
	
	
	public int getCollegeManegemant_Id() {
		return collegeManegemant_Id;
	}

	public void setCollegeManegemant_Id(int collegeManegemant_Id) {
		this.collegeManegemant_Id = collegeManegemant_Id;
	}

	public String getCollegeManegemant_Name() {
		return collegeManegemant_Name;
	}

	public void setCollegeManegemant_Name(String collegeManegemant_Name) {
		this.collegeManegemant_Name = collegeManegemant_Name;
	}

	public String getCollegeManegemant_website() {
		return collegeManegemant_website;
	}

	public void setCollegeManegemant_website(String collegeManegemant_website) {
		this.collegeManegemant_website = collegeManegemant_website;
	}

	public long getCollegeManegemant_PhoneNumber() {
		return collegeManegemant_PhoneNumber;
	}

	public void setCollegeManegemant_PhoneNumber(long collegeManegemant_PhoneNumber) {
		this.collegeManegemant_PhoneNumber = collegeManegemant_PhoneNumber;
	}

	public String getCollegeManegemant_Address() {
		return collegeManegemant_Address;
	}

	public void setCollegeManegemant_Address(String collegeManegemant_Address) {
		this.collegeManegemant_Address = collegeManegemant_Address;
	}

	@OneToMany(mappedBy = "collegeManegemant")
	List<College> college;
	
	public List<College> getCollege() {
		return college;
	}

	public void setCollege(List<College> college) {
		this.college = college;
	}



}
