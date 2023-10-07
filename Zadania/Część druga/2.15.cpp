#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
    bool r = true;  
    char d;
	cout<<"program do sprawdzania czy liczba jest pierwsza"<<endl;  
    
    int i;
    int n;
    string odp;

	while(r==true)
    {
        odp="tak";
        i=3;
        n=1;
        cout<<"podaj n:";
        cin.clear();cin.sync();cin>>n;
         if (n%2==0 && n!=2){odp="nie";}

        while(i<sqrt(n))
        {
            if(n%i==0){odp="nie";break;}
            i=i+2;
        }
       
        cout<<odp<<endl;

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