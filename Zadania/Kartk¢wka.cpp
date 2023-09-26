#include <iostream>
#include <locale.h>
#include <cmath>
#include <windows.h>
#include <iomanip>
#include <conio.h>
#include <ctime>
#include <bits/stdc++.h>
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
	srand(time(NULL));
	float a; cout<<"podaj a:";cin>>a;
	float b; cout<<"podaj b:";cin>>b;
	char n;
	cout<<"\nD-Dzieleni\nP-Pierwiastkowanie\nR-Rezygnacja";
	n=toupper(getch());
	switch (n)
	{
		case 'D':
			{
			gotoxy(0,20);
			if(b>a){swap(a,b);}
			if(b==0){cout<<"podane wartoœci s¹ nie porawid³owe"<<endl;}
			else{a=a/b;cout<<setprecision(3)<<a<<endl;}
			break; 
			}
		case 'P':
			{
			
			gotoxy(0,15);
			float c=1+rand()%(9-1+1);
			c=sqrt((a*b)/c);
			cout<<setprecision(3)<<c;
			break; 
			}
		case 'R':
			{
			gotoxy(0,22);
			cout<<"Do widzenia"<<endl;
			break; 
			}
	}

	



	cin.get();
	return 0;
}
