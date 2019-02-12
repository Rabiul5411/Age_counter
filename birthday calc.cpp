#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class all{
public:
int year,month,day,daygap,totalday,dayforleap,i;
void timedelay();
void timedelay2();
void animation1();
void animation2();
void animation3();
void input1();
void input2();
void countday1();
void countday2();
void display();
void disres();
};

void all::timedelay(){
int a=0;
for(int i=0;i<1000;i++){
	for(int j=0;j<6000;j++){
    a=a+.001;
   }
}
}

void all::timedelay2(){
int a=0;
for(int i=0;i<500;i++){
	for(int j=0;j<3000;j++){
    a=a+.001;
   }
}
}

void all:: animation1(){
cout<<endl<<"    B";
timedelay();
clrscr();
cout<<endl<<"    Bi";
timedelay();
clrscr();
cout<<endl<<"    Bir";
timedelay();
clrscr();
cout<<endl<<"    Birt";
timedelay();
clrscr();
cout<<endl<<"    Birth";
timedelay();
clrscr();
cout<<endl<<"    Birthd";
timedelay();
clrscr();
cout<<endl<<"    Birthda";
timedelay();
clrscr();
cout<<endl<<"    Birthday";
timedelay();
clrscr();
cout<<endl<<"    Birthday ";
timedelay();
clrscr();
cout<<endl<<"    Birthday C";
timedelay();
clrscr();
cout<<endl<<"    Birthday Ca";
timedelay();
clrscr();
cout<<endl<<"    Birthday Cal";
timedelay();
clrscr();
cout<<endl<<"    Birthday Calc";
timedelay();
clrscr();
cout<<endl<<"    Birthday Calcu";
timedelay();
clrscr();
cout<<endl<<"    Birthday Calcul";
timedelay();
clrscr();
cout<<endl<<"    Birthday Calcula";
timedelay();
clrscr();
cout<<endl<<"    Birthday Calculat";
timedelay();
clrscr();
cout<<endl<<"    Birthday Calculati";
timedelay();
clrscr();
cout<<endl<<"    Birthday Calculatio";
timedelay();
clrscr();
cout<<endl<<"    Birthday Calculation"<<endl;
timedelay();
}

void all::animation2(){
for(int i=0;i<52;i++){
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<setfill(' ')<<setw(i+25)<<"Made by- Rabiul Islam Robi"<<endl;
cout<<setfill('-')<<setw(80)<<"";
timedelay2();

	if(i==24)
   {
   timedelay2();
   timedelay2();
   timedelay2();
   timedelay2();
   }
clrscr();
}
}

void all::input1(){
cout<<endl<<"Enter Present date (day month year): ";
cin>>day>>month>>year;
}

void all::input2(){
cout<<endl<<"Enter Birth date (day month year): ";
cin>>day>>month>>year;
}

void all:: countday1(){
daygap=0;
daygap=year*365;

if(month==1)
daygap=daygap+0;
if(month==2)
daygap=daygap+31;
if(month==3)
daygap=daygap+31+28;
if(month==4)
daygap=daygap+31+28+31;
if(month==5)
daygap=daygap+31+28+31+30;
if(month==6)
daygap=daygap+31+28+31+30+31;
if(month==7)
daygap=daygap+31+28+31+30+31+30;
if(month==8)
daygap=daygap+31+28+31+30+31+30+31;
if(month==9)
daygap=daygap+31+28+31+30+31+30+31+31;
if(month==10)
daygap=daygap+31+28+31+30+31+30+31+31+30;
if(month==11)
daygap=daygap+31+28+31+30+31+30+31+31+30+31;
if(month==12)
daygap=daygap+31+28+31+30+31+30+31+31+30+31+30;

daygap=daygap+day;
}

void all::countday2(){
dayforleap=0;
for(int i=0;i<=year;i++){
	if((i%4==0 && i%100!=0)||(i%4==0 && i%400==0))
   dayforleap++;
}
daygap=daygap+dayforleap;
}

void all:: display(){
if(daygap%7==1)
cout<<"That means SATURDAY";
if(daygap%7==2)
cout<<"That means SUNDAY";
if(daygap%7==3)
cout<<"That means MONDAY";
if(daygap%7==4)
cout<<"That means TUESDAY";
if(daygap%7==5)
cout<<"That means WEDNESDAY";
if(daygap%7==6)
cout<<"That means THURSDAY";
if(daygap%7==0)
cout<<"That means FRIDAY";
getch();
}

void all::disres(){
int yr,mh,dy;
yr=totalday/365;
mh=(totalday%365)/30;
dy=(totalday%365)%30;
cout<<endl<<endl<<"Your age is:";
cout<<yr;
if(yr>1)
cout<<"years";
else
cout<<"year";

cout<<endl<<"            "<<mh;
if(mh>1)
cout<<"months";
else
cout<<"month";

cout<<endl<<"            "<<dy;
if(dy>1)
cout<<"days";
else
cout<<"days";
}

void main(){
all robi;
all objpd;          //object for present date
all objbd;          //object for birth date
robi.animation1();

objpd.input1();
objpd.countday1();
objpd.countday2();
objpd.display();

objbd.input2();
objbd.countday1();
objbd.countday2();
objbd.display();

robi.totalday=objpd.daygap-objbd.daygap;
robi.disres();

getch();
clrscr();
robi.animation2();
}
