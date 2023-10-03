#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    bool r = true;  
    char d;
	cout<<"program do nwd i nww"<<endl;  
    
	int i;
    char l='a';
    int g[2]={0,0};
	
	while(r==true)
    {
    /*
    cout<<"podaj a:";
    int a=0;cin>>a;
    if(cin.fail()){r=false;cout<<endl<<"podana wartoÅ›Ä‡ jest nie poprawna"<<endl;}
    cout<<"podaj b:";
    int b=0;cin>>b;
    if(cin.fail()){r=false;cout<<endl<<"podana wartoÅ›Ä‡ jest nie poprawna"<<endl;}
    */
	i=0;
	while(i<2){
    cout<<"podaj "<<l<<": ";
    cin.clear();cin.sync();
    g[i]=0;cin>>g[i];
    if(cin.fail()){cout<<endl<<"podana wartoÅ›Ä‡ jest nie poprawna"<<endl;i--;l--;}
    i++;l++;
    }
	
	int a=g[0];
	int b=g[1];
	int c;
    int x=a;
    int y=b;
    
	do
    {
        c=a%b;
        a=b;
        b=c;
    }while (b!=0);
    x=(x*y)/a;
    
    cout<<"nwd:"<<a<<" nww:"<<x<<endl;
    
		cout<<"jeszcze raz? T/N: ";
		do{
		cin.clear();cin.sync();
		cin>>d;
		d=toupper(d);
		if(d=='N'){return 0;}
		else if(d=='T'){break;}
		else{cout<<"podana wartoœæ jest nie poprawna. Ponów prubê"<<endl;}
		}while(true);
    }
    
	cin.get();
    return 0;
}
