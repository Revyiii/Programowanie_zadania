#include <iostream>
#include <conio.h>

int e=4;
int u=3;
int f=5;
int p=1;
using namespace std;
int saldo;

dis(char a)
{
	switch (a)
	{
	
		case 'E':
			cout<<"EUR:"<<saldo/e<<endl;	
			break;
		case 'U':
			cout<<"USD:"<<saldo/u<<endl;	
			break;
		case 'F':
			cout<<"CHF:"<<saldo/f<<endl;	
			break;
		case 'P':
			cout<<"PLN:"<<saldo/p<<endl;	
			break;
	}
}

int main() 
{
	
	char c;
	cout<<"ile masz pieniêdzy?:";
	cin>>saldo;
	cout<<"w jakiej walucie? \n EUR=E\n USD=U\n CHF=F\n PLN=P";
	c=toupper(getch());
	cout<<endl;
	switch (c)
	{
		case 'E':
			saldo=saldo*e;
			dis('U');dis('F');dis('P');
			break; 
		case 'U':
			saldo=saldo*u;
			dis('E');dis('F');dis('P');
			break; 
		case 'F':
			saldo=saldo*f;
			dis('U');dis('E');dis('P');
			break; 
		case 'P':
			saldo=saldo*p;
			dis('U');dis('F');dis('E');
			break; 
			
	}
	return 0;
}
