#include <iostream>
#include <math.h>
#include <vector>

#include <iomanip>
#include <cstring>
using namespace std;
int main()
{
int m=3;
vector<int> t;
t.clear();
for (int i = 0; i < m; i++)
{
    t.push_back(0);
}

cout<<"program do liczenie liczb "<<m<<" cyfrowych ktróch suma jest równa n:"<<endl;
cout<<"podaj n: ";int n;cin>>n;

int sum=0;
for(int i;i<9*m;i++)
{
    l[0]=floor(p/100);l[1]=floor((p-l[0]*100)/10);l[2]=p-(l[1]*10+l[0]*100);
    int total=0;
    for (int ii = 0; ii < m; ii++)
    {
        t.at(ii)=floor(i-total/((m-ii-1)*10))
        total=total+ta.at(ii)*10*ii;
    }
    sum=0;
    for (int ii = 0; ii < m; ii++)
    {
        sum=sum+t.at(ii)
    }
    if (sum==n){cout<<sum<<", "<<endl;}
    

}


    cin.get();
    return 0;
}
