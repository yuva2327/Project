package dataAccess.implement;

import dataAccess.interfases.StudentInterface;
import entity.Student;
import jakarta.persistence.EntityManager;
import jakarta.persistence.EntityManagerFactory;
import jakarta.persistence.EntityTransaction;
import jakarta.persistence.Persistence;

public class ImpleamentStudentData implements StudentInterface{
	
	EntityManagerFactory entityManagerFactory=Persistence.createEntityManagerFactory("yuva");
	EntityManager entityManager=entityManagerFactory.createEntityManager();
	EntityTransaction entityTransaction=entityManager.getTransaction();

	@Override
	public void SaveStudentData(Student student) {
		entityTransaction.begin();
		entityManager.persist(student);
		entityTransaction.commit();
	}

	@Override
	public void UpdateStudentData(int stuId, Student student) {
		Student stu=entityManager.find(Student.class, stuId);
//		stu.setStudent_Id(student.getStudent_Id());
		stu.setStudent_Name(student.getStudent_Name());
		stu.setStudent_Course(student.getStudent_Course());
		stu.setStudent_PhoneNumber(student.getStudent_PhoneNumber());
		stu.setStudent_Address(student.getStudent_Address());
		entityTransaction.begin();
		entityManager.merge(stu);
		entityTransaction.commit();
		
	}

	@Override
	public boolean DeleteStudentData(int stuId) {
		Student stu=entityManager.find(Student.class, stuId);
		entityTransaction.begin();
		entityManager.remove(stu);
		entityTransaction.commit();
		return false;
	}

	@Override
	public Student getStudentData(int stuId) {
		Student stu=entityManager.find(Student.class, stuId);
		return stu;
	}

}
