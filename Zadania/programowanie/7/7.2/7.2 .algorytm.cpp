#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	cout<<endl<<"Witam w zadaniu 7.2"<<endl;
	
	int i =1;
	string w="";
	int k=2;
	int j;
	string s=" arka";
	while(i<=k){
	j=i;
	while(j<=s.size())
	{
		w=w+s[j];
		j=j+k;
		cout<<w<<endl;	
	}
	i++;
	
	}
	cin.get();
	return 0;
}   
