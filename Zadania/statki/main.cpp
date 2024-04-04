	#include <cctype>
#include <iostream>
#include <windows.h>
#include <ctime>
#include <fstream>
#include <cstdlib>
#include <conio.h>
//#include <math.h>

using namespace std;
#include "getxy().h"

const int maxs = 12;
int norm = 12;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
#include "funk.h"
#include "stream.h"
int main(){
	srand(time(NULL));
	cout<<endl<<"Witam w grze w statki"<<endl;
	
	int g[maxs][maxs];
	int k[maxs][maxs];
	
	zero(g);
	zero(k);
	char d;
	
	int cof[]={4,3,2,1};
	cout<<sizeof(cof)/sizeof(cof[0])<<endl;//debug
	cout<<"Czy chcesz wczytac zapis(T/N):";
	
	while(true){
	d=toupper(getch());
	if(d=='T'){czytaj(g,k);break;}
	else if(d=='N'){
	ofstream save;
	save.open("save1.txt");
	save.close();
	break;
	}
	else{cout<<"zla wartosc"<<endl;}
	}
	while(true)
	{
		cout << "\033[2J\033[1;1H";//clear screen
		if(d=='T'){d='N';}
		else{los(g,k,cof,sizeof(cof)/sizeof(cof[0]));}
		plane();

			wypisz(k,1);
			wypisz(g,0);
		while(true)
		{
			SetConsoleTextAttribute(hConsole, 12);
			cout<<endl;
			cout<<endl;
			SG(k);
			wypisz(k,1);
			wypisz(g,0);
			SK(g);
			wpisz(g,k);//nie optymalne zrob tak aby sg() i sk() same updatowaly	
			if(TEST(k)==0||TEST(g)==0){break;}
		}
		gotoxy(0,20);
		cout << "\033[2J\033[1;1H";//clear screen
		cout<<"jeszcze raz? T/N: ";
		do{cin.clear();cin.sync();cin>>d;d=toupper(d);
			if(d=='N'){return 0;}
			else if(d=='T'){d='N';break;}
			else{cout<<"podana wartartość jest nie poprawna. Ponów prubu"<<endl;}
		}while(true);
	}
	cin.get();
	return 0;
}   
