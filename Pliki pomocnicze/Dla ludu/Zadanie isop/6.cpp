#include <iostream>

using namespace std;

int main()
{
    cout<<endl<<"program do liczenie n liczby fibonacciego"<<endl;
    bool r = true;
    
    while(r==true)
    {
    cout<<"\npodaj n:";
    int n = 0;
    cin>>n;
    if(cin.fail()){r=false;cout<<endl<<"podana wartość jest nie poprawna"<<endl;}
    int i = 0;
    double a=0;
    double b=1;
    double c=0;
    while (n>i)
    {
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    cout<<n<<" liczba ciagu fibonacciego jest rowna:"<<a<<endl;
    }
	cin.get();
    return 0;
}   