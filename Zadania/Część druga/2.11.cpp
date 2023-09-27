#include <iostream>
#include <vector>
using namespace std;

int main()
{
     
    char d;
	int i;
    int a;
    vector<int> s;
    
    cout<<"program do szukania minimalne liczby z ciągu liczb dwu cyfrowych"<<endl;  
    cout<<"aby zakończyć podawanie ciągu podaj liczbę 0"<<endl;  
    while(true)
    {
    i=0;
    s.clear();
    while(a!=0)
    {
        i++;
        cin.clear();cin.sync();
        cout<<"podaj "<<i<<":";
        a=0;cin>>a;
        if(a==0){break;}
        else if(cin.fail()||abs(a)<10||abs(a)>99){cout<<"podana wartość jest nie poprawna"<<endl;i--;}
        else{s.push_back(a);}
    }
    cout<<"minimalną liczbą z ciągu:"<<endl;
    for (int ii = 0; ii < s.size(); ii++)
    {
        cout<<s.at(ii)<<", ";
        if(s.at(ii)<a){a=s.at(ii);}
    }
    cout<<endl<<"jest: "<<a<<endl;
    
    cout<<"jeszcze raz? T/N: ";do{cin.clear();cin.sync();cin>>d;d=toupper(d);if(d=='N'){return 0;}else if(d=='T'){break;}else{cout<<"podana warto�� jest nie poprawna. Pon�w prub�"<<endl;}}while(true);}
	cin.get();
    return 0;
}
