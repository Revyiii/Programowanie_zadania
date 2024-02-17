#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

const int maxs = 12;

void zero(int p[maxs][maxs])
{
	for (int i=1; i<=10; i++)
	{for (int ii=1; ii<=10; ii++)
		p[i][ii]=0;
	}
}

void wypisz(int p[maxs][maxs])
{
	for (int i=1; i<=10; i++)
	{for (int ii=1; ii<=10; ii++)
	{cout.width(2);
		cout<<p[i][ii];
	}cout<<endl;
	}
}

void los4(int p[maxs][maxs])
{
	int x;
	int y;
	bool k;
	while (true)
	{
		x=rand()%(7)+1;
		y=rand()%(10)+1;
		k=rand()%(2);
		if(k==1){swap(x,y);};
		cout<<x<<":"<<y<<":"<<k<<endl;
		if(k==0&&p[x][y]==0&&p[x+1][y]==0&&p[x+2][y]==0&&p[x+3][y]==0){break;}
		else if(k==1&&p[x][y]==0&&p[x][y+1]==0&&p[x][y+2]==0&&p[x][y+3]==0){break;}
	}
	for (int i = 0; i < 4; i++)
	{for (int ii = -1; ii < 2; ii++)
	{for (int iii = -1; iii < 2; iii++)
	{ 	
		p[x+i*(1-k)+ii][y+i*k+iii]=5;
	}}}
	for (int i = 0; i < 4; i++)
	{
		p[x+i*(1-k)][y+i*k]=4;
	}

}

int main(){
	srand(time(NULL));
	cout<<endl<<"Witam w grze w statki"<<endl;
	char d;
	int g[maxs][maxs];
	int k[maxs][maxs];
	while(true)
	{
		
		zero(g);
		zero(k);
		//wypisz(g);
		cout<<endl;
		//wypisz(k); 

		los4(g);
		los4(k);

		wypisz(g);
		cout<<endl;
		//wypisz(k);

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
