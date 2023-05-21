#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
vector<int> p;
bool prime(int n)
{   
    int i=1;
    int c=-2;
    while (n>=i)
    {
        if(n%i==0){c++;}
        i++;
    }
    if (c==0){return true;}
    else{return false;}
}


int main()
{
    bool r = true;  
    cout<<"program do sprawdzania ilości liczb pierwszych w danym przedziale"<<endl;  
    while(r==true)
    {
    p.clear();
    cout<<endl<<"podaj a:";
    int a=0;cin>>a;
    if(cin.fail() || a<=0){r=false;cout<<endl<<"podana wartość jest nie poprawna"<<endl;}
    cout<<"podaj b:";
    int b=0;cin>>b;
    if(cin.fail() || b<a){r=false;cout<<endl<<"podana wartość jest nie poprawna"<<endl;}
    int i=a;
    int n=0;
    while (i<=b)
    {
        n=n+prime(i);
        if(prime(i)==true){p.push_back(i);}
        i++;
    }
    cout<<"przdzial "<<a<<" - "<<b<<" zawiera "<<n<<" liczb pierwsze:"<<endl;
    for (int ii = 0; ii < p.size(); ii++)
    {
        cout<<p.at(ii)<<", ";
    }
    }
    
    
	cin.get();
    return 0;
}