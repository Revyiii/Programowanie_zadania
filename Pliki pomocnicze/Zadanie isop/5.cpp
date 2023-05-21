#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    cout<<endl<<"program do dzielnia"<<endl;
    bool r = true;
    
    while(r==true)
    {
    cout<<"\npodaj n:";
    float n = 0;
    cin>>n;
    if(cin.fail()){r=false;cout<<endl<<"podana wartość jest nie poprawna"<<endl;}
    float r = 0;
    cout<<"\npodaj r:";
    cin>>r;
    if(cin.fail() || r==0){r=false;cout<<endl<<"podana wartość jest nie poprawna"<<endl;}
    n=n/r;
    cout<<"n podzielone przez r jest rowne "<<n<<endl;
    }
	cin.get();
    return 0;
}