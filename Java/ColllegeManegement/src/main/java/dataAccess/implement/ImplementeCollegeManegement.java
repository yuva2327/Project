package dataAccess.implement;

import dataAccess.interfases.CollegeManegementInterface;
import entity.CollegeManegemant;
import jakarta.persistence.EntityManager;
import jakarta.persistence.EntityManagerFactory;
import jakarta.persistence.EntityTransaction;
import jakarta.persistence.Persistence;

public class ImplementeCollegeManegement implements CollegeManegementInterface {
	
	EntityManagerFactory entityManagerFactory=Persistence.createEntityManagerFactory("yuva");
	EntityManager entityManager=entityManagerFactory.createEntityManager();
	EntityTransaction entityTransaction=entityManager.getTransaction();

	@Override
	public CollegeManegemant getCollegeManegementData(int com) {
		CollegeManegemant CollegeManegemant=entityManager.find(CollegeManegemant.class,com);
		return CollegeManegemant;
	}

	@Override
	public void SavedCollegeManegementData(CollegeManegemant collegeManegemant) {
		entityTransaction.begin();
		entityManager.persist(collegeManegemant);
		entityTransaction.commit();
	}

}
