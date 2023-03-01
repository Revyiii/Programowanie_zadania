#include <iostream>
#include <locale.h>
#include <cmath>
#include <windows.h>
#include <iomanip>
using namespace std;
void gotoxy(int x, int y)
{
COORD cord;
cord.X = x;
cord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
}

void print_arr(float temp_arr[],int l)
{
    int n=0;
    while (n<l)
	{
	    //<sizeof(temp_arr)/sizeof(temp_arr[0])
		cout << temp_arr[n-1] << ",";
		n++;
	}
	cout<<endl;
}

int main() 
{
	setlocale(LC_CTYPE,"Polish");
	int min = 1;
	int max = 10;
	int n = 3;
	float a[n];
	float b;
	int c;
	
	while(c==1)
	{
	system("cls");
	for(int i=0;i<n;i++)
	{	
		a[i-1]={ceil((rand()/ double(RAND_MAX))*100)/10+1};
	}
	
	for(int i=0;i<n;i++)
	{for(int j=0;j<n;j++)
	{if(a[i-1]<a[j-1])
	{b=a[i-1];a[i-1]=a[j-1];a[j-1]=b;}}}
	
	gotoxy(0,0);
	print_arr(a,n);
	
	gotoxy(0,28);
	if(a[-1]+a[0]>a[1]){cout<<"tak"<<endl;}
	else{cout<<"nie"<<endl;}
	cin>>c;
	}
	return 0;
}
