package dataAccess.implement;

import dataAccess.interfases.StudentCourseInterface;
import entity.StudentCourse;
import jakarta.persistence.EntityManager;
import jakarta.persistence.EntityManagerFactory;
import jakarta.persistence.EntityTransaction;
import jakarta.persistence.Persistence;

public class ImplementStudentCourseData implements StudentCourseInterface  {
	
	EntityManagerFactory entityManagerFactory=Persistence.createEntityManagerFactory("yuva");
	EntityManager entityManager=entityManagerFactory.createEntityManager();
	EntityTransaction entityTransaction=entityManager.getTransaction();

	@Override
	public void SaveStudentCourseData(StudentCourse studentCourse) {
		entityTransaction.begin();
		entityManager.persist(studentCourse);
		entityTransaction.commit();
	}

	@Override
	public void UpdateStudentCourseData(int stC, StudentCourse studentCourse) {
		StudentCourse sc=entityManager.find(StudentCourse.class, stC);
		sc.setStudentCourse_Name(studentCourse.getStudentCourse_Name());
		entityTransaction.begin();
		entityManager.persist(studentCourse);
		entityTransaction.commit();
	}

	@Override
	public boolean DeleteStudentCourseData(int stC) {
		StudentCourse sc=entityManager.find(StudentCourse.class, stC);
		entityTransaction.begin();
		entityManager.remove(sc);
		entityTransaction.commit();
		return false;
	}

	@Override
	public StudentCourse getStudentCourse(int stC) {
		StudentCourse sc=entityManager.find(StudentCourse.class, stC);
		return sc;
	}

}
