#include <iostream>
#include <windows.h>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
	cout<<endl<<"Witam w zadaniu 7.1"<<endl;
	
	fstream plik;
	plik.open("liczby.txt");
	ofstream jeden("zad_5.txt");
	string odp;
	int i;
	int n;
	float a;
	while(!plik.eof())
	{
		odp="tak";
        i=3;
        n=1;
        plik>>a;
        a=sqrt(a);
        n=a;
        if(n!=a){odp="nie";}
        if (n%2==0 && n!=2){odp="nie";}
        while(i<sqrt(n))
        {
            if(n%i==0){odp="nie";break;}
            i=i+2;
        }
		if(odp=="tak"){n=n*n;jeden<<n<<endl;}	
	}
	cin.get();
	return 0;
}   
