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
#include "render.h"
#include "funk.h"
int main(){
	srand(time(NULL));
	
	int g[maxs][maxs];
	int k[maxs][maxs];
	
	zero(g);
	zero(k);
	char d;
	
	int cof[]={4,3,2,1};
	
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
		if(d=='T'){d='N';}
		else{los(g,k,cof,sizeof(cof)/sizeof(cof[0]));}
		//main game loop
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
