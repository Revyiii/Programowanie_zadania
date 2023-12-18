#include <iostream>
#include <math.h>
#include <windows.h>
#include <string.h>

using namespace std;

void gotoxy(int x, int y)
{
    COORD cord;
    cord.X = x;
    cord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
}   

int getrc(bool pick) // 0=columns 1=rows
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int columns, rows;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    if(pick==0){return columns;}
    else{return rows;}
}

int getx()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    int x=csbi.dwCursorPosition.X;  
	return x;
}
int gety()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    int y=csbi.dwCursorPosition.Y;  
	return y;
}

void clearLine(int y)
{
    int i=0;
    int c=getrc(0);
    gotoxy(0,y);
    while(i<c)
    {
        cout<<" ";
        i++;
    }
}

int los(int x)
{
	int a = 1+rand()%(x);
	return a;
}

int get(int n,int max){
int a;
while(true){
//clearLine(gety());
cout<<"gracz nr."<<n<<" podaj liczbe calkowita od 1 do "<<max<<":";
cin.clear();cin.sync();cin>>a;
if(cin.fail()||a>max||a<1){clearLine(gety()-1);gotoxy(0,gety());cout<<"podana wartosc jest zla spruboj ponownie ";}
else{clearLine(gety()-1);gotoxy(0,gety());cout<<"gracz nr."<<n<<" podaj liczbe calkowita od 1 do 50:##"<<endl;return a;}
}
}

void komentarz(int x,int y, int n){
    gotoxy(x,y);
    switch (n)
    {
    case 0:cout<<"jestes super!"<<endl;break;
    case 1:cout<<"smielej!"<<endl;break;
    case 2:cout<<"nie przesadaj!"<<endl;break;
    case 3:cout<<"ojej!"<<endl;break;
    default:cout<<"cos poszło nie tak"<<endl;break;
    }
}

void gwiazdki(int x,int y, int n){
    gotoxy(x,y);
    int i=1;
    while(i<=n){
        cout<<"*";
        i++;
    }
}

void sprawdz(int k,int g1,int g2, int &o1, int &o2)
{
bool a=floor(g1/k);
bool b=floor(g2/k);
if (a+b==2){o1=2;o2=2;}
else if(a==1){o1=2;o2=0;}
else if(b==1){o1=0;o2=2;}
else if(g1>g2){o1=0;o2=1;}
else if(g1<g2){o1=1;o2=0;}
else if(g1==g2){o1=3;o2=3;}
else{cout<<"coś poszło nie tak"<<endl;}
}

string kto_wygral(int &o1,int &o2)
{
	string wniosek;
	if(o2==0){wniosek="gracz 2";}
	else if(o1==0){wniosek="gracz 1";}
	else if(o1==3){wniosek="remis";}
	else{wniosek="nikt";}		
	return wniosek;
}

int main(){
    cout<<endl<<"Witam w grze w gwiazdki"<<endl;//fancy intro maybe?
    char d;    
    int g1;
    int g2;
    int o1;
    int o2;
    int w1=0;
    int w2=0;
    int k;
    while(true)
    {
        g1=get(1,50);
        g2=get(2,50);
        k=los(50);
        cout<<"k:";gwiazdki(4,gety(),k);
        cout<<endl<<"P1:";gwiazdki(4,gety(),g1);
        cout<<endl<<"P2:";gwiazdki(4,gety(),g2);
        cout<<endl;
        
        sprawdz(k,g1,g2,o1,o2);
        gotoxy(0,gety()+1);
        cout<<"gracz 1 ";komentarz(8,gety(),o1);
        cout<<"gracz 2 ";komentarz(8,gety(),o2);
        cout<<"Wygral "<<kto_wygral(o1,o2)<<endl;
		if(o1==0){w1++;}
        else if(o2==0){w2++;}
        

    cout<<"jeszcze raz? T/N: ";
    do{cin.clear();cin.sync();cin>>d;d=toupper(d);
		if(d=='N'){return 0;}
		else if(d=='T'){system("cls");gotoxy(0,0);cout<<"g1:"<<w1<<" g2:"<<w2<<endl;break;}
		else{cout<<"podana wartartość jest nie poprawna. Ponów prubu"<<endl;}
		}while(true);
    }
	cin.get();
    return 0;
}   
