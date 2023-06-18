#include <iostream>
#include <conio.h>
#include <vector>


using namespace std;


int main() 
{
	string s = "MCLXIIV";
    vector<int> num;
    int i = 0;
    int l =s.length();
    int n = 0;
    while(i<l)
    {
        if(s.at(i)=='I'){num.push_back(1);}
        else if(s.at(i)=='V'){num.push_back(5);}
        else if(s.at(i)=='X'){num.push_back(10);}
        else if(s.at(i)=='L'){num.push_back(50);}
        else if(s.at(i)=='C'){num.push_back(100);}
        else if(s.at(i)=='D'){num.push_back(500);}
        else if(s.at(i)=='M'){num.push_back(1000);}
        
        //cout<<i<<"."<<num.at(i)<<endl;
        i++;
    }
    i=0;
    int h=1;
    while(i<l-1)
    {
       n=n+(num.at(l-i-1)*h);
       if(num.at(l-i-1)<num.at(l-2-i)){h=1;}
       else if(num.at(l-i-1)>num.at(l-2-i)){h=-1;}
        
       //cout<<l-i-1<<". h:"<<h<<" n:"<<n<<" : "<<num.at(l-i-1)<<" : "<<num.at(l-2-i)<<endl;
       i++;
    }
    n=n+num.at(0)*h;
    //cout<<n<<endl;
    return n;
}
