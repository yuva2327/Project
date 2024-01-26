package control;


import java.awt.Button;
import java.awt.Choice;
import java.awt.Color;
import java.awt.Frame;
import java.awt.Label;
import java.awt.TextField;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;
import java.util.Iterator;
import java.util.List;

import javax.naming.ldap.HasControls;

import com.mysql.cj.Query;

import dataAccess.implement.ImpleamentStudentData;
import dataAccess.implement.ImplementCollegeData;
import dataAccess.implement.ImplementStaffData;
import dataAccess.implement.ImplementStudentCourseData;
import dataAccess.implement.ImplementTotalMarkData;
import dataAccess.implement.ImplementeCollegeManegement;
import dataAccess.implement.implementCourseData;
import entity.College;
import entity.CollegeManegemant;
import entity.College_Staff;
import entity.Courses;
import entity.Student;
import entity.StudentCourse;
import entity.Student_Total_mark;
import entity.Teachers;
import jakarta.persistence.EntityManager;
import jakarta.persistence.EntityManagerFactory;
import jakarta.persistence.EntityTransaction;
import jakarta.persistence.Persistence;
import servises.CollegeManegemantServices;
import servises.CollegeServise;
import servises.CourseServices;
import servises.StaffSevises;
import servises.StudentCourseServices;
import servises.StudentServices;
import servises.StudentTotalMarkServices;
import servises.TeacherServises;

public class SaveCollegeManegemanetContol {

	public static void main(String[] args) {
	//This will be Have still Updating stage it will 
	//Data base name "CollegeManegemant"
		EntityManagerFactory entityManagerFactory=Persistence.createEntityManagerFactory("yuva");
		final EntityManager entityManager=entityManagerFactory.createEntityManager();
		CollegeManegemantServices collegeManegemantServices=new CollegeManegemantServices();
		CollegeManegemant collegeManegemant=new CollegeManegemant();
		
		College college1=new College();
	
		
		collegeManegemant=entityManager.find(CollegeManegemant.class,1);
		
		
		
		 final Frame frame = new Frame("Login Sheet");
			frame.setBackground(Color.CYAN);
			
			 Label ManegemantName=new Label("MANEGEMANT NAME :");
			 final TextField ManegemantInput=new TextField(""+collegeManegemant.getCollegeManegemant_Name());
			 ManegemantName.setBounds(100,85,150,30);
			 ManegemantInput.setBounds(90,120,150,25); 
			 
			
			 final Choice Collegechoice=new Choice();
			 for(int a=1;a<=4;a++) {
					college1=entityManager.find(College.class,a);
					 Collegechoice.add(""+college1.getCollege_Name());
			 }
			
			
			 Label CollegeName=new Label("COLLEGE NAME :");
			 final TextField CollegeInput=new TextField();
			 CollegeName.setBounds(270,86,150,30);
			 CollegeInput.setBounds(245,120,150,25);
			 frame.add(CollegeName);
			 frame.add(CollegeInput);
			
			 Collegechoice.setBounds(245,160,150,25);
			 
			 Label Course=new Label("COURSE NAME :");
			 final TextField CourseInput=new TextField();
			 Course.setBounds(430,86,150,30);
			 CourseInput.setBounds(400,120,150,25);
			 
			 Label TeacherId=new Label("TEACHER ID :");
			 final TextField TeacherIdInput=new TextField();
			 TeacherId.setBounds(585,86,150,30);
			 TeacherIdInput.setBounds(557,120,150,25);
			 
			 Label StudentId=new Label("STUDENT ID :");
			 final TextField StudentIdInput=new TextField();
			 StudentId.setBounds(740,86,150,30);
			 StudentIdInput.setBounds(715,120,150,25);

			 Label StaffId=new Label("STAFF ID :");
			 final TextField StaffIdInput=new TextField();
			 StaffId.setBounds(900,86,150,30);
			 StaffIdInput.setBounds(873,120,150,25);
			 
			 final Label Error=new Label("If YOU MISS SOME DATA");
			 Error.setBounds(460,550,150,25);	
			 Error.setBackground(Color.yellow);		
			 
			 
						 final Label StudentName=new Label("STUDENT NAME :");
						 final TextField StudentInput=new TextField();
						 
						 final Label StudentPhone=new Label("STUDENT PHONE :");
						 final TextField StudentPhoneInput=new TextField();
						 
						 final Label StudentADD=new Label("STUDENT ADD :");
						 final TextField StudentADDInput=new TextField();
						 
						 final Label StudentSub=new Label("STUDENT SUB :");
						 final TextField StudentsubInput=new TextField();
						 
						 final Label Studentmark=new Label("STUDENT MARK :");
						 final TextField StudentmarkInput=new TextField();
						 
						 
     		 
     		 final Label NewCollegePrisipal=new Label ("PRINCIPAL NAME");
			 final TextField CollegePrisipal=new TextField();
     		 
     		 final Label NewCollegeWeb=new Label("ENTER COLLEGE WEB :");
			 final TextField NewCollegewebInput=new TextField();
			 
			 final Label NewCollegePhone=new Label("ENTER COLLEGE PHONE :");
			 final TextField NewCollegePhoneInput=new TextField();
			 
			 final Label NewCollegeADD=new Label("ENTER COLLEGE ADD :");
			 final TextField NewCollegeADDInput=new TextField();
			
     		 
						 final Label NewTeacherName=new Label("ENTER TEACHER NAME :");
						 final TextField NewTeacherInput=new TextField();
						 
						 final Label NewTeacherSub=new Label("ENTER TEACHER SUB :");
						 final TextField NewTeacherSubInput=new TextField();
						 
						 final Label NewTeacherPhone=new Label("ENTER TEACHER PHONE :");
						 final TextField NewTeacherPhoneInput=new TextField();
						 
			 final Label StaffName=new Label("STAFF NAME :");
	   		 final TextField StaffInput=new TextField();
	   		 
	   		 final Label StaffWork=new Label("STAFF WORK :");
			 final TextField StaffworkInput=new TextField();
			 
			
	 final Button btn1=new Button("Check");
	 btn1.setBounds(400,450,150,25);	
	 btn1.setBackground(Color.yellow);
	 frame.add(btn1);

	 
	 ActionListener cheak=new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
			
				if(CollegeInput.getText().length()!=0) {
					
					 NewCollegePrisipal.setBounds(245,200,150,25);
					 CollegePrisipal.setBounds(245,220,150,25);
					 frame.add(NewCollegePrisipal);
					 frame.add(CollegePrisipal);
					 
					 NewCollegeWeb.setBounds(245,245,150,25);
					 NewCollegewebInput.setBounds(245,265,150,25);
					 frame.add(NewCollegeWeb);
					 frame.add(NewCollegewebInput);
					 
					 NewCollegePhone.setBounds(245,290,160,25);
					 NewCollegePhoneInput.setBounds(245,310,150,25);
					 frame.add(NewCollegePhone);
					 frame.add(NewCollegePhoneInput);
					 
					 NewCollegeADD.setBounds(245,335,160,25);
					 NewCollegeADDInput.setBounds(245,355,150,25);
					 frame.add(NewCollegeADD);
					 frame.add(NewCollegeADDInput);
				}
				
				
				
				if(StudentIdInput.getText().length()!=0) {
					
					 StudentName.setBounds(740,160,150,30);
					 StudentInput.setBounds(715,190,150,25);
					 frame.add(StudentName);
					 frame.add(StudentInput);
					 
					
					 StudentPhone.setBounds(740,220,150,30);
					 StudentPhoneInput.setBounds(715,250,150,25);
					 frame.add(StudentPhone);
					 frame.add(StudentPhoneInput);
					 
					
					 StudentADD.setBounds(740,278,150,30);
					 StudentADDInput.setBounds(715,310,150,25);
					 frame.add(StudentADD);
					 frame.add(StudentADDInput);	
					 
					 StudentSub.setBounds(740, 340, 150, 30);
					 StudentsubInput.setBounds(715, 370, 150, 25);
					 frame.add(StudentSub);
					 frame.add(StudentsubInput);
					 
					 Studentmark.setBounds(740, 400, 150, 30);
					 StudentmarkInput.setBounds(715, 435, 150, 25);					 
					 frame.add(Studentmark);
					 frame.add(StudentmarkInput);
				}
				
				
				if(TeacherIdInput.getText().length()!=0) {
					 
					 NewTeacherName.setBounds(560,160,150,30);
					 NewTeacherInput.setBounds(557,190,150,25);
					 frame.add(NewTeacherName);
					 frame.add(NewTeacherInput);
					 
					 NewTeacherSub.setBounds(560,220,150,30);
					 NewTeacherSubInput.setBounds(557,250,150,25);
					 frame.add(NewTeacherSub);
					 frame.add(NewTeacherSubInput);
					 
					 NewTeacherPhone.setBounds(555,278,150,30);
					 NewTeacherPhoneInput.setBounds(557,310,150,25);
					 frame.add(NewTeacherPhone);
					 frame.add(NewTeacherPhoneInput);
				}
				
				if(StaffIdInput.getText().length()!=0) {
					 
					 StaffName.setBounds(900,160,150,30);
					 StaffInput.setBounds(873,190,150,25);
					 frame.add(StaffName);
					 frame.add(StaffInput);
					 
					 StaffWork.setBounds(900,220,150,30);
					 StaffworkInput.setBounds(873,250,150,25);
					 frame.add(StaffWork);
					 frame.add(StaffworkInput);
			
				}
				
			}
	 };

	 btn1.addActionListener(cheak);
	 
	 
	 
	 final Button btn=new Button("Save");
	 btn.setBounds(553,450,150,25);

ActionListener submit=new ActionListener() {
	
	 
	@Override
	public void actionPerformed(ActionEvent e) {
		btn.setBackground(Color.green);
		int selectedIndex = Collegechoice.getSelectedIndex();
		selectedIndex+=1;
		
		if(StudentIdInput.getText().length()==0 &&StudentInput.getText().length()==0
				&&StudentPhoneInput.getText().length()==0&&StudentADDInput.getText().length()==0&&
				StudentsubInput.getText().length()==0&&StudentmarkInput.getText().length()==0) {
			
			
		}else if(StudentIdInput.getText().length()!=0 &&StudentInput.getText().length()!=0
				&&StudentPhoneInput.getText().length()!=0&&StudentADDInput.getText().length()!=0
				&&StudentsubInput.getText().length()!=0&&StudentmarkInput.getText().length()!=0) {
			
			int no=(int) Long.parseLong( StudentIdInput.getText());
			String name=StudentInput.getText();
			long phone=Long.parseLong(StudentPhoneInput.getText());
			String add=StudentADDInput.getText();
			String sub=StudentsubInput.getText();
			
			int mark=(int) Long.parseLong( StudentmarkInput.getText());
			saveStudentData(no,name,phone,add,selectedIndex);
			saveSub(sub,no);
			saveMark(mark,no);
			
			StudentIdInput.setText(null);
			StudentInput.setText(null);
			StudentPhoneInput.setText(null);
			StudentADDInput.setText(null);
			StudentsubInput.setText(null);
			StudentmarkInput.setText(null);
			
		}else if(StudentIdInput.getText().length()==0 &&StudentInput.getText().length()==0
				&&StudentPhoneInput.getText().length()==0&&StudentADDInput.getText().length()==0&&
				StudentsubInput.getText().length()!=0&&StudentmarkInput.getText().length()!=0){
			
			int no=(int) Long.parseLong( StudentIdInput.getText());
			String sub=StudentsubInput.getText();
			int mark=(int) Long.parseLong( StudentmarkInput.getText());
			
			saveSub(sub,no);
			saveMark(mark,no);
			StudentIdInput.setText(null);
			StudentsubInput.setText(null);
			StudentmarkInput.setText(null);
		}else {
		
			frame.add(Error);
		}
		
		
		
		if(CollegeInput.getText().length()==0&&NewCollegewebInput.getText().length()==0
			      &&NewCollegePhoneInput.getText().length()==0&&NewCollegeADDInput.getText().length()==0
			      &&CollegePrisipal.getText().length()==0) {
				 
		 }else if(CollegeInput.getText().length()!=0&&NewCollegewebInput.getText().length()!=0
			      &&NewCollegePhoneInput.getText().length()!=0&&NewCollegeADDInput.getText().length()!=0
			      &&CollegePrisipal.getText().length()!=0) {
			 
			 	String name=CollegeInput.getText();
			 	String web=NewCollegewebInput.getText();
			 	String prince=CollegePrisipal.getText();
				long phone=Long.parseLong(NewCollegePhoneInput.getText());
				String add=StudentADDInput.getText();
				String manegemantName=ManegemantInput.getText();
				
				saveCollegeData(name,prince,web,phone,add,manegemantName);
				CollegeInput.setText(null);
				NewCollegePhoneInput.setText(null);
				StudentADDInput.setText(null);
				
		}else {
			frame.add(Error);
		}
		
		
		if(TeacherIdInput.getText().length()==0&&NewTeacherInput.getText().length()==0
			&&NewTeacherSubInput.getText().length()==0&&NewTeacherPhoneInput.getText().length()==0) {
		
	    }else if(TeacherIdInput.getText().length()!=0&&NewTeacherInput.getText().length()!=0
				&&NewTeacherSubInput.getText().length()!=0&&NewTeacherPhoneInput.getText().length()!=0) {
	    	
	    	int no=(int) Long.parseLong( TeacherIdInput.getText());
	    	String name=NewTeacherInput.getText();
		 	String sub=NewTeacherSubInput.getText();
			long phone=Long.parseLong(NewTeacherPhoneInput.getText());

	    	saveTeacherData(no,name,sub,phone,selectedIndex);
	    	TeacherIdInput.setText(null);
	    	NewTeacherInput.setText(null);
	    	NewTeacherSubInput.setText(null);
	    	NewTeacherPhoneInput.setText(null);
		}else {
			frame.add(Error);
		}
		
		 if(StaffIdInput.getText().length()==0&&StaffInput.getText().length()==0&&StaffworkInput.getText().length()==0) {
				 
		 }else if(StaffIdInput.getText().length()!=0&&StaffInput.getText().length()!=0&&StaffworkInput.getText().length()!=0) {
			
			 int id=(int) Long.parseLong(StaffIdInput.getText());
			 String name=StaffInput.getText();
			 String work=StaffworkInput.getText();
			 saveStaffData(id,name,work,selectedIndex);
			 
			 
			 
			 StaffIdInput.setText(null);
			 StaffInput.setText(null);
			 StaffworkInput.setText(null);
		 }else {
			 frame.add(Error);
		 }
		 
		 if(CourseInput.getText().length()!=0) {
			 String course=CourseInput.getText();
			 saveCourseData(course,selectedIndex);
		 }
		
		 
		 btn.setBackground(Color.RED);
	}
	
};

btn.addActionListener(submit);
btn.setBackground(Color.RED);
frame.add(btn);

							 
							 
			frame.add(ManegemantName);
			frame.add(ManegemantInput);
			frame.add(Course);
    		frame.add(CourseInput);
			frame.add(TeacherId);
			frame.add(TeacherIdInput);
			frame.add(StudentId);
			frame.add(StudentIdInput);
			frame.add(StaffId);
			frame.add(StaffIdInput);
			frame.add(Collegechoice);			
			
	   	 frame.setLayout(null);
    	 frame.setSize(500,500);
    	 frame.setVisible(true);
		
	}
	
	public static void saveCollegeManegemant(String manName,String manWeb,long manPhone,String manAdd) {
		CollegeManegemantServices collegeManegemantServices=new CollegeManegemantServices();
		CollegeManegemant collegeManegemant=new CollegeManegemant();
		
		collegeManegemant.setCollegeManegemant_Name(manName);
		collegeManegemant.setCollegeManegemant_website(manWeb);
		collegeManegemant.setCollegeManegemant_PhoneNumber(manPhone);
		collegeManegemant.setCollegeManegemant_Address(manAdd);
		collegeManegemantServices.SavedCollegeManegemant(collegeManegemant);
	}
	
	public static void saveCollegeData(String colName,String colPrinsipal ,String colWeb,long colPhone,String ColAdd,String manegemant) {
		CollegeServise college=new CollegeServise();
		College college2=new College();

		college2.setCollege_Name(colName);
		college2.setPrincipal_Name(colPrinsipal);
		college2.setCollege_website(colWeb);
		college2.setCollege_PhoneNumber(colPhone);
		college2.setCollege_Address(ColAdd);
		ImplementeCollegeManegement Cm=new ImplementeCollegeManegement();
		college2.setCollegeManegemant(Cm.getCollegeManegementData(1));
		college.SavedCollgeData(college2);
	}
	
	public static void saveCourseData(String coName,int colname) {
		CourseServices course=new CourseServices();
		Courses courses=new Courses();
		
		courses.setCourse_Name(coName);
		ImplementCollegeData Cd=new ImplementCollegeData();
		courses.setCollege(Cd.getCollege(colname));
		course.SavedCourseData(courses);
	}
	
	public static void saveStaffData(int id,String name,String work,int college) {
		StaffSevises staffsevises=new StaffSevises();
		College_Staff staff=new College_Staff();
		ImplementCollegeData Cd=new ImplementCollegeData();
		staff.setStaff_Id(id);
		staff.setStaff_Name(name);
		staff.setStaff_Work(work);
		staff.setCollege(Cd.getCollege(college));
		staffsevises.SaveStaffData(staff);
	}
	
	public static void saveTeacherData(int no,String name,String sub,long phone,int clname) {
		TeacherServises teacher=new TeacherServises();
		Teachers teachers=new Teachers();
		
		teachers.setTeachers_Id(no);
		teachers.setTeacher_Name(name);
		teachers.setSubject(sub);
		teachers.setTeacher_Phone_number(phone);
		ImplementCollegeData Cd=new ImplementCollegeData();
		teachers.setCollege(Cd.getCollege(clname));
		teacher.SavedTeacherData(teachers);
	}
	
	public static void saveStudentData(int id,String name,long phone,String add,int collgeNam) {
		final StudentServices student=new StudentServices();
		final Student student2=new Student();
		ImplementCollegeData Cd=new ImplementCollegeData();
		
		student2.setStudent_Id(id);
		student2.setStudent_Name(name);
		student2.setStudent_PhoneNumber(phone );
		student2.setStudent_Address(add);
		student2.setCourses(null);
		student2.setCollege(Cd.getCollege(collgeNam));
		student.SavedStudentData(student2);
	}
	
	public static void saveMark(int marks,int id) {
		StudentTotalMarkServices studentTotalMark=new StudentTotalMarkServices();
		Student_Total_mark mark=new Student_Total_mark();
		ImpleamentStudentData sd=new ImpleamentStudentData();

		mark.setStudent_TotalMark(marks);
		mark.setStudent(sd.getStudentData(id));
		studentTotalMark.SavedStudentTotalMark(mark);
	}
	
	public static void saveSub(String subname,int id) {
		StudentCourseServices studentcourse=new StudentCourseServices();
		StudentCourse stCourse=new StudentCourse();

		stCourse.setStudentCourse_Name(subname);
		ImpleamentStudentData sd=new ImpleamentStudentData();
		stCourse.setStudent(sd.getStudentData(id));
		studentcourse.SavedStudentCourse(stCourse);
		
	}

}




