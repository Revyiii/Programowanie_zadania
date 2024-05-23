#include <cctype>
#include <iostream>
#include <windows.h>
#include <ctime>
#include <fstream>
#include <cstdlib>
#include <conio.h>
//#include <math.h>

using namespace std;



const int maxs = 12;
int norm = 12;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void gotoxy(int x, int y)
{
    COORD cord;
    cord.X = x;
    cord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
}  

void zero(int p[maxs][maxs])
{
	for (int i=1; i<=10; i++)
	{for (int ii=1; ii<=10; ii++)
		p[i][ii]=0;
	}
}
void wypisz(int p[maxs][maxs],bool s)
{
	//int b =144;
	int b=144;
	int c =144;
	for (int i=1; i<=maxs-2; i++)
	{for (int ii=1; ii<=maxs-2; ii++)
	{
		gotoxy(i*2+maxs*s*2,3+ii);
		SetConsoleTextAttribute(hConsole, b);
		if(p[i][ii]>=1){SetConsoleTextAttribute(hConsole, c);}
		cout<<p[i][ii]<<' ';
		SetConsoleTextAttribute(hConsole, norm);
	}cout<<endl;
	}
}
void losx(int p[maxs][maxs],int n)
{
	int x;
	int y;
	bool k;
	bool t=true;
	while (true)
	{
		x=rand()%(maxs-n);
		y=rand()%(maxs)-1;
		k=rand()%(2);
		if(k==1){swap(x,y);};
		//cout<<x<<":"<<y<<":"<<k<<endl;
		t=true;
		for (int i=0; i<n; i++)
		{
			if(p[x+i*(1-k)][y+i*k]!=0){t=false;break;}
		}
		if(t==true){break;}
	}
	for(int i=0;i<3;i++)
	{
		p[x+i*k-1][y-1+i*(1-k)]=5;
		p[x+i*k-1+n*(1-k)+1*(1-k)][y-1+i*(1-k)+n*k+1*k]=5;
	}
	for (int i = 0; i < n; i++)
	{
		p[x+i*(1-k)-1*k][y+i*k-1*(1-k)]=5;
		p[x+i*(1-k)][y+i*k]=n;
		p[x+i*(1-k)+1*k][y+i*k+1*(1-k)]=5;
	}
}


int main(){
	srand(time(NULL));
	cout<<endl<<"Witam w grze w statki"<<endl;
	
	int g[maxs][maxs];
	int k[maxs][maxs];
	
	
	char d;
		
	while(true)
	{
		cout << "\033[2J\033[1;1H";//clear screen
		
		zero(g);
		zero(k);
		
		losx(g,4);
		losx(k,4);
	
		wypisz(k,1);
		wypisz(g,0);
	
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
