#include <iostream>
#include <math.h>
#include <windows.h>
#include <string.h>

using namespace std;
int input(char n)
{
	int a; 
	while(true)
	{
		cout<<endl<<"podaj "<<n<<":";
		cin.clear();cin.sync();cin>>a;
		if(cin.good()){return a;}
	}
}

int rekurnecja1(int n)
		{
			if (n==0){return 1;}
			else return n * rekurnecja1(n-1);
		}
		
int rekurnecja2(int a,int b)
		{
			if (b==0){return a;}
			else return rekurnecja2(b,a%b);
		}
		
int rekurnecja3(int n)
		{
			if (n==1 || n==2){return 1;}
			else return rekurnecja3(n-1)+rekurnecja3(n-2);
		}

long long silnia (int r){
	long long n=input('n');	
	cout<<"sinia:";
	if (r==1){n=rekurnecja1(n);return n;}			
	if(r==2)
	{
		int i;long long s;
		i=1;s=1;
		while(i<=n){s=s*i;i++;}
		return s;
	}	
	}
	
int NWD (int r){
		
	int a=input('a');
	int b=input('b');
	cout<<"nwd:";
	if (r==1){a=rekurnecja2(a,b);}			
	if(r==2)
	{
		int c;
		do
		{
			c=a%b;a=b;b=c;
		}while (b!=0);
	}	
	return a;
	}

int Fibonacci(int r)
{
	int n=input('n');	
	cout<<"Fibonacci:";
	if (r==1){n=rekurnecja3(n);return n;}			
	if(r==2)
	{
		int i = 0;
		double a=0;double b=1;double c=0;
		while (n>i)
		{c=a+b;a=b;b=c;i++;}
		return a; 
	}	
}

int main(){
    cout<<endl<<"Witam w zadaniu 3.3"<<endl;
    char d;

    while(true)
    {
    	int w;
    	int r;
    	// int t=input('t');
		// cout<<t<<" Test";
		
		cout<<"Opcje: \n1.Silnia\n2.NWD\n3.Fibonacci";
    	
		while(true)
		{
			cout<<endl<<"wybur:";
			cin.clear();cin.sync();cin>>w;
			if(cin.good() && w>=1 && w<=3){break;}
		}
		
		cout<<"Opcje: \n1.Rekurencyjnie \n2.Iteracyjnie";
    	
		while(true)
		{
			cout<<endl<<"opcja:";
			cin.clear();cin.sync();cin>>r;
			if(cin.good() && r>=1 && r<=2){break;}
		}
		
		if(w==1){cout<<silnia(r)<<endl;}
		else if(w==2){cout<<NWD(r)<<endl;}
		else if(w==3){cout<<Fibonacci(r)<<endl;}
		else{cout<<"co� posz�o nie tak"<<endl;}		
    	
		
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
