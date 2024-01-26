/*
        ATM System Project
-------______________________-------------

Creator:-yuvaraj.p
This is c++ Based => ATM System Project
versoin:-0.1.1
__________________________________________________________________________________________
__________________________________________________________________________________________

ATM password:- 2327
if you want to select "Foget password" prass a
ATM user Phone Number is :- 7348997592  (note:-You not change phone number in BankSystem.cpp)
ATM default Balance:- 
ATM is lock see 23 line in this program...
____________________________________________________________________________________________
Note :- 
---------
@ This Project will be Dependent another program
@Anther Program is "BankSystem.cpp".
@This Program will be inter link each Other file
@If you enter wrong Password in 3 time ATM will be locked (if you want to open ATM again you will change lock time 3 to 0 in BankSystem.cpp)
@If you also change password(password will most in integer data type),balance and lock time in BankSystem Program
_______________________________________________________________________________________________
ATM have 3 button :- (a),(s),(w)
         a => a is select the option 
         s => s is down arrow type work
         w => d is up arrow type work
__________________________________________________________________________________________
This code will be work in :-
-------------------------
            1)DEV c++ (red)
            ---------------
			     link:  https://sourceforge.net/projects/embarcadero-devcpp/
		    2)Code Block
		    ---------------
		         link:  https://sourceforge.net/projects/codeblocks/
		           note :-60 line have sleep function it will not work in code Black but not big issue 
______________________________________________________________________________________
*/

#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <time.h>
#include <fstream>
using namespace std;   

brr(){
		cout<<"\n\n\t\t\t\t\t\t\t\tWELCOME TO THE KARNATAK BANK\n";
		for(int a=0;a<=170;a++){
		cout<<"=";
  	}
	return 0;
}
loding(){
	for(int l=0;l<=3;l++){
		system("cls");
		brr();
	cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\tLoding.";
	sleep(1);
	system("cls");
		brr();
	cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\tLoding..";
		sleep(1);
	system("cls");
		brr();
	cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\tLoding...";
		sleep(1);
}
	return 0;
}
	br(){
	   for(int a=0;a<=170;a++){
		cout<<"=";
  	}
	return 0;
}
class parsonal {
	public:
	
	  double phone;
	string name,atm_ch;
	char option,forget;
	int amount;
	int deposit,cash,money,rupis,lock=0,OTP1,otp,a=1,bank_sta=0,pass_mach=0;
	int password,choose=1,withdra_amount,atm_charge=0,option_ok=0,new_password,comfrom_password,next_prosses,atm_limit=10000;
	int withdra_v=0,deposit_v=0;
	int withdra_or_deposit=0;
int data_pass,bl;
	private :
	int	pass_word;
	public:
		void data_base(int data_pa){
			pass_word=data_pa;
		}
		void blance_data(int bal_data){
				amount=bal_data;
		}
		void ask(){
			do{  if(lock>0){
	             brr();
				cout<<"\n\n\t\t\t\t\t\t\t\tYOUR PIN NUMBER IS WORNG";
				if(lock==2){
					cout<<"\n\t\t\t\t\t\t\t\tFORGET PASSWORD:";
					cin>>forget;
					if(forget=='a'){
						cout<<"\n\t\t\t\t\t\t\t\tENTER YOUR PHONE NUMBER :";
						cin>>phone;
						if(phone==7348997592){
							otpp:
							srand(time(0));
                            OTP1 = rand() % 5000+1000;
                            cout<<"\n\t\t\t\t\t\t\t\tOTP NUMBER :"<<OTP1<<endl;
						cout<<"\n\t\t\t\t\t\t\t\tENTER THE OTP :";
						cin>>otp;
						if(otp==OTP1){
						pass:
							 system("cls");
	                         brr();
	                         if(pass_mach==1){cout<<"\n\t\t\t\t\t\t\t\tPASSWORD DO NOT MATCH\n";}
						cout<<"\n\t\t\t\t\t\t\t\tENTER THE NEW PASSWORD :";
						cin>>new_password;
						cout<<"\n\t\t\t\t\t\t\t\tCOMFROM PASSWORD :";
						cin>>comfrom_password;
						if(new_password==comfrom_password){
							system("cls");
							loding();
							system("cls");
							brr();
							cout<<"\n\n\t\t\t\t\t\t\t\tNEW PASSWORD IS GENERATE SUCCESSFULLY\n";
							
							fstream ATM_pw_file;
                    		ATM_pw_file.open("ATM_pw_file.txt", ios::out);
							if (!ATM_pw_file) {
							cout << "\n\n\t\t\t\t\t\t\t\tYOUR PASSWORD NOT SAVE IN DATA BASE\n";
							}
							else {
							cout << "\n\n\t\t\t\t\t\t\t\tYOUR PASSWORD SAVED IN DATA BASE\n";
							ATM_pw_file <<comfrom_password;
							ATM_pw_file.close();
								}
								pass_word=comfrom_password;
						}else{
							system("cls");
						pass_mach=1;
							goto pass;
						}
					}else{
						 system("cls");
						 cout<<"\n\t\t\t\t\t\t\t\tOTP is WRONG RE ENTER \"OTP\"";
						goto otpp;
					}
				}else{  cout<<"\n\t\t\t\t\t\t\t\tYOUR PHONE NUMBER IS WRONG ";
						cout<<"\n\t\t\t\t\t\t\t\tYOUR ACCOUNT WILL BY BLOCK GO TO THE BANK";
						next_prosses=5;
		    	        break;
				}
			}
				}
				if(lock==3){
					fstream ATM_lock_file;
                    		ATM_lock_file.open("ATM_lock_file.txt", ios::out);
							ATM_lock_file <<3;
							ATM_lock_file.close();
								
		    	cout<<"\n\t\t\t\t\t\t\t\tYOUR ACCOUNT WILL BY BLOCK GO TO THE BANK";
		    		next_prosses=5;
		    	break;
			}
		}
			 fstream ATM_pw_file;
			 ATM_pw_file.open("ATM_pw_file.txt", ios::in);
			if (!ATM_pw_file) {
			cout << "No such file";
			}
			else {
			ATM_pw_file>> data_pass;
			if (ATM_pw_file.eof());
			pass_word=data_pass;
		}
	
	
	ATM_pw_file.close();
			cout<<"\n\n\t\t\t\t\t\t\t\tENTER THE NAME :";
			cin>>name;
			cout<<"\t\t\t\t\t\t\t\tENTER THE PASSWORD :";
		    cin>>password;
		                   fstream ATM_name_file;
                    		ATM_name_file.open("ATM_name_file.txt", ios::out);
							ATM_name_file <<name;
							ATM_name_file.close();
		   
		   lock++;
		    system("cls");
		}while(password!=pass_word);
		}
		void br_name(){
	cout<<"\n\t\t\t\t\t\t\tHI... "<<name <<" WELCOME TO THE KARNATAKA BANK\n";
		            br();
}
             
		    void log(void){
		         	if(password==pass_word){
		         		system("cls");
		         		do{
						
		            cout<<"\n\t\t\t\t\t\t\tHI... "<<name <<" WELCOME TO THE KARNATAKA BANK\n";
		            br();
		            cout<<"\n\t\t\t\t\t\t\tCHOOSE THE OPTION :USE (s or w)\n";
		            
		            switch(choose){
					case 1 :
		            	cout<<"\n\t\t\t\t\t\t\t=>1.BALANCE CHEACK";
		            	cout<<"\n\t\t\t\t\t\t\t  2.withdra";
		            	cout<<"\n\t\t\t\t\t\t\t  3.deposit";
		            	cout<<"\n\t\t\t\t\t\t\t  4.bank statemant";
		                cout<<"\n\t\t\t\t\t\t\t  5.exit\n";
		            	option_ok=1;
		            	break;
		            	
		            case 2:
		            	cout<<"\n\t\t\t\t\t\t\t  1.balance cheak";
		            	cout<<"\n\t\t\t\t\t\t\t=>2.WITHDRA";
		            	cout<<"\n\t\t\t\t\t\t\t  3.deposit";
		            	cout<<"\n\t\t\t\t\t\t\t  4.bank statemant";
		                cout<<"\n\t\t\t\t\t\t\t  5.exit\n";
		            	option_ok=2;
		            	break;
		            	
		            case 3:
		            	cout<<"\n\t\t\t\t\t\t\t  1.balance cheak";
		            	cout<<"\n\t\t\t\t\t\t\t  2.withdra";
		            	cout<<"\n\t\t\t\t\t\t\t=>3.DEPOSIT";
		            	cout<<"\n\t\t\t\t\t\t\t  4.bank statemant";
		                cout<<"\n\t\t\t\t\t\t\t  5.exit\n";
		            	option_ok=3;
		            	break;
		            
					case 4:
		            	cout<<"\n\t\t\t\t\t\t\t  1.balance cheak";
		            	cout<<"\n\t\t\t\t\t\t\t  2.withdra";
		            	cout<<"\n\t\t\t\t\t\t\t  3.deposit";
		            	cout<<"\n\t\t\t\t\t\t\t=>4.BANK STATEMANT";
		                cout<<"\n\t\t\t\t\t\t\t  5.exit\n";
		            	option_ok=4;
		            	break;
		            case 5:
					    cout<<"\n\t\t\t\t\t\t\t  1.balance cheak";
		            	cout<<"\n\t\t\t\t\t\t\t  2.withdra";
		            	cout<<"\n\t\t\t\t\t\t\t  3.deposit";
		            	cout<<"\n\t\t\t\t\t\t\t  4.bank statemant";
		                cout<<"\n\t\t\t\t\t\t\t=>5.EXIT\n";
						option_ok=5;
					}
				cout<<"\t\t\t\t\t\t\t";
					cin>>option;
		            if(option=='s'){
		            	choose++;
					}
					if(option=='w'){
						choose--;
					}
					if(option=='a'){
						system("cls");
						break;
					}else{
						cout<<"PRESS S OR W";
					}
					if(choose>5){
						choose=choose-5;
					}
					if(choose<1){
						choose=choose+5;
					}
		
		            system("cls");
					}while(option!='s'||'w');
				
		            
	}
			}
	
		
};

class bank: public parsonal{
	public:
		
};
class banck_detail:public bank {
	public:
	
void option_detail(void){

	switch(option_ok){
		case 1 :  br_name();
		withdra_or_deposit=1;
		cout<<"\n\n\t\t\t\t\t\t\tYOUR BANK BALANCE IS:"<<amount;
		break;
		case 2: br_name();
		
	           	cout<<"\n\n\t\t\t\t\t\t\t ENTER YOUR WITHDRA AMOUNT:";
		         cin>>withdra_amount;
		        if(withdra_amount>10000){
		         	
		     	cout<<"\n\n\t\t\t\t\t\t\t YOUR ATM LIMIT IS=10000 /-rs only ";
			      }else if(withdra_amount>amount){
		         	cout<<"\n\t\t\t\t\t\t\t\tIN OFFICIAL BALANCE...";
		         		cout<<"\n\t\t\t\t\t\t\t\tYOUR BALANCE IS :"<<amount<<endl;
		         	
				 } 
				   else if(atm_limit<=0) {
			      	for(int time=40;time>=0;time--){
			      		system("cls");
			      	cout<<"\n\t\t\t\t\t\t\tHI... "<<name <<" WELCOME TO THE KARNATAKA BANK\n";
		            br();
		            int d;
			      		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\ttime=00:";
			      		if(time<10){
		            	d=0;
						cout<<d;
					}
						cout<<time;
			      	cout<<"\n\n\t\t\t\t\t\t\t YOUR DAYLY LIMIT IS OVER PLASE WAIT...";
			      		cout<<"\n\n\t\t\t\t\t\t\t\tWAIT FEW SECOND";
			      	sleep(1);
			      }
			      atm_limit=10000;
				  }
		     
				  else if(withdra_amount %100 !=0){
				  cout<<"\n\n\t\t\t\t\t\t\tPLASE ENTER THE MULIPLE OF 100 RS ";
				  }else{
				 a++;
		         if(a>=4){ atm_charge=25; atm_ch="ATM CHARGE IS : 25RS";}
		         amount=amount-withdra_amount-atm_charge;
		         withdra_v=1;
		         atm_limit=atm_limit-withdra_amount;
		         cout<<"\n\t\t\t\t\t\t\t COLLECT YOUR AMOUNT:"<<withdra_amount<<endl<<"\n\t\t\t\t\t\t\t "<<atm_ch<<endl;
		         cout<<"\n\t\t\t\t\t\t\t YOUR BALANCE IS :"<<amount<<endl;
		         fstream ATM_bl_file;
			ATM_bl_file.open("ATM_bl_file.txt", ios::out);
			ATM_bl_file <<amount;
			ATM_bl_file.close();
		         
		     } 
		    
	break;
	case 3:
		br_name();
		printf("\n\t\t\t\t\t\t\tENTER YOUR DEPOSIT AMOUNT: ");
                cin>>deposit;
                if(deposit % 100 !=0)
                {
                    cout<<"\n\t\t\t\t\t\t\tYOU DEPOSIT ONLY MULTIPLES OF AMOUNT: 100 \n";
                     break;
                }
                else if(deposit>20000)
                {
                 cout<<"\n\t\t\t\t\t\t\tYOUR DEPOSIT LIMIT ONLY \"20000\"\n"; 
                  break;
                }
                else
                {
                cash=deposit /500;
                money=deposit % 500;
                rupis=money/100;
                deposit_v=1;
              
                amount=amount+deposit;
                cout<<"\n\t\t\t\t\t\t\tYOU ARE DEPOSIT AMOUNT :500 * "<<cash<<endl;
                cout<<"\n\t\t\t\t\t\t\tYOU ARE DEPOSIT AMOUNT:100 * "<<rupis<<endl;
                cout<<"\n\t\t\t\t\t\t\tYOUR CORREANT BALANCE IS:"<<amount<<endl;
            fstream ATM_bl_file;
			ATM_bl_file.open("ATM_bl_file.txt", ios::out);
			ATM_bl_file <<amount;
			ATM_bl_file.close();
                }
                break;
                case 4:
                		withdra_or_deposit=1;
                	cout<<"\n\t\t\t\t\t\t\tBANK STATEMANT:\n";
                	br();
                	bank_sta=1;
                break;
                case 5 : 
                cout<<"\n\n\t\t\t\t\t\t\t\tWELCOME TO THE KARNATAK BANK\n";
	             br();
				cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR THE VISIT KARNATAKA BANK";
                break;
	}
}
};
int main(void){
	int deposit_sta[100];
	int creadit_sta[100];
	banck_detail bn;
	int x=0,y=0,n=1,data_pass,bl,bl_op=1,lock_l;
	 fstream ATM_pw_file;
			 ATM_pw_file.open("ATM_pw_file.txt", ios::in);
			if (!ATM_pw_file) {
			cout << "No such file";
			}
			else {
			ATM_pw_file>>data_pass;
			if (ATM_pw_file.eof());
			bn.data_base(data_pass);
		}
	ATM_pw_file.close();
	

          fstream ATM_bl_file;
			 ATM_bl_file.open("ATM_bl_file.txt", ios::in);
			if (!ATM_bl_file) {
			cout << "No such file";
			}
			else {
			ATM_bl_file>>bl;
			if (ATM_bl_file.eof());
			bn.blance_data(bl);
			bl_op++;
			
		}
	ATM_bl_file.close();
	brr();
	
	fstream ATM_lock_file;
			ATM_lock_file.open("ATM_lock_file.txt", ios::in);
			ATM_lock_file>>lock_l;
			ATM_lock_file.close();
	
	if(lock_l==3){cout<<"\n\t\t\t\t\t\t\t\tYOUR ACCOUNT WILL BY BLOCK GO TO THE BANK"; 
	bn.lock=3;
	}else{
	bn.ask();
	start:
	bn.log();
	bn.option_detail();
	
if(bn.withdra_or_deposit==0){
	if(bn.withdra_v==1){
		deposit_sta[x]=bn.withdra_amount;
	}else{
		deposit_sta[x]=0;
	}
	if(bn.deposit_v==1){
			creadit_sta[y]=bn.deposit;
	}else{
			creadit_sta[y]=0;
	}
	y++;
	x++;
}

	if(	bn.bank_sta==1){
		cout<<"\n\t\t\t\t\t\t\tHI... "<<bn.name <<" WELCOME TO THE KARNATAKA BANK\n";
		            br();
		cout<<"\n\n\t\t\t\t\t\t\t\tNUM\t\tWITHDRA\t\tCREADIT";
		for(int z=0;z<=x-1;z++){
		cout<<"\n\n\t\t\t\t\t\t\t\t"<<z+1<<")\t\t"<<deposit_sta[z]<<"\t\t"<<creadit_sta[z]<<endl;
	}
	br();
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\tbalance"<<bn.amount;
	}
	
	
	bn.bank_sta=0;
	bn.withdra_v=0;
	bn.deposit_v=0;
	bn.withdra_or_deposit=0;

	
	cout<<"\n\t\t\t\t\t\t\t";
	if(bn.next_prosses!=5){
	if(bn.option_ok!=5){
	system("pause");
	goto start;
}
}
}
	return 0;
}