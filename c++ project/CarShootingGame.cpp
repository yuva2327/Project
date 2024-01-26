/*
Game Name:- Car Shooting Game  
Game Creator:- yuvaraj.p
Game version:- 0.1.1
(this is Devloping stage) but it is almost work
____________________________________________________________________________________

This is c++ Based =>Car Shooting Game
_____________________________________________________________________________________
_____________________________________________________________________________________
They have to play at a time two player
---------------------------------------
       frist player
    ---------------
          This game have Two Controller Button (z),(x) (1,2,3,4,5,6,7,8,9,0)
               z => button is use for back 
               x => button is use for front 
        Secend player
    ---------------
          This game have Two Controller Button (z),(x) (1,2,3,4,5,6,7,8,9,0)
               , => button is use for front 
               . => button is use for back 
_____________________________________________________________________________________   
 How to play ? goal of game ?
 --------------------------  
		   * shoot or damage enemy car help with (1,2,3,4,5,6,7,8,9,0)
		   * (1,2,3,4,5,6,7,8,9,0) this is rang for shooting
		   * decrease the  point or score of enemy car 
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
	int right_block1=1,right_block2=2,right_block3=3,right_block4=4;
	int left_block1=26,left_block2=27,left_block3=28,left_block4=29;
	int right_bock_move_ponit=1;
	int car1=15,car2=40;
	int car1_height_fire=27,car1_width_fire=15,car2_height_fire=27,car2_width_fire=40,fire_key,shoot=0,next_shoot=0;
	int direction;
	int car1_score=100;
	int car2_score=100;
	 HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	 start:
	 cout<<"CAR1 SCORE ="<<car1_score<<"\t\t\t\t\tCAR2 SCORE ="<<car2_score<<endl;
	 	for(int height=0;height<=30;height++){
		for(int width=0;width<=66;width++){
			if(height==0||height==30||width==0||width==66){
					SetConsoleTextAttribute(hStdOut,FOREGROUND_INTENSITY| BACKGROUND_INTENSITY );
				cout<<"##";
			}else if(width==30&&height==right_block1||
					 width==30&&height==right_block2||
					 width==30&&height==right_block3||
					 width==30&&height==right_block4){
					 		SetConsoleTextAttribute(hStdOut,FOREGROUND_INTENSITY| BACKGROUND_INTENSITY );
				cout<<"# ";
			}else if(width==32&&height==left_block1||
					 width==32&&height==left_block2||
					 width==32&&height==left_block3||
					 width==32&&height==left_block4){
					 		SetConsoleTextAttribute(hStdOut,FOREGROUND_INTENSITY| BACKGROUND_INTENSITY );
				cout<<"# ";
			}else if(height==28&&width==car1){
					SetConsoleTextAttribute(hStdOut,FOREGROUND_BLUE| BACKGROUND_BLUE );
				cout<<"[@]";
			}else if(height==29&&width==car1){
				SetConsoleTextAttribute(hStdOut,FOREGROUND_BLUE|BACKGROUND_RED |BACKGROUND_GREEN|BACKGROUND_BLUE);
				cout<<"o o";
			}else if(height==28&&width==car2){
					SetConsoleTextAttribute(hStdOut,FOREGROUND_RED| BACKGROUND_RED );
				cout<<"[@]";
			}else if(height==29&&width==car2){
				SetConsoleTextAttribute(hStdOut,FOREGROUND_RED|BACKGROUND_RED |BACKGROUND_GREEN|BACKGROUND_BLUE);
				cout<<"o o";
			}else if(height==car1_height_fire&&width==car1_width_fire+1){
					SetConsoleTextAttribute(hStdOut,FOREGROUND_BLUE| BACKGROUND_BLUE );
					cout<<" *";
			}else if(height==car2_height_fire&&width==car2_width_fire){
				SetConsoleTextAttribute(hStdOut,FOREGROUND_RED| BACKGROUND_RED );
				cout<<"* ";
			}else if(height==27&&width==car1_width_fire&&car1_height_fire>=28||height==27&&width==car2_width_fire&&car2_height_fire>=28){
				SetConsoleTextAttribute(hStdOut,FOREGROUND_RED|BACKGROUND_RED);
				cout<<"###";
			}else if(height==28&&width==car1_width_fire&&car1_height_fire>=28||height==28&&width==car2_width_fire&&car2_height_fire>=28){
				SetConsoleTextAttribute(hStdOut,FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN|BACKGROUND_INTENSITY|BACKGROUND_RED |BACKGROUND_GREEN);
				cout<<"###";
			}else if(height==29&&width==car1_width_fire&&car1_height_fire>=28||height==29&&width==car2_width_fire&&car2_height_fire>=28){
				SetConsoleTextAttribute(hStdOut,FOREGROUND_RED|BACKGROUND_RED);
				cout<<"###";
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
            
            switch(direction){
            	case 120 : car1++;
            		    	car1_width_fire++;
            	break;
            	case 122 :car1--;
             				car1_width_fire--;
            	break;
            	case 46 :car2++;
            			car2_width_fire++;
            	break;
            	case 44 : car2--;
            	   		 car2_width_fire--;
            	break;
            	case 49 :fire_key=1;
            	break;
            	case 50:fire_key=2;
            	break;
            	case 51:fire_key=3;
            	break;
            	case 52:fire_key=4;
            	break;
            	case 53:fire_key=5;
            	break;
            	case 54 :fire_key=6;
            	break;
            	case 55:fire_key=7;
            	break;
            	case 56:fire_key=8;
            	break;
            	case 57 :fire_key=9;
            	break;
            	case 48 :fire_key=10;
            	break;
			}
        }
        
        if(car1>=28){
        	car1=28;
		}else if(car1<=1){
			car1=1;
		}
		
		if(car2>=64){
			car2=64;
		}else if(car2<=35){
			car2=35;
		}
		
	if(right_block1==26){
		right_bock_move_ponit=0;
	}else if(right_block1==1){
		right_bock_move_ponit=1;
	}
	
	
	if(next_shoot==0){
	if(fire_key==1){
		if(shoot==0){
			car1_width_fire++;
			car1_height_fire--;
			if(car1_height_fire==24){
				shoot=1;
			}
		}else if(shoot==1){
			car1_width_fire++;
			car1_height_fire++;
			if(car1_height_fire>=30){
				car1_height_fire=27;
				car1_width_fire=car1;
				shoot=0;
				fire_key=11;
			}
		}
	}
	if(fire_key==2){
		if(shoot==0){
			car1_width_fire++;
			car1_height_fire--;
			if(car1_height_fire==22){
				shoot=1;
			}
		}else if(shoot==1){
			car1_width_fire++;
			car1_height_fire++;
			if(car1_height_fire>=30){
				car1_height_fire=27;
				car1_width_fire=car1;
				shoot=0;
				fire_key=11;
			}
		}
	}
	if(fire_key==3){
		if(shoot==0){
			car1_width_fire++;
			car1_height_fire--;
			if(car1_height_fire==18){
				shoot=1;
			}
		}else if(shoot==1){
			car1_width_fire++;
			car1_height_fire++;
			if(car1_height_fire>=30){
				car1_height_fire=27;
				car1_width_fire=car1;
				shoot=0;
				fire_key=11;
			}
		}
	}
	if(fire_key==4){
		if(shoot==0){
			car1_width_fire++;
			car1_height_fire--;
			if(car1_height_fire==16){
				shoot=1;
			}
		}else if(shoot==1){
			car1_width_fire++;
			car1_height_fire++;
			if(car1_height_fire>=30){
				car1_height_fire=27;
				car1_width_fire=car1;
				shoot=0;
				fire_key=11;
			}
		}
	}
	if(fire_key==5){
		if(shoot==0){
			car1_width_fire++;
			car1_height_fire--;
			if(car1_height_fire==15){
				shoot=1;
			}
		}else if(shoot==1){
			car1_width_fire++;
			car1_height_fire++;
			if(car1_height_fire>=30){
				car1_height_fire=27;
				car1_width_fire=car1;
				shoot=0;
				fire_key=11;
			}
		}
	}
	if(fire_key==6){
		if(shoot==0){
			car1_width_fire++;
			car1_height_fire--;
			if(car1_height_fire==13){
				shoot=1;
			}
		}else if(shoot==1){
			car1_width_fire++;
			car1_height_fire++;
			if(car1_height_fire>=30){
				car1_height_fire=27;
				car1_width_fire=car1;
				shoot=0;
				fire_key=11;
			}
		}
	}
	if(fire_key==7){
		if(shoot==0){
			car1_width_fire++;
			car1_height_fire--;
			if(car1_height_fire==11){
				shoot=1;
			}
		}else if(shoot==1){
			car1_width_fire++;
			car1_height_fire++;
			if(car1_height_fire>=30){
				car1_height_fire=27;
				car1_width_fire=car1;
				shoot=0;
				fire_key=11;
			}
		}
	}
	if(fire_key==8){
		if(shoot==0){
			car1_width_fire++;
			car1_height_fire--;
			if(car1_height_fire==9){
				shoot=1;
			}
		}else if(shoot==1){
			car1_width_fire++;
			car1_height_fire++;
			if(car1_height_fire>=30){
				car1_height_fire=27;
				car1_width_fire=car1;
				shoot=0;
				fire_key=11;
			}
		}
	}
	if(fire_key==9){
		if(shoot==0){
			car1_width_fire++;
			car1_height_fire--;
			if(car1_height_fire==7){
				shoot=1;
			}
		}else if(shoot==1){
			car1_width_fire++;
			car1_height_fire++;
			if(car1_height_fire>=30){
				car1_height_fire=27;
				car1_width_fire=car1;
				shoot=0;
				fire_key=11;
			}
		}
	}
	if(fire_key==10){
		if(shoot==0){
			car1_width_fire++;
			car1_height_fire--;
			if(car1_height_fire==5){
				shoot=1;
			}
		}else if(shoot==1){
			car1_width_fire++;
			car1_height_fire++;
			if(car1_height_fire>=30){
				car1_height_fire=27;
				car1_width_fire=car1;
				shoot=0;
				fire_key=11;
			}
		}
	}
	
}
 if(next_shoot==1){
	if(fire_key==1){
		if(shoot==0){
			car2_width_fire--;
			car2_height_fire--;
			if(car2_height_fire==24){
				shoot=1;
			}
		}else if(shoot==1){
			car2_width_fire--;
			car2_height_fire++;
			if(car2_height_fire>=30){
				car2_height_fire=27;
				car2_width_fire=car2;
				shoot=0;
				fire_key=12;
			}
		}
	}
	if(fire_key==2){
		if(shoot==0){
			car2_width_fire--;
			car2_height_fire--;
			if(car2_height_fire==22){
				shoot=1;
			}
		}else if(shoot==1){
			car2_width_fire--;
			car2_height_fire++;
			if(car2_height_fire>=30){
				car2_height_fire=27;
				car2_width_fire=car2;
				shoot=0;
				fire_key=12;
			}
		}
	}
	if(fire_key==3){
		if(shoot==0){
			car2_width_fire--;
			car2_height_fire--;
			if(car2_height_fire==18){
				shoot=1;
			}
		}else if(shoot==1){
			car2_width_fire--;
			car2_height_fire++;
			if(car2_height_fire>=30){
				car2_height_fire=27;
				car2_width_fire=car2;
				shoot=0;
				fire_key=12;
			}
		}
	}
	if(fire_key==4){
		if(shoot==0){
			car2_width_fire--;
			car2_height_fire--;
			if(car2_height_fire==16){
				shoot=1;
			}
		}else if(shoot==1){
			car2_width_fire--;
			car2_height_fire++;
			if(car2_height_fire>=30){
				car2_height_fire=27;
				car2_width_fire=car2;
				shoot=0;
				fire_key=12;
			}
		}
	}
	if(fire_key==5){
		if(shoot==0){
			car2_width_fire--;
			car2_height_fire--;
			if(car2_height_fire==15){
				shoot=1;
			}
		}else if(shoot==1){
			car2_width_fire--;
			car2_height_fire++;
			if(car2_height_fire>=30){
				car2_height_fire=27;
				car2_width_fire=car2;
				shoot=0;
				fire_key=12;
			}
		}
	}
	if(fire_key==6){
		if(shoot==0){
			car2_width_fire--;
			car2_height_fire--;
			if(car2_height_fire==13){
				shoot=1;
			}
		}else if(shoot==1){
			car2_width_fire--;
			car2_height_fire++;
			if(car2_height_fire>=30){
				car2_height_fire=27;
				car2_width_fire=car2;
				shoot=0;
				fire_key=12;
			}
		}
	}
	if(fire_key==7){
		if(shoot==0){
			car2_width_fire--;
			car2_height_fire--;
			if(car2_height_fire==11){
				shoot=1;
			}
		}else if(shoot==1){
			car2_width_fire--;
			car2_height_fire++;
			if(car2_height_fire>=30){
				car2_height_fire=27;
				car2_width_fire=car2;
				shoot=0;
				fire_key=12;
			}
		}
	}
	if(fire_key==8){
		if(shoot==0){
			car2_width_fire--;
			car2_height_fire--;
			if(car2_height_fire==9){
				shoot=1;
			}
		}else if(shoot==1){
			car2_width_fire--;
			car2_height_fire++;
			if(car2_height_fire>=30){
				car2_height_fire=27;
				car2_width_fire=car2;
				shoot=0;
				fire_key=12;
			}
		}
	}
	if(fire_key==9){
		if(shoot==0){
			car2_width_fire--;
			car2_height_fire--;
			if(car2_height_fire==7){
				shoot=1;
			}
		}else if(shoot==1){
			car2_width_fire--;
			car2_height_fire++;
			if(car2_height_fire>=30){
				car2_height_fire=27;
				car2_width_fire=car2;
				shoot=0;
				fire_key=12;
			}
		}
	}
	if(fire_key==10){
		if(shoot==0){
			car2_width_fire--;
			car2_height_fire--;
			if(car2_height_fire==5){
				shoot=1;
			}
		}else if(shoot==1){
			car2_width_fire--;
			car2_height_fire++;
			if(car2_height_fire>=30){
				car2_height_fire=27;
				car2_width_fire=car2;
				shoot=0;
				fire_key=12;
			}
		}
	}

}
if(right_block1==car2_height_fire&&car2_width_fire==30||
   right_block2==car2_height_fire&&car2_width_fire==30||
   right_block3==car2_height_fire&&car2_width_fire==30||
   right_block4==car2_height_fire&&car2_width_fire==30||
   right_block1==car1_height_fire&&car1_width_fire==30||
   right_block2==car1_height_fire&&car1_width_fire==30||
   right_block3==car1_height_fire&&car1_width_fire==30||
   right_block4==car1_height_fire&&car1_width_fire==30){
   	
	car2_height_fire=27;
	car2_width_fire=car2;
	
	car1_height_fire=27;
	car1_width_fire=car1;
	
	if(next_shoot==1){
		next_shoot=0;
	}else{
		next_shoot=1;
	}
	
}
if(left_block1==car2_height_fire&&car2_width_fire==32||
   left_block2==car2_height_fire&&car2_width_fire==32||
   left_block3==car2_height_fire&&car2_width_fire==32||
   left_block4==car2_height_fire&&car2_width_fire==32||
   left_block1==car1_height_fire&&car1_width_fire==32||
   left_block2==car1_height_fire&&car1_width_fire==32||
   left_block3==car1_height_fire&&car1_width_fire==32||
   left_block4==car1_height_fire&&car1_width_fire==32){
	
	car2_height_fire=27;
	car2_width_fire=car2;
	
	car1_height_fire=27;
	car1_width_fire=car1;
	
	if(next_shoot==1){
		next_shoot=0;
	}else{
		next_shoot=1;
		}
	
}
if(fire_key==11){
	next_shoot=1;
   }else if(fire_key==12){
	next_shoot=0;
}
	
if(car1_height_fire==28&&car2==car1_width_fire){
car2_score = car2_score-10;
}else if(car2_height_fire==28&&car1==car2_width_fire){
car1_score=car1_score-10;
}
	if(right_bock_move_ponit==1){
	right_block1++;
	right_block2++;
	right_block3++;
	right_block4++;
	left_block1--;
	left_block2--;
	left_block3--;
	left_block4--;
    }else{
	right_block1--;
	right_block2--;
	right_block3--;
	right_block4--;
	left_block1++;
	left_block2++;
	left_block3++;
	left_block4++;
	}
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {0,0});
	goto start;
	
	return 0;
}
	