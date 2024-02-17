//#include <iostream>
//#include <windows.h>

//Tymon Łazowy 20/12/2023

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

