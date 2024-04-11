#include <iostream>
#include <string.h>
#include <math.h>
const int maxs = 100;

using namespace std;

void czytajt2(int T[maxs][maxs],int n, int m)//dopracować podaj 
{
	for (int i=0; i<n; i++) {
		for (int ii=0; ii<m; ii++) {
			cout<<"Podaj("<<i+1<<","<<ii+1<<"):";
			cin>>T[i][ii];
		}
	}
}

void piszt2(int T[maxs][maxs],int n,int m)//zapytaj pana czy to jest ok ;) w sensię że bez n i m od użytkownika ale chyba nie bo zmniejszsa to fynkcjonalność
{
	for (int i=0; i<n; i++) {
		for (int ii=0; ii<m; ii++) {
			cout.width(4);
			cout<<T[i][ii]<<",";
		}
		cout<<endl;
	}
}


void shuffle(int w[maxs][maxs],int ww[maxs][maxs],int a,int b ,int c)
{
	int i=0;
	while(i<3)
	{
		 ww[i][0]= w[i][a];
		 ww[i][1]= w[i][b];
		 ww[i][2]= w[i][c];
		i++;	
	}	
} 

int wyznacznik(int w[maxs][maxs])

int main()
{
	bool r = true;  
	char d;
	cout<<"program do wyznacznikow"<<endl;  

	int w[maxs][maxs] = {
		{1,3,2,7},
		{7,4,9,15},
		{5,6,8,17}};
	
	int wx[maxs][maxs];
	int wy[maxs][maxs];
	int wz[maxs][maxs];
	shuffle(w,wx,3,1,2);
	shuffle(w,wy,0,3,2);
	shuffle(w,wz,0,1,3);	
	piszt2(w,3,4);cout<<endl;
	piszt2(wx,3,3);cout<<endl;
	piszt2(wy,3,3);cout<<endl;
	piszt2(wz,3,3);cout<<endl;



	while(r==true)
	{
		

//		if(w!=0){cout<<wx/w<<","<<wy/w<<","<<wz/w<<endl;}
//		else if(wx==0&&wy==0&&wz==0){cout<<"uklad nie oznaczony(nieskaczenie wiele rozwiazan)"<<endl;}
//		else if(wx!=0||wy!=0||wz!=0){cout<<"uklad sprzeczny"<<endl;}


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
