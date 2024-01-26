package dataAccess.implement;

import dataAccess.interfases.StudentTotalMark;
import entity.Student_Total_mark;
import jakarta.persistence.EntityManager;
import jakarta.persistence.EntityManagerFactory;
import jakarta.persistence.EntityTransaction;
import jakarta.persistence.Persistence;

public class ImplementTotalMarkData implements StudentTotalMark {
	
	EntityManagerFactory entityManagerFactory=Persistence.createEntityManagerFactory("yuva");
	EntityManager entityManager=entityManagerFactory.createEntityManager();
	EntityTransaction entityTransaction=entityManager.getTransaction();

	@Override
	public void SaveMarkData(Student_Total_mark studentTotalMark) {
		entityTransaction.begin();
		entityManager.persist(studentTotalMark);
		entityTransaction.commit();
	}

	@Override
	public void UpdateMarkData(int toMark, Student_Total_mark studentTotalMark) {
		Student_Total_mark toM=entityManager.find(Student_Total_mark.class,toMark);
		toM.setStudent_TotalMark(studentTotalMark.getStudent_TotalMark());
		entityTransaction.begin();
		entityManager.merge(toM);
		entityTransaction.commit();
		
	}

	@Override
	public boolean DeleteMarkData(int toMark) {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public Student_Total_mark getMarkData(int toMark) {
		// TODO Auto-generated method stub
		return null;
	}

}
