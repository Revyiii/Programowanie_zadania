#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	cout<<endl<<"Witam w zadaniu 7.2"<<endl;
	
	int i =0;
	string w="";

	string s="matura";
	while(i<=s.size())
	{
		w=w+s[i+1];
		w=w+s[i];
		cout<<w<<endl;
		i=i+2;
	}

	cin.get();
	return 0;
}   
