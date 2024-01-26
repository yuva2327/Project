/*
Game Name:- Flying Bird Game
Game Creator:- yuvaraj.p
Game version:- 0.1.1
____________________________________________________________________________________

This is c++ Based =>Flying Bird Game
_____________________________________________________________________________________
This game have Two Controller Button (A),(Z)
       A => button is use for Upper Flying 
       Z => button is use for Down Flying 
_____________________________________________________________________________________   
 How to play ? goal of game ?
 --------------------------  
		   * dont teach the poll and border 
		   * increase your highest score 
_____________________________________________________________________________________

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
     

#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <windows.h>
using namespace std;

int main(){
	
	//variable
	int move1=58,move2=68,move3=78,move4=88,move5=98,move6=108,move7=118,move8=128,move9=138,move10=148,move11=158,move12=168,move13=178;
	int val1_height,bird=15;
	char direction;
	int game_over=0,GameOver=1;
	int score=0;
	
	srand(time(0));
    val1_height= rand()%5+5 ;
	start:
		 HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
		cout<<"score="<<score<<endl;
		
	for(int height=0;height<=30;height++){
		for(int width=0;width<=60;width++){
		
			if(width==0||width==60||height==0|height==30){
					SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN| BACKGROUND_GREEN );
				cout<<"##";
			}else if(width==move1&&height!=13&&height!=14&&height!=15&&height!=16&&height!=17&&height!=18&&height!=19){
				SetConsoleTextAttribute(hStdOut,FOREGROUND_INTENSITY| BACKGROUND_INTENSITY );
				 cout<<"##";
			}else if(width==move2&&height!=16&&height!=17&&height!=18&&height!=19&&height!=20&&height!=21&&height!=22){
				SetConsoleTextAttribute(hStdOut,FOREGROUND_INTENSITY| BACKGROUND_INTENSITY );
				 cout<<"##";
			}else if(width==move3&&height!=11&&height!=12&&height!=13&&height!=14&&height!=15&&height!=16&&height!=17){
				SetConsoleTextAttribute(hStdOut,FOREGROUND_INTENSITY| BACKGROUND_INTENSITY );
				 cout<<"##";
			}else if(width==move4&&height!=7&&height!=8&&height!=9&&height!=10&&height!=11&&height!=12&&height!=13){
				SetConsoleTextAttribute(hStdOut,FOREGROUND_INTENSITY| BACKGROUND_INTENSITY );
				 cout<<"##";
			}else if(width==move5&&height!=16&&height!=17&&height!=18&&height!=19&&height!=20&&height!=21&&height!=22){
				SetConsoleTextAttribute(hStdOut,FOREGROUND_INTENSITY| BACKGROUND_INTENSITY );
				 cout<<"##";
			}else if(width==move6&&height!=13&&height!=14&&height!=15&&height!=16&&height!=17&&height!=18&&height!=19){
				SetConsoleTextAttribute(hStdOut,FOREGROUND_INTENSITY| BACKGROUND_INTENSITY );
				 cout<<"##";
			}else if(width==move7&&height!=5&&height!=6&&height!=7&&height!=8&&height!=9&&height!=10&&height!=11){
				SetConsoleTextAttribute(hStdOut,FOREGROUND_INTENSITY| BACKGROUND_INTENSITY );
				 cout<<"##";
			}else if(width==move8&&height!=11&&height!=12&&height!=13&&height!=14&&height!=15&&height!=16&&height!=17){
				SetConsoleTextAttribute(hStdOut,FOREGROUND_INTENSITY| BACKGROUND_INTENSITY );
				 cout<<"##";
			}else if(width==move9&&height!=13&&height!=14&&height!=15&&height!=16&&height!=17&&height!=18&&height!=19){
				SetConsoleTextAttribute(hStdOut,FOREGROUND_INTENSITY| BACKGROUND_INTENSITY );
				 cout<<"##";
			}else if(width==move10&&height!=20&&height!=21&&height!=22&&height!=23&&height!=24&&height!=25&&height!=26){
				SetConsoleTextAttribute(hStdOut,FOREGROUND_INTENSITY| BACKGROUND_INTENSITY );
				 cout<<"##";
			}else if(width==move11&&height!=18&&height!=19&&height!=20&&height!=21&&height!=22&&height!=23&&height!=24){
				SetConsoleTextAttribute(hStdOut,FOREGROUND_INTENSITY| BACKGROUND_INTENSITY );
				 cout<<"##";
			}else if(width==move12&&height!=13&&height!=14&&height!=15&&height!=16&&height!=17&&height!=18&&height!=19){
				SetConsoleTextAttribute(hStdOut,FOREGROUND_INTENSITY| BACKGROUND_INTENSITY );
				 cout<<"##";
			}else if(width==move13&&height!=11&&height!=12&&height!=13&&height!=14&&height!=15&&height!=16&&height!=17){
				SetConsoleTextAttribute(hStdOut,FOREGROUND_INTENSITY| BACKGROUND_INTENSITY );
				 cout<<"##";
			}else if(bird==height&&width==5){
			SetConsoleTextAttribute(hStdOut,FOREGROUND_RED | FOREGROUND_GREEN |BACKGROUND_RED );
				cout<<"~$";
			}else if(bird<=0&&height==15&&width==30||bird>=30&&height==15&&width==30||
			move1==5&&bird!=13&&bird!=14&&bird!=15&&bird!=16&&bird!=17&&bird!=18&&bird!=19||
			move2==5&&bird!=16&&bird!=17&&bird!=18&&bird!=19&&bird!=20&&bird!=21&&bird!=22||
			move3==5&&bird!=11&&bird!=12&&bird!=13&&bird!=14&&bird!=15&&bird!=16&&bird!=17||
			move4==5&&bird!=7&&bird!=8&&bird!=9&&bird!=10&&bird!=11&&bird!=12&&bird!=13||
			move5==5&&bird!=16&&bird!=17&&bird!=18&&bird!=19&&bird!=20&&bird!=21&&bird!=22||
			move6==5&&bird!=13&&bird!=14&&bird!=15&&bird!=16&&bird!=17&&bird!=18&&bird!=19||
			move7==5&&bird!=5&&bird!=6&&bird!=7&&bird!=8&&bird!=9&&bird!=10&&bird!=12||
			move8==5&&bird!=11&&bird!=12&&bird!=13&&bird!=14&&bird!=15&&bird!=16&&bird!=17||
			move9==5&&bird!=13&&bird!=14&&bird!=15&&bird!=16&&bird!=17&&bird!=18&&bird!=19||
			move10==5&&bird!=20&&bird!=21&&bird!=22&&bird!=23&&bird!=24&&bird!=25&&bird!=26||
			move11==5&&bird!=18&&bird!=19&&bird!=20&&bird!=21&&bird!=22&&bird!=23&&bird!=24||
			move12==5&&bird!=13&&bird!=14&&bird!=15&&bird!=16&&bird!=17&&bird!=18&&bird!=19||
			move13==5&&bird!=11&&bird!=12&&bird!=13&&bird!=14&&bird!=15&&bird!=16&&bird!=17   ){
				game_over=1;	                                                                   
					GameOver++; 
				 if(GameOver==1){
					          cout<<"game over";   
				}				     
			}else {
				
				SetConsoleTextAttribute(hStdOut,FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE| BACKGROUND_GREEN |BACKGROUND_BLUE);
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
            
            switch(direction){
            	case 'a': bird-=3;
            	break;
            	case 'z':bird++;
            	break;
			}
        }
        bird++;
         
         if(move1==4||move2==4||move3==4||move4==4||move5==4||move6==4||move7==4||
		 move8==4||move9==4||move10==4||move11==4||move12==4||move13==4){
		 	score++;
		 }
         
	move1--;
	move2--;
	move3--;
	move4--;
	move5--;
	move6--;
	move7--;
	move8--;
	move9--;
	move10--;
	move11--;
	move12--;
	move13--;
	
	if(move13==48){
		move1=58,move2=68,move3=78,move4=88,move5=98,move6=108;
	}
	if(move6==48){
		move7=58,move8=68,move9=78,move10=88,move11=98,move12=108,move13=118;
	}
	
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {0,0});
if(game_over==0){
	goto start;
}

	return 0;
}
