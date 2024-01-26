package servises;

import dataAccess.implement.ImplementTeacherData;
import dataAccess.interfases.TeacherInterfeses;
import entity.Teachers;

public class TeacherServises {
	public void SavedTeacherData(Teachers teachers) {
		TeacherInterfeses tea=new ImplementTeacherData();
		if(teachers!=null) {
			tea.SaveTeacherData(teachers);
			System.out.println("Teacher Data is Saved");
		}
	}
	
	public void UpdatedTeacherData(int teaId, Teachers teachers) {
		TeacherInterfeses tea=new ImplementTeacherData();
		tea.UpdateTeacherData(teaId, teachers);
		System.out.println("Teacher Data is Update");
	}
	
	public void DeleteTeacherData(int teaId) {
		TeacherInterfeses tea=new ImplementTeacherData();
		if(tea.DeleteTeacherData(teaId)==true) {
			tea.DeleteTeacherData(teaId);
			System.out.println("Teacher Data is Delete");
		}else System.out.println("Teacher Data is Not Delete");
	}
	
	public void getTeacherData(int teaId) {
		TeacherInterfeses tea=new ImplementTeacherData();
		Teachers teachers=tea.getTeacherData(teaId);
		if(teachers!=null) {
			System.out.println(teachers);
		}else System.out.println("Teacher Data is Not Avelebal");
	}

}
