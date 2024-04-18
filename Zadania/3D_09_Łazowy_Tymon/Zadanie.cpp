#include <iostream>
#include <windows.h>

#include <ctime>
// #include <cstdlib>
// #include <conio.h>

using namespace std;

const int maxs = 11;
#include "func_2wT.cpp"

int input(string n)
{
	int a; 
	while(true)
	{
		cout<<endl<<n;
		cin.clear();cin.sync();cin>>a;
		if(cin.good()){return a;}
		cout<<"zla wartosc"<<endl;
	}
}
int input(string n,int max)
{
	int a; 
	while(true)
	{
		cout<<endl<<n;
		cin.clear();cin.sync();cin>>a;
		if(cin.good()&& a<=max&&a>=0){return a;}
		cout<<"zla wartosc"<<endl;
	}
}
void zamiana(int tab[maxs][maxs],int x,int n)
{
int i=0;
while (i<n){
	swap(tab[x-1][i],tab[i][x-1]);
	i++;
}
}


int main(){
	srand(time(NULL));
	cout<<endl<<"Witam w zadaniu"<<endl;
	char d;
	int n;
	int x;
	
	string odp;
	while(true)
	{
		n=input("Podaj n:",11);
		int tab[n][maxs];
		lost2(tab,n,n);
		piszt2(tab,n,n);
		x=input("podaj x:",11);
		zamiana(tab,x,n);
		piszt2(tab,n,n);
		
		cout<<"jeszcze raz? T/N: ";
		do{cin.clear();cin.sync();cin>>d;d=toupper(d);
			if(d=='N'){return 0;}
		else if(d=='T'){break;}
			else{cout<<"podana wartartość jest nie poprawna. Ponów prubu"<<endl;}
		}while(true);
	}
	cin.get();
	return 0;
}
