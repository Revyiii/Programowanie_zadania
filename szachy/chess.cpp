#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y)
{
COORD cord;
cord.X = x;
cord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
}

void animat_plane_w(int pla[])
{
	gotoxy(0,0);
	int c;
	int r=55;
	while(r>=-1)
	{
		c=r;
		cout<<(r+1)/8+1<<"  ";
		while(c<r+8)
		{
		c++;
		cout<<pla[c] <<",";		
		}
		r=r-8;
		cout<<endl;
	}
	cout<<endl<<"   a,b,c,d,e,f,g,h"<<endl;
}
void animat_plane_b(int pla[])
{
	gotoxy(0,0);
	int c;
	int r=8;
	while(r<=64)
	{
		c=r-1;
		cout<<(r+1)/8<<"  ";
		while(c>=r-8)
		{
		
		cout<<pla[c]<<",";	
		c--;	
		}
		r=r+8;
		cout<<endl;
	}
	cout<<endl<<"   h,g,f,e,d,c,b,a"<<endl;
}

float white_move(string pow,plane[])
{
    char* pow_arr = new char[pow.length()];
    strcpy(pow_arr, pow.c_str());
    
    int figure=0;
    int colum=pow_arr[0]-96;
    int row=pow_arr[pow.length()-1]-48;
    int pole=8*(row-1)+colum-1;
	
	if(plane[pole-8]==1)
	{
		
		plane[pole]=1;
		plane[pole-8]=0;
		animat_plane_w(plane);
		gotoxy(0,13);
	}
	else if (plane[pole-16]==1) 
	{
		if
		plane[pole]=1;
		plane[pole-16]=0;
		animat_plane_w(plane);
		gotoxy(0,13);	
	}
	else{cout<<"bad move"<< endl;return-1;}
	
}


int main()
{
	int n=0;
	int plane[64] = {\
	4,2,3,5,6,3,2,4,\
	1,1,1,1,1,1,1,1,\
	0,0,0,0,0,0,0,0,\
	0,0,0,0,0,0,0,0,\
	0,0,0,0,0,0,0,0,\
	0,0,0,0,0,0,0,0,\
	7,7,7,7,7,7,7,7,\
	10,8,9,11,12,9,8,10,\
	};
	float pole = 0;
	bool mate=false;
	string pow;
	
	while (mate==false)
	{
	n++;
	system("cls");
	gotoxy(0,0);
	animat_plane_w(plane);
	
	while(pole<0)
	{
	cout <<"w:";
	cin>>pow;
	}
	pole=white_move(pow,plane);
	plane[floor(pole)]=plane[pole-floor(pole)];
	animat_plane_w(plane);	
	
	//-------------ruch-------------
	
	
	//cout <<"figure: "<< figure<<endl<<"row: "<<row<<endl<<"colum: "<<colum<<endl<<"pole: "<<pole<<endl;
    cout <<"b:";
	cin>>pow;   
	
	system("cls");
	animat_plane_b(plane);	
	//================CZARNY RUCH=====================
	
	
	
	delete[] pow_arr;
	}

	

	cin.get();
	return 0;
}
