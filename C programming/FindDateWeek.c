// THIS IS MY FIRST PROJECT IN C PROGRAM
//THIS IS FIND THE DATE WEEK..
//I AM UPDATE TOMORROW THIS CODE I AM REDUCE THE CODE LINE..
#include <stdio.h> 
int main() { 
 char name[10]; 
 int jan=32,feb=30,mar=32,apr=31, 
 may=32,jun=31,jul=32,aug=32,sep=31,oct=32,nov=31,dec=32; 
 int janc=0,febc=3,marc=3,aprc=6,mayc=1,junc=4,julc=6,augc=2,sepc=5,octc=0,novc=2,decc=5; 
 printf("PLEASE ENTER YOUR NAME :"); 
 scanf("%s",&name); 
 int day,month,year,week,yr; 
 int week_maltile, week_sub,leap_year; 
 int a,TYD=2023; 
 printf(".\nENTER YOUR DATE OF BIRTH\n"); 
 printf("--------*********--------\n"); 
 printf("DATE:"); 
 scanf("%d",&day); 
 printf("MONTH:"); 
 scanf("%d",&month); 
 printf("YEAR:"); 
 scanf("%d",&year); 
 yr=year%100; 
 printf(".\n-----------***********-----------\nYOUR DETAILS \n-----------***********-----------\n"); 
 printf("YOUR NAME IS :%s\n",name); 
 if(year>=2200) 
 { 
 printf("\"THE YEAR IS NOT EXIST\" \n"); 
 }else if(year<=2199) 
 { 
 if (year>=1600 && year<=1699) 
 { int aa=6; 
 switch (month){ 
 
 case 1:if(day>=jan) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/jan/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+janc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 2:if(day>=feb) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/feb/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+febc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 3:if(day>=mar) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/mar/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+marc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 4:if(day>=apr) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/apr/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+aprc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 5: if(day>=may) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/may/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+mayc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 6:if(day>=jun) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/jun/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+junc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 7:if(day>=jul) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/jul/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+julc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 8:if(day>=aug) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/aug/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+augc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 9: if(day>=sep) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/sep/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+sepc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 10: if(day>=oct) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/oct/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+octc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 11:if(day>=nov) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/nov/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+novc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 12:if(day>=dec) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/dec/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+decc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 default:printf("YOU ENTER THE EXIST MONTH"); 
 } 
 } 
} if(year>=1700 && year<=1799) 
{ int aa=4; 
 switch (month){ 
 
 case 1:if(day>=jan) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/jan/%d\n",day,year); 
 printf("YOUR FAGE IS:%d\n",a); 
 week_maltile=day+janc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 2:if(day>=feb) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/feb/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+febc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 3:if(day>=mar) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/mar/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+marc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 4:if(day>=apr) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/apr/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+aprc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 5: if(day>=may) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/may/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+mayc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 6:if(day>=jun) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/jun/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+junc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 7:if(day>=jul) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/jul/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+julc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 8:if(day>=aug) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/aug/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+augc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 9: if(day>=sep) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/sep/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+sepc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 10: if(day>=oct) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/oct/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+octc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 11:if(day>=nov) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/nov/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+novc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 12:if(day>=dec) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/dec/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+decc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 default:printf("YOU ENTER THE EXIST MONTH"); 
 } 
 } 
 if(year>=1800 && year<=1899) 
 { int aa=4; 
 switch (month){ 
 
 case 1:if(day>=jan) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/jan/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+janc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 2:if(day>=feb) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/feb/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+febc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 3:if(day>=mar) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/mar/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+marc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 4:if(day>=apr) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/apr/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+aprc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 5: if(day>=may) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/may/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+mayc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 6:if(day>=jun) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/jun/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+junc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 7:if(day>=jul) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/jul/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+julc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 8:if(day>=aug) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/aug/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+augc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 9: if(day>=sep) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/sep/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+sepc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 10: if(day>=oct) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/oct/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+octc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 11:if(day>=nov) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/nov/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+novc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 12:if(day>=dec) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/dec/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+decc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 default:printf("YOU ENTER THE EXIST MONTH"); 
 } 
 } if(year>=1900 && year<=1999) 
 { int aa=0; 
 switch (month){ 
 
 case 1:if(day>=jan) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/jan/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+janc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 2:if(day>=feb) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/feb/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+febc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 3:if(day>=mar) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/mar/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+marc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 4:if(day>=apr) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/apr/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+aprc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 5: if(day>=may) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/may/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+mayc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 6:if(day>=jun) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/jun/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+junc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 7:if(day>=jul) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/jul/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+julc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 8:if(day>=aug) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/aug/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+augc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 9: if(day>=sep) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/sep/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+sepc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 10: if(day>=oct) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/oct/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+octc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 11:if(day>=nov) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/nov/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+novc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 
 } 
 break; 
 case 12:if(day>=dec) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/dec/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+decc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 } 
 break; 
 default:printf("YOU ENTER THE EXIST MONTH"); 
 } 
 } 
 if(year>=2000 && year<=2099) 
 { int aa=6; 
 switch (month){ 
 
 case 1:if(day>=jan) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/jan/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+janc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 } 
 break; 
 case 2:if(day>=feb) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/feb/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+febc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 } 
 break; 
 case 3:if(day>=mar) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/mar/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+marc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 } 
 break; 
 case 4:if(day>=apr) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/apr/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+aprc+yr+yr/4+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 } 
 break; 
 case 5: if(day>=may) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/may/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+mayc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 } 
 break; 
 case 6:if(day>=jun) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/jun/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+junc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 } 
 break; 
 case 7:if(day>=jul) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/jul/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+julc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 } 
 break; 
 case 8:if(day>=aug) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/aug/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+augc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 } 
 break; 
 case 9: if(day>=sep) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/sep/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+sepc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 } 
 break; 
 case 10: if(day>=oct) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/oct/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+octc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 } 
 break; 
 case 11:if(day>=nov) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/nov/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+novc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 } 
 break; 
 case 12:if(day>=dec) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/dec/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+decc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 } 
 break; 
 default:printf("YOU ENTER THE EXIST MONTH"); 
 } 
 } 
 if(year>=2100 && year<=2199) 
 { int aa=4; 
 switch (month){ 
 
 case 1:if(day>=jan) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/jan/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+janc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 } 
 break; 
 case 2:if(day>=feb) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/feb/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+febc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 } 
 break; 
 case 3:if(day>=mar) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/mar/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+marc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 } 
 break; 
 case 4:if(day>=apr) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/apr/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+aprc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 } 
 break; 
 case 5: if(day>=may) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/may/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+mayc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 } 
 break; 
 case 6:if(day>=jun) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/jun/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+junc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 } 
 break; 
 case 7:if(day>=jul) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/jul/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+julc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 } 
 break; 
 case 8:if(day>=aug) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/aug/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+augc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 } 
 break; 
 case 9: if(day>=sep) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/sep/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+sepc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 } 
 break; 
 case 10: if(day>=oct) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/oct/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+octc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 } 
 break; 
 case 11:if(day>=nov) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/nov/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+novc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 } 
 break; 
 case 12:if(day>=dec) 
 { 
 printf("PLEASE ENTER CORRECT DATE\n"); 
 break; 
 } 
 a=TYD-year; 
 printf("YOUR DATE OF BIRTH:%d/dec/%d\n",day,year); 
 printf("YOUR AGE IS:%d\n",a); 
 week_maltile=day+decc+yr+(yr/4)+aa; 
 week=week_maltile%7; 
 switch(week){ 
 case 0: printf("Sunday"); 
 break; 
 case 1: printf("monday"); 
 break; 
 case 2: printf("Tuesday "); 
 break; 
 case 3: printf("Wednesday"); 
 break; 
 case 4: printf("Thursday"); 
 break; 
 case 5: printf("Friday"); 
 break; 
 case 6: printf("Saturday"); 
 break; 
 default:printf("this is not work"); 
 } 
 break; 
 default:printf("YOU ENTER THE EXIST MONTH"); 
 } 
 } 
 return 0; 
} 