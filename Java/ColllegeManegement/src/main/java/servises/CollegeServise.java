package servises;

import dataAccess.implement.ImplementCollegeData;
import dataAccess.interfases.CollegeInterfaces;
import entity.College;

public class CollegeServise {
	public void SavedCollgeData(College college) {
		CollegeInterfaces col=new ImplementCollegeData();
		if(college!=null) {
			col.SaveCollege(college);
			System.out.println("College Data is Saved");
		}else System.out.println("College Data Not Saved");
	}
	
	public void UpdateCollegeData(int colId, College college) {
		CollegeInterfaces col=new ImplementCollegeData();
		col.UpdateCollege(colId, college);
		System.out.println("College Data is Update");
	}
	
	public void DeleteCollegeData(int colId) {
		CollegeInterfaces col=new ImplementCollegeData();
		if(col.DeleteCollege(colId)==true) {
		col.DeleteCollege(colId);
		System.out.println("College Data is Delete");
		}else System.out.println("College Data is Not Delete");
	}
	
	public void getCollegeData(int colId) {
		CollegeInterfaces col=new ImplementCollegeData();
		College college=col.getCollege(colId);
		if(college!=null) {
			System.out.println(college);
		}else System.out.println("College Data is Not Avaleble");
	}

}
