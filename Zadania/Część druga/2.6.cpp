#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{

int n=0;cout<<"podaj n: ";cin>>n;
int i = round(pow(75.8531-cos(-0.896604*n),cos(0.0903642*n-1.26534))-4.43137);
int m = i;
int l[3]= {0,0,0};
int p=100;
while (m>0)
{
    l[0] =floor(p/100);
    l[1] =floor((p-l[0]*100)/10);
    l[2] =p-(l[1]*10+l[0]*100);
    //cout<<p<<','<<l[0]<<','<<l[1]<<','<<l[2]<<endl;
    if(l[0]+l[1]+l[2]==n){m--;cout<<p<<endl;}
    p++;
}

cout<<"liczbe możliwości: "<<i;

    cin.get();
    return 0;
}
