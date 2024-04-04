#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;
const int n = 100;

PISZT(int T[n],int n){
int i =0;
while(i<n){cout<<T[i]<<",";i++;}
}

CZYTAJT(int T[n],int n){
int i =0;
while(i<n){cout<<"podaj "<<i+1<<" element:";cin>>T[i];i++;}	
}

LOST(int T[],int n){
int i=0;
while(i<n){T[i]=rand()%(100);i++;}
}

int main()
{
	cout<<"Witam w programie z tablicami"<<endl;
	
	bool r = true;  
    char d;
	
	while(r==true)
    {srand(time(NULL));
    //	srand(time(NULL));
    	int m;
    	
		while(true){
		cout<<"Podaj liczbe elementow ktore chcesz umiescic w tablicy:"<<endl;
		
		cin.clear();cin.sync();cin>>m;
		if(m>n || cin.fail()){cout<<"podana wartosc wykracza poza przedzial tablicy"<<endl;}
		else{break;}
		}
		
		int A[m];
		CZYTAJT(A,m);
		PISZT(A,m);
		int i =m;
		while(0<=i-1){cout<<A[i-1]<<",";i--;}
		
		

		
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
