package dataAccess.implement;

import dataAccess.interfases.StaffInterface;
import entity.College_Staff;
import jakarta.persistence.EntityManager;
import jakarta.persistence.EntityManagerFactory;
import jakarta.persistence.EntityTransaction;
import jakarta.persistence.Persistence;

public class ImplementStaffData implements StaffInterface {
	EntityManagerFactory entityManagerFactory=Persistence.createEntityManagerFactory("yuva");
	EntityManager entityManager=entityManagerFactory.createEntityManager();
	EntityTransaction entityTransaction=entityManager.getTransaction();
	

	@Override
	public void SaveStaffData(College_Staff collegeStaff) {
		entityTransaction.begin();
		entityManager.persist(collegeStaff);
		entityTransaction.commit();
		
	}

	@Override
	public void UpdateStaffData(int stfId, College_Staff collegeStaff) {
		College_Staff conf=entityManager.find(College_Staff.class,stfId);
		conf.setStaff_Name(collegeStaff.getStaff_Name());
		conf.setStaff_Work(collegeStaff.getStaff_Work());
		entityTransaction.begin();
		entityManager.merge(conf);
		entityTransaction.commit();
		
		
	}

	@Override
	public boolean DeleteStaffData(int stfId) {
		College_Staff conf=entityManager.find(College_Staff.class,stfId);
		entityTransaction.begin();
		entityManager.remove(conf);
		entityTransaction.commit();
		return false;
	}

	@Override
	public College_Staff getStaffData(int stfId) {
		College_Staff conf=entityManager.find(College_Staff.class,stfId);
		return conf;
	}
	

}
