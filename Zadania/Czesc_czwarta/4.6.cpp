#include <iostream>
#include <windows.h>

#include <ctime>
// #include <cstdlib>
// #include <conio.h>

using namespace std;

const int maxs = 100;
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

int main(){
	srand(time(NULL));
	cout<<endl<<"Witam w zadaniu 4.6"<<endl;
	char d;
	int n;
	int m;
	int l;
	int p;
	int i;
	int ii;
	int min;
	int max;
	int pos[4];
	string odp;
	while(true)
	{
		n=input("rozmiar tablicy x:",100);
		m=input("rozmiar tablicy y:",100);
		int tab[n][maxs];
		l=input("Los czy nie\n1.los\n2.uzytkownik podaje\n",2);
		if(l==1){lost2(tab,n,m);}
		else if(l==2){czytajt2(tab,n,m);}
		else{cout<<"cos poszlo nie tak"<<endl;}

		piszt2(tab,n,m);
		min=tab[0][0];
		max=tab[0][0];
		i=0;
		while (i<n)
		{
			ii=0;
			while (ii<m)
			{
				if(min>tab[i][ii]){min=tab[i][ii];pos[0]=i;pos[1]=ii;}
				if(max<tab[i][ii]){max=tab[i][ii];pos[2]=i;pos[3]=ii;}
				ii++;
			}
			i++;
		}
		cout<<endl<<"min:"<<min<<" pos "<< pos[0]+1<<":"<<pos[1]+1<<" max:"<<max<<" pos "<< pos[2]+1<<":"<<pos[3]+1<<endl;
		
		

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
