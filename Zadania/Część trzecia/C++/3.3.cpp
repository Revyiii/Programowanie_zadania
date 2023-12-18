#include <iostream>
#include <math.h>
#include <windows.h>
#include <string.h>

using namespace std;
int rekurnecja1(int n)
		{
			if (n==0){return 1;}
			else return n * rekurnecja1(n-1);
		}
		
int rekurnecja2(int a,int b)
		{
			if (n==0){return 1;}
			else return rekurnecja2(b,a%b);
		}
		
int rekurnecja3(int n)
		{
			if (n==1 || n==2){return 1;}
			else return rekurnecja3(n-1)+rekurnecja3(n+1);
		}

int silnia (int r){
	int n;
	while(true)
	{
		cout<<endl<<"podaj n:";
		cin.clear();cin.sync();cin>>n;
		if(cin.good()){break;}
	}
	if (r==1){return 1;}		
		n=rekurnecja1(n);	
	}
	
int NWD (int r){}
int Fibonacci (int r){}
	
int main(){
    cout<<endl<<"Witam w zadaniu 3.3"<<endl;//fancy intro maybe?
    char d;
	    
	    
    
    while(true)
    {
    	int w;
    	int r;
    	cout<<"Opcje: \n1.Silnia\n2.NWD\n3.Fibonacci";
    	
		while(true)
		{
			cout<<endl<<"wybur:";
			cin.clear();cin.sync();cin>>w;
			if(cin.good() && w>=1 && w<=3){break;}
		}
		
		cout<<"Opcje: \n1.Iteracyjnie \n2.Rekurencyjnie";
    	
		while(true)
		{
			cout<<endl<<"opcja:";
			cin.clear();cin.sync();cin>>r;
			if(cin.good() && r>=1 && r<=2){break;}
		}
		
		if(w==1){cout<<"sinia:"<<silnia(r)<<endl;}
		else if(w==2){cout<<"nwd:"<<NWD(r)<<endl;}
		else if(w==3){cout<<"Fibonacci:"<<Fibonacci(r)<<endl;}
		else{cout<<"coœ posz³o nie tak"<<endl;}		
    	
		
    cout<<"jeszcze raz? T/N: ";
    do{cin.clear();cin.sync();cin>>d;d=toupper(d);
		if(d=='N'){return 0;}
		else if(d=='T'){break;}
		else{cout<<"podana wartartoÅ›Ä‡ jest nie poprawna. PonÃ³w prubu"<<endl;}
		}while(true);
    }
	cin.get();
    return 0;
}   
