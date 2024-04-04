#include <iostream>
#include <windows.h>

using namespace std;

const int maxs = 100;


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

CZYTAJT(int T[maxs],int n){
int i =0;
while(i<n){cout<<T[i]<<",";i++;}
}

PISZT(int T[maxs],int n){
int i =0;
while(i<n){cout<<"podaj "<<i+1<<" element:";cin>>T[i];i++;}	
}

LOST(int T[maxs],int n){
int i=0;
while(i<n){T[i]=rand()%(100);i++;}
}


int main(){
	cout<<endl<<"Witam w zadaniu 4.3"<<endl;
	char d;
	int n;
	int l;
	int p;
	int i;
	string odp;
	while(true)
	{
		n=input("rozmiar tablicy:",100);
		int tab[n];
		l=input("Los czy nie\n1.los\n2.uzytkownik podaje\n",2);
		if(l==1){LOST(tab,n);}
		else if(l==2){PISZT(tab,n);}
		else{cout<<"cos poszlo nie tak"<<endl;}

		CZYTAJT(tab,n);

		p=input("zobacz czy liczba jest w tablicy:");

		i=0;
		odp="NIE";
		while(i<n)
		{
			if(p==tab[i]){odp="TAK";break;}
			i++;
		}
		cout<<odp;
		if(odp=="TAK"){cout<<" pozycja:"<<i+1<<endl;}

		

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
