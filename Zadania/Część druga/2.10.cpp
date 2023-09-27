#include <iostream>
#include <math.h>
#define _WIN32_WINNT 0x0500
#include <windows.h>
#include <stdlib.h>
using namespace std;

void gotoxy(int x, int y)
{
COORD cord;
cord.X = x;
cord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
}
int wherey()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    COORD                      result;
    if (!GetConsoleScreenBufferInfo(
        GetStdHandle( STD_OUTPUT_HANDLE ),
        &csbi
        ))
    return -1;
    return result.Y;
  }

int main()
{
   /*
    HWND console = GetConsoleWindow();
    RECT r;
     GetWindowRect(console, &r); //stores the console's current dimensions

    //MoveWindow(window_handle, x, y, width, height, redraw_window);-
    MoveWindow(console, r.left, r.top, 1050, 900, TRUE);
    */// nie działa nie wiem dla czego 
    char d;
	int a[2]={0,16};
    string c[2]={"min","max"};
    int i;
    int x;
    int y;
    int l=5;
    cout<<"program tabliczka mno�enie od do.\n Program przymuje wartości <-15;15>"<<endl;  
    while(true)
    {
    
    
    i=0;
    a[2]={16};
    while(i<2){
    cout<<"podaj "<<c[i]<<": ";
    cin.clear();cin.sync();
    a[i]=0;cin>>a[i];
    if(cin.fail()||abs(a[i])>15||a[0]>a[1]){cout<<endl<<"podana wartość jest nie poprawna"<<endl;i--;}
 
    i++;
    }
    system("cls");
    y=a[0];
    
    
    while (y<=a[1])
    {
        gotoxy((y-a[0]+1)*l,0);
        cout<<y<<",";
        
        
        y++;
    }
    cout<<endl;
    y=a[0];
    while (y<=a[1])
    {
        
        cout<<"-";
        gotoxy((y-a[0]+1)*l,1);
        y++;
    }
    cout<<endl;

    y=a[0];
    while (y<=a[1])
    {
        x=a[0];
        ;
        cout<<y;
        gotoxy(3,y-a[0]+2);
        cout<<"|";
        while (x<=a[1])
        {
            gotoxy((x-a[0]+1)*l,y-a[0]+2);
            cout<<y*x<<",";
            x++;
        }
        cout<<endl;
        y++;
    }
    	cout<<"jeszcze raz? T/N: ";
		do{
		cin.clear();cin.sync();
		cin>>d;
		d=toupper(d);
		if(d=='N'){return 0;}
		else if(d=='T'){break;}
		else{cout<<"podana warto�� jest nie poprawna. Pon�w prub�"<<endl;}
		}while(true);
    }
    
	cin.get();
    return 0;
}
