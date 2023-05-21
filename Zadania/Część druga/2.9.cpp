#include <iostream>
using namespace std;

int main()
{
    bool r = true;  
    cout<<"program do nwd i nww"<<endl;  
    while(r==true)
    {
    
    cout<<"podaj a:";
    int a=0;cin>>a;
    if(cin.fail()){r=false;cout<<endl<<"podana wartość jest nie poprawna"<<endl;}
    cout<<"podaj b:";
    int b=0;cin>>b;
    if(cin.fail()){r=false;cout<<endl<<"podana wartość jest nie poprawna"<<endl;}
    int c;
    int x=a;
    int y=b;
    do
    {
        c=a%b;
        a=b;
        b=c;
    }while (b!=0);
    do
    {
        if(x>y){x=x*x;}
        if(y>x){y=y*y;}

    } while (x==y);
    cout<<"nwd:"<<a<<" nww:"<<x<<endl;
    }
    
	cin.get();
    return 0;
}