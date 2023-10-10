#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
    bool r = true;  
    cout<<"program do sprawdzania ilości kwadratów liczb naturalnych w danym przedziale"<<endl;  
    while(r==true)
    {
    
    cout<<"podaj a:";
    int a=0;cin>>a;
    if(cin.fail() || a<=0){r=false;cout<<endl<<"podana wartość jest nie poprawna"<<endl;}
    cout<<"podaj b:";
    int b=0;cin>>b;
    if(cin.fail() || b<a){r=false;cout<<endl<<"podana wartość jest nie poprawna"<<endl;}
    int i=a;
    vector<int> s;
    s.clear();
    while (i<=b)    
    {
        float n = sqrt(i);
        int nn = n;
        if(n-nn==0){s.push_back(i);}
        i++;
    }
    cout<<"przdzial "<<a<<" - "<<b<<" zawiera "<<s.size()<<" poteg liczb naturalnych"<<endl;
    for (int ii = 0; ii < s.size(); ii++)
    {
        cout<<s.at(ii)<<", ";
    }
    }
    
	cin.get();
    return 0;
}