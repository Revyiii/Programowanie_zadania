#include <iostream>
using namespace std;

int main()
{
    bool r = true;  
    char d;
	cout<<"program liczenia silni z n"<<endl;  
    
    int i;
    int n;
    long long s;
	while(r==true)
    {
        i=1;
        n=1;
        s=1;
        cout<<"podaj n:";
        cin.clear();cin.sync();cin>>n;
        while(i<=n)
        {
            s=s*i;
            i++;
        }
        cout<<"silna z n jest równa:"<<s<<endl;

		cout<<"jeszcze raz? T/N: ";
		do{
		cin.clear();cin.sync();
		cin>>d;
		d=toupper(d);
		if(d=='N'){return 0;}
		else if(d=='T'){break;}
		else{cout<<"podana warto�� jest nie poprawna. Pon�w prub�"<<endl;}
		}while(true);
    }
    
	cin.get();
    return 0;
}