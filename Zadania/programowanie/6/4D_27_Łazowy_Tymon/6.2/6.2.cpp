#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

int main(){
	cout<<endl<<"Witam w zadaniu 6.2"<<endl;
	
	fstream plik;
	plik.open("6.2.txt");
	char a;
	int one;
	int two;
	int tree;
	char b;
	if(!plik.eof()){two++;}
	while(!plik.eof())
	{
		
		a=plik.get();
		if(a==' '){one++;/*cout<<b<<" :: "<<a<<" :: "<<int(a)<<" slowa:"<<one<<" line:"<<two<<" aA:"<<tree<<endl;*/}
		if(a==10){two++;if(b!=10&&b!=' '){one++;}/*cout<<a<<" :: "<<int(a)<<" slowa:"<<one<<" line:"<<two<<" aA:"<<tree<<endl;*/}
		if(a=='a' || a=='A'){tree++;}
		if(plik.eof()){if(b==' '){one--;}else{one++;}}

		b=a;

		
	}
	cout<<"slowa:"<<one<<" line:"<<two<<" aA:"<<tree<<endl;
	cin.get();
	return 0;
}   
