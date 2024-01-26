package dataAccess.interfases;

import entity.Teachers;

public interface TeacherInterfeses {
	void SaveTeacherData(Teachers teachers );
	void UpdateTeacherData(int teaId,Teachers teachers);
	boolean DeleteTeacherData(int teaId);
	Teachers getTeacherData(int teaId);

}
