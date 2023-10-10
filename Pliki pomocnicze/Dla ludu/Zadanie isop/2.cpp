#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    bool r = true;
    while(r==true)
    {
    float n = 0;
    cout<<endl<<"program do soprawdzania czy liczba naturalna jest wynikiem potęgowania\n podaj numer:";
    cin>>n;
    if(cin.fail() || n<=0){r=false;cout<<endl<<"podana wartość jest nie poprawna"<<endl;}
    n = sqrt(n);
    int nn = n;
    if(n-nn==0){cout<<"numer jest potega liczny naturalnej "<<n;}
    else{cout<<"numer nie jest potęgą liczny naturalnej ale jest potega "<< n;}
    
    }

	cin.get();
    return 0;
}