/*
Game Name:- Shooting Game
Game Creator:- yuvaraj.p
Game version:- 0.1.1
____________________________________________________________________________________

This is c++ Based =>Shooting Game
_____________________________________________________________________________________
This game have Three Controller Button (s),(d),(f)
       s => button is use for left move 
       d => button is use for right move 
       f => button is use for shoot
 ____________________________________________________________________________________   
 How to play ? goal of game ?
 ------------------------ --  
         $ =>this is enemy 
		   * shoot it 
		   * help with f button
_____________________________________________________________________________________

This code will be work in :-
-------------------------
            1)DEV c++ (red)
            ---------------
			     link:  https://sourceforge.net/projects/embarcadero-devcpp/
		    2)Code Block
		    ---------------
		         link:  https://sourceforge.net/projects/codeblocks/
		             note : if you use in code block you comment Sleep(0.1) in line 98
______________________________________________________________________________________
*/

#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
    char input_letter,g;
    int enemy,start,score=0,target_miss=0;
    int start_point=13,move_point=8,f=12;
    i:
    	input_letter='a';
    	f=12;
    	start=0;
    srand(time(0));
    enemy= rand() %14 ;
    h:
    	cout<<endl<<endl<<"\tleft move: s\tRight move: d\tshoot: f"<<endl<<endl;
    	cout<<"\t\t\t\t\t\tscore :"<<score<<endl;
    	cout<<"\t\t\t\t\t\tmiss :"<<target_miss<<endl;
for(int height=0;height<=15;height++){
	
    for(int witdh=0;witdh<=15;witdh++){
    	
        if(witdh==0||witdh==15||height==0||height==15){
        	
            cout<<"# ";
            
        }else if (height==2&&witdh==enemy){
        	
           if(f!=2||move_point!=enemy){
            cout<<"$ ";
        }else{
        	cout<<"  ";
        	start=1;
        	score++;
		}
        }
        else if (height==f&&witdh==move_point){
        	
            cout<<"* ";
            
        }else if(height==start_point&&witdh==move_point){
        	
            cout<<"()";
            
		}else{
            cout<<"  ";
        }
    }
    cout <<endl;
    
}if(input_letter!='f'&&start!=1){
cout<<"move :";
cin>>input_letter;// this is get input
}

if(input_letter=='d'){
	
          if(move_point!=14){
		   move_point++; 
		   }
   
   }else if(input_letter=='s'){
    if(move_point!=1)
	 {
	 move_point--; 
	 }
   }else if(input_letter=='f')
   { 
   f--; 
   }
   sleep(0.1); //this is sleep or stop the system 100ms..
   system("cls");// this is Clear this system Screen
   if(start==1){
   	goto i;
   }
   if(f<=1){
   	
    	input_letter='a';
    	f=12;
    	start=0;
    	target_miss++;
   }
goto h;

    return 0;
}