package dataAccess.implement;

import dataAccess.interfases.TeacherInterfeses;
import entity.Teachers;
import jakarta.persistence.EntityManager;
import jakarta.persistence.EntityManagerFactory;
import jakarta.persistence.EntityTransaction;
import jakarta.persistence.Persistence;

public class ImplementTeacherData implements TeacherInterfeses{
	
	EntityManagerFactory entityManagerFactory=Persistence.createEntityManagerFactory("yuva");
	EntityManager entityManager=entityManagerFactory.createEntityManager();
	EntityTransaction entityTransaction=entityManager.getTransaction();
	
	@Override
	public void SaveTeacherData(Teachers teachers) {
		entityTransaction.begin();
		entityManager.persist(teachers);
		entityTransaction.commit();
	}

	@Override
	public void UpdateTeacherData(int teaId, Teachers teachers) {
		Teachers tea=entityManager.find(Teachers.class, teaId);
		tea.setTeacher_Name(teachers.getTeacher_Name());
		tea.setTeacher_Phone_number(teachers.getTeacher_Phone_number());
		tea.setSubject(teachers.getSubject());
		entityTransaction.begin();
		entityManager.merge(tea);
		entityTransaction.commit();
	}

	@Override
	public boolean DeleteTeacherData(int teaId) {
		Teachers tea=entityManager.find(Teachers.class, teaId);
		entityTransaction.begin();
		entityManager.remove(tea);
		entityTransaction.commit();
		return false;
	}

	@Override
	public Teachers getTeacherData(int teaId) {
		Teachers tea=entityManager.find(Teachers.class, teaId);
		return tea;
	}

}
