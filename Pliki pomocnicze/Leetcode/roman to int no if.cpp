#include <iostream>
#include <conio.h>
#include <vector>
#include <math.h>


using namespace std;


int main() 
{

    string s = "MCDLXIX";
    vector<int> num;
    int i = 0;
    int l =s.length();
    int n = 0;
    int x = 0;
    while(i<l)
    {
        x = s.at(i)-66;
        num.push_back(round(((-0.3292146755335603-tan(x))/(0.03006498260619061*(0.8305402759917373*x-1.535194350851724)))-(tan(0.4735246271521087*ceil(0.9539214194301261*x))-10.98039288741995)));

        i++;
    }
    i=0;
    int h=1;
    while(i<l-1)
    {
        n=n+(num.at(l-i-1)*h);
        h=(num.at(l-i-1)-num.at(l-2-i))/abs(num.at(l-i-1)-num.at(l-2-i))*(-1);
        // if(num.at(l-i-1)<num.at(l-2-i)){h=1;}
        // else if(num.at(l-i-1)>num.at(l-2-i)){h=-1;}
        
       cout<<l-i-1<<". h:"<<h<<" n:"<<n<<" : "<<num.at(l-i-1)<<" : "<<num.at(l-2-i)<<endl;
       i++;
    }
    n=n+num.at(0)*h;
    cout<<n<<endl;
    return n;
}
