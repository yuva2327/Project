package dataAccess.implement;

import dataAccess.interfases.CourseInterfaces;
import entity.Courses;
import jakarta.persistence.EntityManager;
import jakarta.persistence.EntityManagerFactory;
import jakarta.persistence.EntityTransaction;
import jakarta.persistence.Persistence;

public class implementCourseData implements CourseInterfaces {
	
	EntityManagerFactory entityManagerFactory=Persistence.createEntityManagerFactory("yuva");
	EntityManager entityManager=entityManagerFactory.createEntityManager();
	EntityTransaction entityTransaction=entityManager.getTransaction();

	@Override
	public void SaveCourseData(Courses courses) {
		entityTransaction.begin();
		entityManager.persist(courses);
		entityTransaction.commit();
		
	}

	@Override
	public void UpdateCourseData(int coId, Courses courses) {
		Courses cor=entityManager.find(Courses.class, coId);
		cor.setCourse_Name(courses.getCourse_Name());
		entityTransaction.begin();
		entityManager.merge(cor);
		entityTransaction.commit();
	}

	@Override
	public boolean DeleteCourseData(int coId) {
		Courses cor=entityManager.find(Courses.class, coId);
		entityTransaction.begin();
		entityManager.remove(cor);
		entityTransaction.commit();
		return false;
	}

	@Override
	public Courses getCoureseData(int coId) {
		Courses cor=entityManager.find(Courses.class, coId);
		return cor;
	}

	
}
