#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  
    cout<<"ile jest liczb podzielnych przez c w przdziale a-b"<<endl;  
    cout<<"podaj a:";int a=0;cin>>a;
    cout<<"podaj b:";int b=0;cin>>b;
    cout<<"podaj c:";int c=0;cin>>c;
    cout<<"przdzial "<<a<<" ; "<<b<<" zawiera ";
    bool t=a%c;
    a=a+(c*t-(a%c+c)%c);
    b=b-b%c;
    int n=(b-a)/c+1;
    cout<<n<<" liczb podzielnych przez "<<c<<endl;
    for(int i=0;i<n;i++)  
    { 
        cout<<a+c*i<<", "; 
    }
	cin.get();
    return 0;
}