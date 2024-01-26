package servises;

import dataAccess.implement.ImplementeCollegeManegement;
import dataAccess.interfases.CollegeManegementInterface;
import entity.CollegeManegemant;

public class CollegeManegemantServices {
	
	public void SavedCollegeManegemant(CollegeManegemant collegeManegemant) {
		CollegeManegementInterface collegeManegements=new ImplementeCollegeManegement();
		if(collegeManegemant!=null) {
			collegeManegements.SavedCollegeManegementData(collegeManegemant);
			System.out.println("College Manegement is Saved");
		}else System.out.println("College Manegement is Not Saved");
	}
	
	public void getCollegeManegemant(int com) {
		CollegeManegementInterface collegeManegement=new ImplementeCollegeManegement();
		CollegeManegemant collegeManegemants=collegeManegement.getCollegeManegementData(com);
		if(collegeManegemants!=null) {
			System.out.println(collegeManegemants);
		}else System.out.println("College Manegemants Data Time in Not Found");
	}

}
