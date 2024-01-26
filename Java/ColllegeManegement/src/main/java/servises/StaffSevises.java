package servises;

import dataAccess.implement.ImplementStaffData;
import dataAccess.interfases.StaffInterface;
import entity.College_Staff;

public class StaffSevises {
	public void SaveStaffData(College_Staff collegeStaff) {
		StaffInterface stf=new ImplementStaffData();
		if(collegeStaff!=null) {
			stf.SaveStaffData(collegeStaff);
			System.out.println("Staff Data is Saved");
		}else System.out.println("Staff Data is not Saved");
	}
	
	public void UpdateStaffData(int stfId, College_Staff collegeStaff) {
		StaffInterface stf=new ImplementStaffData();
		stf.UpdateStaffData(stfId, collegeStaff);
		System.out.println("Staff Data is Update");
	}
	
	public void DeleteStaffData(int stfId) {
		StaffInterface stf=new ImplementStaffData();
		if(stf.DeleteStaffData(stfId)==true){
			stf.DeleteStaffData(stfId);
			System.out.println("Staff Data is Delete");
		}else System.out.println("Staff Data is not Delete");
	}
	
	public void getStaffData(int stfId) {
		StaffInterface stf=new ImplementStaffData();
		College_Staff cof=stf.getStaffData(stfId);
		if(cof!=null) {
			System.out.println(cof);
		}else System.out.println("Staff Data is Not found");
	}

}
