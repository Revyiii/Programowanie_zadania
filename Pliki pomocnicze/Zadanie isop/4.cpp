#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    cout<<endl<<"program do obliczania silni numeru"<<endl;
    bool r = true;
    
    while(r==true)
    {
    cout<<"\npodaj numer:";
    int i=1;
    int n = 0;
    double w = 1;
    cin>>n;
    if(cin.fail()){r=false;cout<<endl<<"podana wartość jest nie poprawna"<<endl;}
    
    while (n>=i)
    {
        w=w*i;
        i++;
    }
    cout<<"silnia z numeru "<<n<<" wynosi:"<<w<<endl;
    }
	cin.get();
    return 0;
}