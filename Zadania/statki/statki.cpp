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

int input(string n,int max)
{
	int a; 
	while(true)
	{	a=0;
		cout<<endl<<n;
		cin>>a;
		//if(a=='q'||'Q'==a){exit(EXIT_SUCCESS);}
		cout<<a;
		if(!cin.fail()&& a<=max&&a>=0){return a;}
		cout<<"zla wartosc"<<endl;
		cin.clear();cin.sync();
	}
}

//int input(string g,int max){
//	bool k = false;
//	int x = 0;
//	do{
//		cout<<g;cin>>x;
//		if(cin.fail()){cout<<"wartosc nieprawidlowa\n";}
//		else{
//			if(x<=0 or x>max){cout<<"liczba poza zakresem";}
//			else{k = true;}
//		}
//	cin.clear();cin.sync();
//	}while(k==false);
//	return x;
//}
void zero(int p[maxs][maxs])
{
	for (int i=1; i<=10; i++)
	{for (int ii=1; ii<=10; ii++)
		p[i][ii]=0;
	}
}

void wypisz(int p[maxs][maxs],bool s)
{
	int b =9;
	for (int i=1; i<=10; i++)
	{for (int ii=1; ii<=10; ii++)
	{
		//cout.width(2);za
		//cout<<p[i][ii];
		gotoxy(i*2+maxs*s*2,3+ii);
		SetConsoleTextAttribute(hConsole, b);
		switch (p[i][ii])
		{
			
			case 0:cout<<" ";break;
			case 1:cout<<"*";break;
			case 2:cout<<"*";break;
			case 3:cout<<"*";break;
			case 4:cout<<"*";break;
			case 5:cout<<" ";break;
			case 6:cout<<"x";break;
			case 7:cout<<"+";break;
			default:cout<<" ";break;

		}
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
	int x;
	int y;
	while(true){
	gotoxy(0,maxs+10);
	cout<<"podaj kolumne<a-j>:";
	x=tolower(getche())-96;
	if(x+96=='q'){exit(EXIT_SUCCESS);}
	if(x>=1&&x<=maxs-2){break;}
	else{cout<<"zla wartsc";}
	}

	gotoxy(0,maxs+10);
	cout<<"podaj wiersz<1-10>(10=:):";
	y=tolower(getche())-64;
	if(y+64=='q'){exit(EXIT_SUCCESS);}

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
	int b = 311;
	char letter ='a';
	system("cls");
	cout<<"statki";
	gotoxy(maxs/2+2,2);
	cout<<"gracz";
	gotoxy(maxs*2.5,2);
	cout<<"komputer";
	for(int i=1;i<=maxs-2;i++){
		SetConsoleTextAttribute(hConsole, b);
		gotoxy(0,3+i);
		cout<<"  ";
		gotoxy(0,3+i);
		cout<<i;
		gotoxy(maxs*2,3+i);
		cout<<"  ";
		gotoxy(maxs*2,3+i);
		cout<<i;
		gotoxy(i*2,3);
		cout<<' '<<letter;
		gotoxy(i*2+maxs*2,3);
		cout<<" "<<letter;
		SetConsoleTextAttribute(hConsole, norm);
		letter++;
	}
	gotoxy(0, maxs+5);
	cout<<"Aby wyjsc wcisnij [Q]";

	SetConsoleTextAttribute(hConsole, 0);
}
void czytaj(int g[maxs][maxs],int k[maxs][maxs]){
	int x;int y;
	fstream save;
	save.open("save1.txt",ios::in);
	if(!save.is_open()){cout<<"nie ma pliku";getch();exit(EXIT_FAILURE);}
	int test;
	save>>test;
	if(test!=maxs){cout<<"plik i program maja inna plansze";getch();exit(EXIT_FAILURE);}
	for(int i=0;i<(maxs-2)*(maxs-2);i++)
	{
	x=i+1-i/(maxs-2)*(maxs-2);
	y=i/(maxs-2)+1;
	save>>g[x][y];
	save>>k[x][y];
	}
	save.close();
	getch();
}
void wpisz(int g[maxs][maxs],int k[maxs][maxs])
{
	int x;
	int y;
	fstream save;
	save.open("save1.txt",ios::out);
	save<<maxs;
	for(int i=0;i<(maxs-2)*(maxs-2);i++)
	{
	save<<"\n";
	x=i+1-i/(maxs-2)*(maxs-2);
	y=i/(maxs-2)+1;
//	cout<<"x:"<<x<<" y:"<<y<<endl;
	save<<g[x][y];
	save<<"\n";
	save<<k[x][y];
	}
}
int main(){
	srand(time(NULL));
	cout<<endl<<"Witam w grze w statki"<<endl;
	
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
		else{los(g,k,cof);}
		plane();
		while(true)
		{

			SetConsoleTextAttribute(hConsole, 12);
			wypisz(k,1);
			cout<<endl;
			wypisz(g,0);
			cout<<endl;
			SG(k);
			SK(g);
			wpisz(g,k);//nie optymalne zrob tak aby sg() i sk() same updatowaly	
			if(TEST(k)==0||TEST(g)==0){break;}
		}
		gotoxy(0,20);
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
