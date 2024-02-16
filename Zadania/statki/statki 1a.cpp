#include <iostream>
#include <windows.h>

using namespace std;

const int maxs = 12;

void zero(int p[maxs][maxs])
{
	for (int i=0; i<maxs; i++)
	{for (int ii=0; ii<maxs; ii++)
		p[i][ii]=0;
	}
}

void wypisz(int p[maxs][maxs])
{
	for (int i=0; i<maxs; i++)
	{for (int ii=0; ii<maxs; ii++)
	{cout.width(2);
		cout<<p[i][ii];
	}cout<<endl;
	}
}

int main(){
	cout<<endl<<"Witam w grze w statki"<<endl;
	char d;
	int g[maxs][maxs];
	int k[maxs][maxs];
	while(true)
	{
		
		zero(g);
		zero(k);
		wypisz(g);
		cout<<endl;
		wypisz(k); 

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
