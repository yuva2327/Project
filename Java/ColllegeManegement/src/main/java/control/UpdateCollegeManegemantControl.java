package control;

import java.awt.Button;
import java.awt.Choice;
import java.awt.Color;
import java.awt.Frame;
import java.awt.Label;
import java.awt.TextField;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import dataAccess.implement.ImplementCollegeData;
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
import jakarta.persistence.Persistence;
import servises.CollegeManegemantServices;
import servises.CollegeServise;
import servises.CourseServices;
import servises.StaffSevises;
import servises.StudentCourseServices;
import servises.StudentServices;
import servises.StudentTotalMarkServices;
import servises.TeacherServises;

public class UpdateCollegeManegemantControl  {

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
				
				int selectedIndex = Collegechoice.getSelectedIndex();
				selectedIndex+=1;
				
				
				
				if(selectedIndex!=0) {
					
					College college=new College();
					college=entityManager.find(College.class,selectedIndex);
					
					CollegeInput.setText(""+college.getCollege_Name());
					
					CollegePrisipal.setText(""+college.getPrincipal_Name());
					 NewCollegePrisipal.setBounds(245,200,150,25);
					 CollegePrisipal.setBounds(245,220,150,25);
					 frame.add(NewCollegePrisipal);
					 frame.add(CollegePrisipal);
					 
					 NewCollegewebInput.setText(""+college.getCollege_website());
					 NewCollegeWeb.setBounds(245,245,150,25);
					 NewCollegewebInput.setBounds(245,265,150,25);
					 frame.add(NewCollegeWeb);
					 frame.add(NewCollegewebInput);
					 
					 NewCollegePhoneInput.setText(""+college.getCollege_PhoneNumber());
					 NewCollegePhone.setBounds(245,290,160,25);
					 NewCollegePhoneInput.setBounds(245,310,150,25);
					 frame.add(NewCollegePhone);
					 frame.add(NewCollegePhoneInput);
					 
					 NewCollegeADDInput.setText(""+college.getCollege_Address());
					 NewCollegeADD.setBounds(245,335,160,25);
					 NewCollegeADDInput.setBounds(245,355,150,25);
					 frame.add(NewCollegeADD);
					 frame.add(NewCollegeADDInput);
				}
				
				
				
				if(StudentIdInput.getText().length()!=0) {
					Student student=new Student();
					int no=(int) Long.parseLong( StudentIdInput.getText());
					student=entityManager.find(Student.class,no);
					
					College college=new College();
					college=entityManager.find(College.class,student.getCollege().getCollege_Id());
					
					CollegeInput.setText(college.getCollege_Name());
					
					 StudentInput.setText(student.getStudent_Name());
					 StudentName.setBounds(740,160,150,30);
					 StudentInput.setBounds(715,190,150,25);
					 frame.add(StudentName);
					 frame.add(StudentInput);
					 
					 long phone=student.getStudent_PhoneNumber();
					 StudentPhoneInput.setText(""+phone);
					 StudentPhone.setBounds(740,220,150,30);
					 StudentPhoneInput.setBounds(715,250,150,25);
					 frame.add(StudentPhone);
					 frame.add(StudentPhoneInput);
					 
					 StudentADDInput.setText(student.getStudent_Address());
					 StudentADD.setBounds(740,278,150,30);
					 StudentADDInput.setBounds(715,310,150,25);
					 frame.add(StudentADD);
					 frame.add(StudentADDInput);	
					 
					 StudentCourse course=new StudentCourse();
					
					 course=entityManager.find(StudentCourse.class,student.getCourse().getStudentCourse());
					
					StudentsubInput.setText(""+course.getStudentCourse_Name());//.getCourse().getStudentCourse_Name());
					 StudentSub.setBounds(740, 340, 150, 30);
					 StudentsubInput.setBounds(715, 370, 150, 25);
					 frame.add(StudentSub);
					 frame.add(StudentsubInput);
					 
					 Student_Total_mark marks=Student_Total_mark();
			 marks=entityManager.find(Student_Total_mark.class,student.getStudent_Total_mark().getMark_Id());
			 StudentmarkInput.setText(""+marks.getStudent_TotalMark());
					 Studentmark.setBounds(740, 400, 150, 30);
					 StudentmarkInput.setBounds(715, 435, 150, 25);					 
					 frame.add(Studentmark);
					 frame.add(StudentmarkInput);
				}
				
				
				if(TeacherIdInput.getText().length()!=0) {
					 
					Teachers teachers=new Teachers();
					int num=(int) Long.parseLong(TeacherIdInput.getText());
					teachers=entityManager.find(Teachers.class,num);
					
					College college=new College();
					college=entityManager.find(College.class,teachers.getCollege().getCollege_Id());
					
					CollegeInput.setText(college.getCollege_Name());
					
					
					NewTeacherInput.setText(teachers.getTeacher_Name());
					 NewTeacherName.setBounds(560,160,150,30);
					 NewTeacherInput.setBounds(557,190,150,25);
					 frame.add(NewTeacherName);
					 frame.add(NewTeacherInput);
					 
					 NewTeacherSubInput.setText(teachers.getSubject());
					 NewTeacherSub.setBounds(560,220,150,30);
					 NewTeacherSubInput.setBounds(557,250,150,25);
					 frame.add(NewTeacherSub);
					 frame.add(NewTeacherSubInput);
					 
					 NewTeacherPhoneInput.setText(""+teachers.getTeacher_Phone_number());
					 NewTeacherPhone.setBounds(555,278,150,30);
					 NewTeacherPhoneInput.setBounds(557,310,150,25);
					 frame.add(NewTeacherPhone);
					 frame.add(NewTeacherPhoneInput);
				}
				
				if(StaffIdInput.getText().length()!=0) {
					
					
					College_Staff staff=new College_Staff();
					int num=(int) Long.parseLong(StaffIdInput.getText());
					staff=entityManager.find(College_Staff.class,num);
					
					College college=new College();
					college=entityManager.find(College.class,staff.getCollege().getCollege_Id());
					
					CollegeInput.setText(college.getCollege_Name());
					
					
					StaffInput.setText(staff.getStaff_Name());
					 StaffName.setBounds(900,160,150,30);
					 StaffInput.setBounds(873,190,150,25);
					 frame.add(StaffName);
					 frame.add(StaffInput);
					 
					 StaffworkInput.setText(staff.getStaff_Work());
					 StaffWork.setBounds(900,220,150,30);
					 StaffworkInput.setBounds(873,250,150,25);
					 frame.add(StaffWork);
					 frame.add(StaffworkInput);
			
				}
				
			}

			
	 };

	 btn1.addActionListener(cheak);
	 
	 final Button btn=new Button("Update");
	 btn.setBounds(553,450,150,25);

ActionListener submit=new ActionListener() {
	
	 
	@Override
	public void actionPerformed(ActionEvent e) {
		btn.setBackground(Color.yellow);
		int selectedIndex = Collegechoice.getSelectedIndex();
		selectedIndex+=1;
		
		 if(StudentIdInput.getText().length()!=0) {
			 
			 Student student=new Student();
			int no=(int) Long.parseLong( StudentIdInput.getText());
			student=entityManager.find(Student.class,no);
			 
			 int id=(int)Long.parseLong(StudentIdInput.getText());
			 String name=StudentInput.getText();
			 long phone=Long.parseLong(StudentPhoneInput.getText());
			 String add=StudentADDInput.getText();
			 String sub=StudentsubInput.getText();
			 int mark=(int)Long.parseLong(StudentmarkInput.getText());
			 
		     Student_Total_mark marks=entityManager.find(Student_Total_mark.class,student.getStudent_Total_mark().getMark_Id());

		    StudentCourse course=new StudentCourse();
		     course=entityManager.find(StudentCourse.class,student.getCourse().getStudentCourse());
			 
			 StudentInsertData(id,name,phone,add);
			 SubInsertData(course.getStudentCourse(),sub);
			 MarkInsertData(marks.getMark_Id(),mark);
		 }
		 btn.setBackground(Color.green);
	}
	
};

btn.addActionListener(submit);
btn.setBackground(Color.green);
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


	
	protected static Student_Total_mark Student_Total_mark() {
		// TODO Auto-generated method stub
		return null;
	}



	public static void CollegeInsertData(String name,String web,long phone,String add) {
		College college=new College();
		CollegeServise collegeServise=new CollegeServise();
		college.setCollege_Name(name);
		college.setCollege_website(web);
		college.setCollege_PhoneNumber(phone);
		college.setCollege_Address(add);
		collegeServise.UpdateCollegeData(1, college);
	}
	
	public static void StaffInsertData(String name,String work) {
		College_Staff Staff=new College_Staff();
		StaffSevises sevises=new StaffSevises();
		Staff.setStaff_Name(name);
		Staff.setStaff_Work(work);
		sevises.UpdateStaffData(1, Staff);
	}
	
	public static void CourseInsertData(String sub) {
		Courses courses=new Courses();
		CourseServices courseServices=new CourseServices();
		courses.setCourse_Name(sub);
		courseServices.UpdateCourseData(1, courses);
	}
	
	public static void TeacherInsertData(String name,String sub,long phone) {
		Teachers teachers=new Teachers();
		TeacherServises servises=new TeacherServises();
		teachers.setTeacher_Name(name);
		teachers.setSubject(sub);
		teachers.setTeacher_Phone_number(phone);
		servises.UpdatedTeacherData(1, teachers);
	}
	
	public static void StudentInsertData(int id,String name,long phone,String add) {
		Student student=new Student();
		StudentServices services=new StudentServices();
		System.out.println(name);
		student.setStudent_Name(name);
		student.setStudent_PhoneNumber(phone);
		student.setStudent_Address(add);
		services.UpdateStudentData(id,student);
		
	}
	
	public static void MarkInsertData(int id,int marks) {
		Student_Total_mark mark=new Student_Total_mark();
		StudentTotalMarkServices markServices=new StudentTotalMarkServices();
		mark.setStudent_TotalMark(marks);
		markServices.UpdateStudentTotalMark(1, mark);
	}
	
	public static void SubInsertData(int id,String sub) {
		StudentCourse course=new StudentCourse();
		StudentCourseServices courseServices2=new StudentCourseServices();
		course.setStudentCourse_Name(sub);
		courseServices2.UpdateStudentCourse(1, course);
		
		
	}

}


