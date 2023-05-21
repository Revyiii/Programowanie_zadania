#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    cout<<endl<<"program do sprawdzania czy liczba naturalna jest liczbą pierwszą"<<endl;
    bool r = true;
    
    while(r==true)
    {
    cout<<"\npodaj numer:";
    int i=1;
    int n = 0;
    cin>>n;
    if(cin.fail()){r=false;cout<<endl<<"podana wartość jest nie poprawna"<<endl;}
    n=abs(n);
    vector<int> d;
    d.clear();
    while (n>=i)
    {
        if(n%i==0){d.push_back(i);}
        i++;
    }
    if(d.size()==2){cout<<"numer "<<n<<" jest liczb piewsza"<<endl;}
    else{cout<<"numer "<<n<<" nie jest liczba pierwsza "<<endl;}
    cout<<"dzielniki to:";
    for (int ii = 0; ii < d.size(); ii++)
    {
        cout<<d.at(ii)<<", ";
    }
    }

	cin.get();
    return 0;
}