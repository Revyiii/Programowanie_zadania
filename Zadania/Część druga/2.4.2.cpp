#include <iostream>


using namespace std;

int main()
{
  
    cout<<"ile jest liczb podzielnych przez c w przdziale a-b"<<endl;  
    cout<<"podaj a:";int a=0;cin>>a;
    cout<<"podaj b:";int b=0;cin>>b;
    cout<<"podaj c:";int c=0;cin>>c;
    bool t=a%c;
    bool tt=b%c;
    int n=(b-a)/c+(1-t*tt);
    
    cout<<"przdzial "<<a<<" - "<<b<<" zawiera "<<n<<" liczb podzielnych przez "<<c<<endl;
    for(int i=t;i<n+t;i++)  
    { 
        cout<<c*i+a-a%c<<", "; 
    }
	cin.get();
    return 0;
}