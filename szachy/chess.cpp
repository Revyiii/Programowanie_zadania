#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;


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
int color;
void gotoxy(int x, int y)
{
COORD cord;
cord.X = x;
cord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
}

void animat_plane()
{
	gotoxy(0,0);
	int c;
	int n;
	int r;
	char letter;
	if (color==-1){r=8;letter=104;/*h czarne*/}
	else{r=55;letter=97;/*a białe */}
	cout<<"color: "<< color << endl;//debug
	while(r>=-1 && r<=64)
	{
		c=r;
		n=0;
		cout<<(r+1)/9-((color+1)/2-1)<<"  ";//round(pow(1/2,color))-1
		while(n<8)
		{
		c=c+1*color;
		cout<<plane[c] <<",";		
		n++;
		}
		r=r-8*color;
		cout<<endl;
	}
	cout<<endl<<".  ";	
	for(int n=0;n<8;n++)
	{
	cout<<letter<<",";
	letter = letter+color;
	}
	cout<<endl;
}
void move()
{
    char letter=98-((color+1)/2-1);//a
	string pow;
	cout << letter<<":";
	cin>>pow;
	
	char* pow_arr = new char[pow.length()];
    strcpy(pow_arr, pow.c_str());
    
    int figure=0;
    int colum=pow_arr[0]-96;
    int row=pow_arr[pow.length()-1]-48;
    int pole=8*(row-1)+colum-1;
	
	delete[] pow_arr;
}


int main()
{
	bool mate=false;	
	while (mate==false)
	{
	color=1;//białe
	system("cls");
	animat_plane();
	move();

	color=-1;//czarne
	system("cls");
	animat_plane();
	move();
	}
	cin.get();
	return 0;
}
