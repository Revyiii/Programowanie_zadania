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
	if(!plik.eof()){one++;}
	while(!plik.eof())
	{
		
		a=plik.get();
		if(a==' '){one++;}
		if(a==10){two++;}
		if(a=='a'or a=='A'){tree++;}
		cout<<int(a)<<endl;
	}
	cout<<"slowa:"<<one<<" line:"<<two<<" aA:"<<tree<<endl;
	cin.get();
	return 0;
}   
