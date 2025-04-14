#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main(){
	cout<<endl<<"Witam w zadaniu 7.3"<<endl;
	
	int i =1;
	//string s=" Blad jest przywilejem filozofow tylko glupcy nie myla sie nigdy";
	//string s=" Btlltu el eoypm apjzlcyndreokyli zmfo agjy o n dewfwgisysii lei";
	string s=" AYRAILTZWOGMEIWO SEYRPTN";
	string szyfr;
	int l = ceil(sqrt(s.size()));
	cout<<"l:"<<l<<endl;
//	while(i<=s.size())
//	{
//		cout<<s[i]<<','; 
//		i++;
//	}
//	i=1;
//	while(i<=s.size())
//	{
//		cout<<i<<','; 
//		i++;
//	}
//	i=1;
//	while(i<=s.size())
//	{
//		cout<<(i-l*(floor((i-1)/l))-1)*l+floor((i-1)/l)+1<<',';
//		i++;
//	}
//	i=1;
	while(i<=s.size())
	{
		//cout<<i%4+floor(i/4)*4+4*(i%4==0)<<','; 
		//cout<</*i%4*4+*/floor((i-1)/l)<<',';
		//cout<<(i-4*(floor((i-1)/4))-1)*4<<',';
		//cout<<(i-1)%l*l<<',';
		//cout<<(i-l*(floor((i-1)/l))-1)*l+floor((i-1)/l)+1<<',';
		cout<<s[(i-l*(floor((i-1)/l))-1)*l+floor((i-1)/l)+1];
		//szyfr=szyfr+s[(i-l*(floor((i-1)/l))-1)*l+floor((i-1)/l)+1];
		i++;
	}
	cout<<endl<<szyfr;

	cin.get();
	return 0;
}   
