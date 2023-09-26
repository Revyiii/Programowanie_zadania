#include <iostream>
using namespace std;

int main()
{
    bool r = true;  
    char d;
	cout<<"program do nwd i nww"<<endl;  
    while(r==true)
    {
    
    cout<<"podaj a:";
    int a=0;cin>>a;
    if(cin.fail()){r=false;cout<<endl<<"podana wartoÅ›Ä‡ jest nie poprawna"<<endl;}
    cout<<"podaj b:";
    int b=0;cin>>b;
    if(cin.fail()){r=false;cout<<endl<<"podana wartoÅ›Ä‡ jest nie poprawna"<<endl;}
    
    int x=a;
    int y=b;
    
	while(a!=b)
	{
		if(a>b){a=a-b;}
		else{b=b-a;}
	}
    
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
