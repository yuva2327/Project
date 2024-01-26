/*
        ATM System Project  Base Project of "Bank Project"
------_____________________________________________________-------------

Creator:-yuvaraj.p
This is c++ Based => Bank System Project
versoin:-0.1.1
__________________________________________________________________________________________
ATM have 2 button :- (1),(0)
         1 => if you prass 1 mins (Yes)
         0 => if you prass 0 mins (No)
____________________________________________________________________________________________
Note :-
---------
@ This Project will be Dependent another program
@Anther Program is "ATM_System.cpp".
@This Program will be inter link each Other file
@if you want to open ATM again you will change lock time 3 to 0 in lock time
@If you also change password,balance and lock time in this Program
@it will be reflect in ATM
__________________________________________________________________________________________
ATM have 2 button :- (1),(0)
         1 => if you prass 1 mins (Yes)
         0 => if you prass 0 mins (No)
__________________________________________________________________________________________
This code will be work in :-
-------------------------
            1)DEV c++ (red)
            ---------------
			     link:  https://sourceforge.net/projects/embarcadero-devcpp/
		    2)Code Block
		    ---------------
		         link:  https://sourceforge.net/projects/codeblocks/
______________________________________________________________________________________
*/
#include <iostream>
#include <fstream>
using namespace std;
void br(){
	cout<<"\n\t\t\t\t\t\t\t\tKARNATAK BANK MANAGER\n";
	for(int a=0;a<=170;a++){
		cout<<"=";
	}
}
int main(){
	string name;
	int password,lock_l,amount;
	int password_c,lock_lc,amount_c;
	int p,l,b;
			br();
			fstream ATM_name_file;
			ATM_name_file.open("ATM_name_file.txt", ios::in);
			ATM_name_file>>name;
			cout<<"NAME :"<<name<<endl;
			ATM_name_file.close();
			
			/*if(){
			fstream ATM_name_file;
			ATM_name_file.open("ATM_name_file.txt", ios::in);
			ATM_name_file>>name;
			cout<<name;
			ATM_name_file.close();
			}
	        */
	        fstream ATM_pw_file;
			ATM_pw_file.open("ATM_pw_file.txt", ios::in);
			ATM_pw_file>>password;
			cout<<"PASSWORD :"<<password<<endl;
			ATM_pw_file.close();
			
			fstream ATM_lock_file;
			ATM_lock_file.open("ATM_lock_file.txt", ios::in);
			ATM_lock_file>>lock_l;
			cout<<"LOCK TIME :"<<lock_l<<endl;
			ATM_lock_file.close();
			
			fstream ATM_bl_file;
			ATM_bl_file.open("ATM_bl_file.txt", ios::in);
			ATM_bl_file >>amount;
			cout<<"BALANCE :"<<amount<<endl;
			ATM_bl_file.close();
			
			  fstream bank_ATM_dit_file;
			bank_ATM_dit_file.open("bank_ATM_dit_file.txt", ios::out);
			bank_ATM_dit_file<<"NAME :";
			bank_ATM_dit_file<<name;
			bank_ATM_dit_file<<"PASSWORD :";
			bank_ATM_dit_file<<password;
			bank_ATM_dit_file<<"LOCK TIMR :";
			bank_ATM_dit_file<<lock_l;
			bank_ATM_dit_file<<"AMOUNT :";
			bank_ATM_dit_file<<amount;
			
			bank_ATM_dit_file.close();
			
			cout<<"\n\nIF YOU WANT TO CHANGE THE VALUE PRASS 1/0\n";
			
			cout<<"\nCHANGE THE PASSWORD :";
			cin>>p;
			if(p==1){
			fstream ATM_pw_file;
			ATM_pw_file.open("ATM_pw_file.txt", ios::out);
			cin>>password_c;
			ATM_pw_file<<password_c;
			ATM_pw_file.close();
			}
			
			cout<<"CHANGE THE LOCK TIME :";
			cin>>l;
			if(l==1){
			fstream ATM_lock_file;
			ATM_lock_file.open("ATM_lock_file.txt", ios::out);
			cin>>lock_lc;
			ATM_lock_file<<lock_lc;
			ATM_lock_file.close();
			}
			
			cout<<"CHANGE THE BALANCE :";
			cin>>b;
			if(b==1){
			fstream ATM_bl_file;
			ATM_bl_file.open("ATM_bl_file.txt", ios::out);
			cin>>amount_c;
			ATM_bl_file <<amount_c;
			ATM_bl_file.close();
			}
	
     
			return 0;
	
}