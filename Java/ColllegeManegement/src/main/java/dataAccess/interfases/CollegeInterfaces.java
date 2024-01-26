package dataAccess.interfases;

import entity.College;

public interface CollegeInterfaces {
   void SaveCollege(College college );
   void UpdateCollege(int colId,College college);
   boolean DeleteCollege(int colId);
   College getCollege(int colId);
College getCollege(String college);
}
