#include <iostream>
#include <windows.h>
#include <ctime>
#include <fstream>
#include <cstdlib>

using namespace std;

const int maxs = 12;
const int blue = 3;

void gotoxy(int x, int y)
{
    COORD cord;
    cord.X = x;
    cord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
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
void zero(int p[maxs][maxs])
{
	for (int i=1; i<=10; i++)
	{for (int ii=1; ii<=10; ii++)
		p[i][ii]=0;
	}
}

void wypisz(int p[maxs][maxs],bool s)
{
	for (int i=1; i<=10; i++)
	{for (int ii=1; ii<=10; ii++)
	{
		//cout.width(2);
		//cout<<p[i][ii];
		gotoxy(i*2+maxs*s*2,3+ii);
		switch (p[i][ii])
		{
			case 0:cout<<" ";break;
			case 1:cout<<"*";break;
			case 2:cout<<"*";break;
			case 3:cout<<"*";break;
			case 4:cout<<"*";break;
			case 5:cout<<" ";break;
		    default:cout<<" ";break;

		}
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
		x=rand()%(11-n)+1;
		y=rand()%(10)+1;
		k=rand()%(2);
		if(k==1){swap(x,y);};
		cout<<x<<":"<<y<<":"<<k<<endl;
		t=true;
		for (int i=0; i<n; i++)
		{
			if(p[x+i*(1-k)][y+i*k]!=0){t=false;break;}
		}
		if(t==true){break;}
		//if(k==0/*&&p[x][y]==0&&p[x+1][y]==0&&p[x+2][y]==0&&p[x+3][y]==0*/){break;}
		//else if(k==1&&p[x][y]==0&&p[x][y+1]==0&&p[x][y+2]==0&&p[x][y+3]==0){break;}
	}
	for (int i = 0; i < n; i++)//do zopytmalizowania aby nie nadpisywać kratek
	{for (int ii = -1; ii < 2; ii++)
	{for (int iii = -1; iii < 2; iii++)
	{ 	
		p[x+i*(1-k)+ii][y+i*k+iii]=5;
	}}}
	for (int i = 0; i < n; i++)
	{
		p[x+i*(1-k)][y+i*k]=n;
	}
}
void SG(int T[maxs][maxs])
{
	gotoxy(0,maxs+10);
	int x=input("kordynat strzalu x:",10)+1;
	gotoxy(0,maxs+10);
	int y=input("kordynat strzalu y:",10)+1;

	if(T[x][y]==1||T[x][y]==2||T[x][y]==3||T[x][y]==4){T[x][y]=6;}
	else{T[x][y]=7;}
}
void SK(int T[maxs][maxs])
{
	int x=rand()%(10);
	int y=rand()%(10);

	if(T[x][y]==1||T[x][y]==2||T[x][y]==3||T[x][y]==4){T[x][y]=6;}
	else{T[x][y]=7;}
}
void los(int g[maxs][maxs],int k[maxs][maxs],int s[maxs])
{
	zero(g);
	zero(k);
	for(int i=0;i<4;i++){//poprawić aby nie było czwórki tylko jakaś zmnienna 
		for(int ii=0;ii<s[i];ii++){
			losx(g,i+1);
			losx(k,i+1);
	}}
}
int TEST(int T[maxs][maxs])
{
	int c=0;
	
	for (int i=1; i<=10; i++)
	{for (int ii=1; ii<=10; ii++)
		if(T[i][ii]>=1&&T[i][ii]<=4){c++;}
	}
	return c;
}
void plane()
{
	char letter ='a';
	system("cls");
	cout<<"statki";
	gotoxy(maxs/2+2,2);
	cout<<"gracz";
	gotoxy(maxs*2.5,2);
	cout<<"komputer";
	for(int i=1;i<=maxs-2;i++){
		gotoxy(1,3+i);cout<<i;
		gotoxy(maxs*2,3+i);cout<<i;
		gotoxy(i*2,3);cout<<letter;
		gotoxy(i*2+maxs*2,3);cout<<letter;
		letter++;
	}
}
int main(){
	srand(time(NULL));
	cout<<endl<<"Witam w grze w statki"<<endl;
	char d;
	ofstream save;
	save.open("save1.txt");
	save << "staatr";
	save.close();
	
	while(true)
	{
		int g[maxs][maxs];
		int k[maxs][maxs];

		int cof[]={1,1,1,1};
		los(g,k,cof);
		plane();
		while(true)
		{
			wypisz(k,1);
			cout<<endl;
			wypisz(g,0);
			cout<<endl;
			SG(k);
			SK(g);
			
			if(TEST(k)==0||TEST(g)==0){break;}
		}
		gotoxy(0,20);
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
