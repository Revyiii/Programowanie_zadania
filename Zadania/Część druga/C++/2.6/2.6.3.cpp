#include <iostream>

using namespace std;
int main()
{
int sum=0;
cout<<"program do liczenie liczb trzy cyfrowych ktorych suma jest rowna n:"<<endl;
cout<<"podaj n: ";int n;cin>>n;
for (int a = 1; a < 10; a++)
{for (int b = 0; b < 10; b++)
{for (int c = 0; c < 10; c++){
    //cout<<a*100+b*10+c<<endl;
    if(a+b+c==n){cout<<a*100+b*10+c<<", ";sum++;}
}}}
cout<<"liczb trzy czyfrowych o sumie "<<n<<" jest: "<<sum<<endl;

    cin.get();
    return 0;
}
