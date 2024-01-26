package dataAccess.interfases;

import entity.College_Staff;

public interface StaffInterface {
	void SaveStaffData(College_Staff collegeStaff );
	void UpdateStaffData(int stfId,College_Staff collegeStaff );
	boolean DeleteStaffData(int stfId);
	College_Staff getStaffData(int stfId);
}
