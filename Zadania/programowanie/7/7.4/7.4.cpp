#include <iostream>
#include <windows.h>
#include <fstream>
#include <math.h>
using namespace std;

bool pierwsza(int n)
{
	int i=3;
	if (n%2==0 && n!=2){return 0;}
    while(i<sqrt(n))
    {
        if(n%i==0){return 0;}
        i=i+2;
    }
	
	return 1;
}



int main(){
	cout<<endl<<"Witam w zadaniu 7.4"<<endl;
	
	fstream plik;
	plik.open("NAPISS.TXT");
	ofstream odp("ZADANIE5.txt");
	char a;
	char b;
	int sum=0;
	int pierwszy = 0;
	bool rise=1;
	string word;
	

	while(!plik.eof())
	{
		
		a=plik.get();
		word =word+a;
		sum = sum +a;
		if(a<b && a!=10){rise=0;}
		cout<<"a:"<<a<<" ascii:"<<int(a)<<" sum:"<<sum<<" rise:"<<rise<<endl;
		if(a==10){if(rise){		}pierwszy=pierwszy+pierwsza(sum-10);sum=0;rise=1;word=0;}
		b=a;	
	}
	cout<< pierwsza<<endl;
	cin.get();
	return 0;
}   
