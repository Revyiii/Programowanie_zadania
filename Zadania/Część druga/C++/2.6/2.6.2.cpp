#include <iostream>
#include <math.h>
#include <vector>

using namespace std;
int main()
{
int m=3;
vector<int> t;
cout<<"program do liczenie liczb "<<m<<" cyfrowych ktorych suma jest rowna n:"<<endl;
while (true)
{
cout<<"podaj n: ";int n;cin>>n;
cout<<"podaj dla ilu czyfr: ";cin>>m;
t.clear();
for (int i = 0; i < m; i++)
{
    t.push_back(0);
}



int total=0;
int sum=0;
for(int i=pow(10,m-1);i<pow(10,m);i++)
{
    total=0;
    for (int ii = 0; ii < m; ii++)
    {
        t.at(ii)=(i-total)/pow(10,m-ii-1);//floor(i-total))
        total=total+t.at(ii)*pow(10,m-ii-1);//
    }
    //^dobre
    total=0;
    for (int ii = 0; ii < m; ii++)
    {
        total=total+t.at(ii);
    }
    if (total==n){cout<<i<<": "<<total<<endl;sum++;}
}
cout<<"liczb "<<m<<" czyfrowych o sumie "<<n<<" jest: "<<sum<<endl;
}

    cin.get();
    return 0;
}
