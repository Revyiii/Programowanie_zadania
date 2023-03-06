#include <iostream>
#include <conio.h>
#include <locale.h>
#include <cmath>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y)
{
COORD cord;
cord.X = x;
cord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
}
 
int main()
{
setlocale(LC_CTYPE,"Polish");
float a; cout<<"prosze podać a:"; cin>>a;
float b; cout<<"prosze podać b:"; cin>>b;
float c; cout<<"prosze podać c:"; cin>>c;
float d; cout<<"prosze podać d:"; cin>>d;
float delta;
gotoxy(0,25);
if(a==0)
{
	if(b==0){
		if(c==d){cout<<"Równanie tożsamośćowe"<<endl;}
		else{cout<<"równanie sprzeczne"<< endl;}}
	else{b=(d-c)/b;cout<<"x jest równy: "<<b<<endl;}
}	
else
{
	c=c-d;
	float delta=pow(b,2)-(4.0*a*c);
	if(delta==0){a=((-b)/(2*a));cout<<"x jest równy: "<< a <<endl;}
	else
	{
		if(delta>0)
		{
			cout<<"x1 jest równy: "<< ((-b-sqrt(delta))/(2*a))<<endl;
			cout<<"x2 jest równy: "<<((-b+sqrt(delta))/(2*a))<<endl;
		}
		else{cout<<"brak rozwiązń"<<endl;}	
	}
}

cin.get();
return 0;
}
