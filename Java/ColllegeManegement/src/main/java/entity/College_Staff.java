package entity;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;
import jakarta.persistence.JoinColumn;
import jakarta.persistence.ManyToOne;
import jakarta.persistence.OneToMany;

@Entity
public class College_Staff {
	@Id
	@Column(name = "STAFF ID")
	private int staff_Id;
	@Column(name = "STAFF NAME")
	private String staff_Name;
	@Column(name = "STAFF WORK")
	private String staff_Work;
	
	@ManyToOne
	@JoinColumn 
	College college;
	
	public int getStaff_Id() {
		return staff_Id;
	}

	public String getStaff_Name() {
		return staff_Name;
	}

	public void setStaff_Name(String staff_Name) {
		this.staff_Name = staff_Name;
	}

	public String getStaff_Work() {
		return staff_Work;
	}

	public void setStaff_Work(String staff_Work) {
		this.staff_Work = staff_Work;
	}

	public College getCollege() {
		return college;
	}

	public void setCollege(College college) {
		this.college = college;
	}

	public void setStaff_Id(int staff_Id) {
		this.staff_Id = staff_Id;
	}

	
	
	

}
