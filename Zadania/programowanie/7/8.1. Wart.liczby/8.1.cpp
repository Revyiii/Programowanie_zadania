#include <iostream>
#include <fstream>
#include <iomanip>
#include <Windows.h>
#include <math.h>
using namespace std;

int wartosc(string s,int p)//base-p to deciaml
{
	int l = s.size();
	int i = 0;
	int num=0;
	
	while(i<l)
	{
		num+=(s[l-i-1]-'0'-((s[l-i-1]>'A'-1)*('A'-'0'-10)))*pow(p,i);
		i++;
	}
	return num;
}

int main()
{
	int p=16;
	string s="1AB34";
	int num=wartosc(s,p);
	cout<<endl<<num;
	
	
}
