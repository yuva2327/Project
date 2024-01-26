package dataAccess.interfases;

import entity.CollegeManegemant;

public interface CollegeManegementInterface {
	void SavedCollegeManegementData(CollegeManegemant collegeManegemant);
	CollegeManegemant getCollegeManegementData(int com);
}
