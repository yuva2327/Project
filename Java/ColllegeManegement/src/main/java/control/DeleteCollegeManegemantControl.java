package control;

import servises.CollegeServise;
import servises.CourseServices;
import servises.StaffSevises;
import servises.StudentCourseServices;
import servises.StudentServices;
import servises.StudentTotalMarkServices;
import servises.TeacherServises;

public class DeleteCollegeManegemantControl {

	public static void main(String[] args) {
		//This will be Have still Updating stage it will 
			//Data base name "CollegeManegemant"
		
	}
	public static void deleteCollege(int no) {
		CollegeServise collegeServise=new CollegeServise();
		collegeServise.DeleteCollegeData(1);
	}
	
	public static void deleteCourse(int no) {
		CourseServices courseServices=new CourseServices();
		courseServices.DeleteCourseData(no);
	}
	
	public static void deleteStaff(int no) {
		StaffSevises sevises=new StaffSevises();
		sevises.DeleteStaffData(no);
	}
	
	public static void deleteTeacher(int no) {
		TeacherServises servises=new TeacherServises();
		servises.DeleteTeacherData(no);
	}
	
	public static void deleteStudent(int no) {
		StudentServices services=new StudentServices();
		services.DaleteStudentData(no);
	}
	
	public static void deleteMark() {
		StudentTotalMarkServices markServices=new StudentTotalMarkServices();
		markServices.DeleteStudentTotalMark(1);
	}
	
	public static void detelestudentSub() {
		StudentCourseServices courseServices=new StudentCourseServices();
		courseServices.DeleteStudentCourse(1);
	}

}
