#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
    bool r = true;  
    char d;
	cout<<"program do sprawdzania czy liczba jest pierwsza"<<endl;  
    

    long long int n;
    int s;

	while(r==true)
    {

        n=1;
        s=0;
        cout<<"podaj n:";
        cin.clear();cin.sync();cin>>n;
        while(true)
        {   
            cout<<"test"<<n<<endl;
            if(n==0){break;}
            s=s+n%10;
            n=n/10;   
        }
       
        cout<<"suma wszystki cyfro to:"<<s<<endl;

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