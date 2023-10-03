#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
    bool r = true;  
    cout<<"program do sprawdzania ilości liczb podzielnych przez c w przedziale <a,b>"<<endl;  
    while(r==true)
    {
    
    cout<<"podaj a:";
    int a=0;cin>>a;
    if(cin.fail()){r=false;cout<<endl<<"podana wartość jest nie poprawna"<<endl;}
    cout<<"podaj b:";
    int b=0;cin>>b;
    if(cin.fail() || b<a){r=false;cout<<endl<<"podana wartość jest nie poprawna"<<endl;}
    cout<<"podaj c:";
    int c=0;cin>>c;
    if(cin.fail()){r=false;cout<<endl<<"podana wartość jest nie poprawna"<<endl;}
    int i=a;
    vector<int> s;
    s.clear();
    while (i<=b)    
    { 
        if(i%c==0){s.push_back(i);}
        i++;
    }
    cout<<"przedzial "<<a<<" - "<<b<<" zawiera "<<s.size()<<" liczb podzielnych przez "<<c<<endl;
    for (int ii = 0; ii < s.size(); ii++)
    {
        cout<<s.at(ii)<<", ";
    }
    cout<<endl;
    }
    
	cin.get();
    return 0;
}