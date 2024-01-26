package dataAccess.implement;

import dataAccess.interfases.CollegeInterfaces;
import entity.College;
import jakarta.persistence.EntityManager;
import jakarta.persistence.EntityManagerFactory;
import jakarta.persistence.EntityTransaction;
import jakarta.persistence.Persistence;

public class ImplementCollegeData implements CollegeInterfaces {
	
	EntityManagerFactory entityManagerFactory=Persistence.createEntityManagerFactory("yuva");
	EntityManager entityManager=entityManagerFactory.createEntityManager();
	EntityTransaction entityTransaction=entityManager.getTransaction();
	
	@Override
	public void SaveCollege(College college) {
		entityTransaction.begin();
		entityManager.persist(college);
		entityTransaction.commit();
		
	}

	@Override
	public void UpdateCollege(int colId, College college) {
		College Co=entityManager.find(College.class,colId);
		Co.setCollege_Name(college.getCollege_Name());
		Co.setCollege_website(college.getCollege_website());
		Co.setCollege_PhoneNumber(college.getCollege_PhoneNumber());
		Co.setCollege_Address(college.getCollege_Address());

		entityTransaction.begin();
		entityManager.merge(Co);
		entityTransaction.commit();
		
	}

	@Override
	public boolean DeleteCollege(int colId) {
		College Co=entityManager.find(College.class,colId);
		entityTransaction.begin();
		entityManager.remove(Co);
		entityTransaction.commit();
		
		return false;
	}

	@Override
	public College getCollege(String college) {
		College Co=entityManager.find(College.class,college);
		return Co;
	}

	@Override
	public College getCollege(int colId) {
		College Co=entityManager.find(College.class,colId);
		return Co;
	}

	
}
