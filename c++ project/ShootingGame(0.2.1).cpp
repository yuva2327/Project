/*
Game Name:- Shooting Game
Game Creator:- yuvaraj.p
Game version:- 0.1.2
____________________________________________________________________________________

This is c++ Based =>Shooting Game
_____________________________________________________________________________________
This game have Three Controller Button (,),(.),(l)
       , => button is use for left move
       . => button is use for right move
       l => button is use for shoot
_____________________________________________________________________________________
 How to play ? goal of game ?
 ---------------------------
         $ =>this is enemy
		   * shoot it
		   * help with l button
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
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <windows.h>
using namespace std;

int main(){

	//variables
	int enemy;//this is variable for the enemy
	int bl1_move=1,bl2_move=27,bl3_move=2,bl4_move=28,bl5_move=3,bl6_move=29;//this is variable for the blockpoint
	int move_point=15;//this is variable for ( get the input for from user)
	char direction;//this is variable to get the input in kbhit(value)
	int fire=25,fire_value=0;//this is variable for fire parpose
	int a,b;//this is local varibal
	int miss=0,score=0;//this is score variable

	str://enemy re-store value
    srand(time(0));
    enemy= rand() %28+1 ;//this is creating the enemy value
	s://fire re-store value
	 HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	    SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
			cout<<"."<<endl<<"."<<endl<<"."<<endl;
	     	SetConsoleTextAttribute(hStdOut, FOREGROUND_RED| BACKGROUND_RED |BACKGROUND_GREEN|BACKGROUND_BLUE);
		cout<<"\t\t\t\t\t\tscore="<<score<<"\t\t";
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
			cout<<"."<<endl;
				SetConsoleTextAttribute(hStdOut, FOREGROUND_RED| BACKGROUND_RED |BACKGROUND_GREEN|BACKGROUND_BLUE);
		cout<<"\t\t\t\t\t\tmiss="<<miss<<"\t\t";
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
			cout<<"."<<endl;

	for(int br_height=0;br_height<=30;br_height++){//this is out loop for the border this is (height)

		for(int br_width=0;br_width<=30;br_width++){//this is inerloop for the border this is (wight)

			if(br_height==0||br_height==30||br_width==0||br_width==30){
				SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY | FOREGROUND_RED| BACKGROUND_RED );
				cout<<"# ";

			}else if(br_height==3&&br_width==enemy){
				SetConsoleTextAttribute(hStdOut,FOREGROUND_BLUE| BACKGROUND_RED |BACKGROUND_GREEN|BACKGROUND_BLUE);
				cout<<"$ ";
			}else if(br_height==5&&br_width==bl1_move){
					SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN| BACKGROUND_GREEN );
				cout<<"##";

			}else if(br_height==6&&br_width==bl2_move){
					SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN| BACKGROUND_GREEN );
				cout<<"##";
			}else if(br_height==5&&br_width==bl3_move){
					SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN| BACKGROUND_GREEN );
				cout<<"##";

			}else if(br_height==6&&br_width==bl4_move){
					SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN| BACKGROUND_GREEN );
				cout<<"##";
			}else if(br_height==5&&br_width==bl5_move){
					SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN| BACKGROUND_GREEN );
				cout<<"##";

			}else if(br_height==6&&br_width==bl6_move){
					SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN| BACKGROUND_GREEN );
				cout<<"##";
			}else if(br_height==fire&&br_width==move_point){
				SetConsoleTextAttribute(hStdOut, FOREGROUND_RED|BACKGROUND_RED);
				cout<<"* ";
			}else if(br_height==26&&br_width==move_point){
				SetConsoleTextAttribute(hStdOut, 0);
				cout<<"()";
			}else {
			SetConsoleTextAttribute(hStdOut,FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE| BACKGROUND_RED |BACKGROUND_GREEN|BACKGROUND_BLUE);
			cout<<"..";

			}
		}
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
			cout<<"."<<endl;
	}
	for(int a=0;a<=5;a++){
	SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
			cout<<"."<<endl;
		}

	 if (_kbhit())//this is kbhit get the input (key type)
        {
            direction = _getch();

        switch(direction){//this is make the direction
		case ',' : move_point--;
		if(move_point<1){
			move_point=1;
		}
		break;
		case '.' :move_point++;
		if(move_point>29){
			move_point=29;
		}
		break;
		case 'l' : fire_value=1;
	}
        }
	if(bl1_move==26){//this is local variable choose the (bl1_move,bl2_move)
		a=1;
		b=1;
	}else if(bl1_move==1){
		a=0;
		b=0;
	}

	if(a==0){//this is move the frist block code
	bl1_move++;
	bl3_move++;
	bl5_move++;
    }else if(a==1){
	bl1_move--;
	bl3_move--;
	bl5_move--;
     }

	if(b==0){//this is move sceond block code
	bl2_move--;
	bl4_move--;
	bl6_move--;
}else if(b==1){
	bl2_move++;
	bl4_move++;
	bl6_move++;
}
if(fire_value==1){//this is creating the fire value
	fire--;
	if(fire<=1){
		fire=25;
		miss++;
		fire_value=0;
	}else if(fire==5&&bl1_move==move_point||fire==6&&bl2_move==move_point||//block and fire access
	          fire==5&&bl3_move==move_point||fire==6&&bl4_move==move_point||
	          fire==5&&bl5_move==move_point||fire==6&&bl6_move==move_point
			  ){
		miss++;
		fire=25;
		fire_value=0;

	}else if(fire==3&&move_point==enemy){//fire target the enemy
		fire=25;
		fire_value=0;
		score++;
		goto str;// use for new enemy
	}
}
	//sleep(0.6);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),{0,0});

	goto s;//use for new fire

	return 0;
}
