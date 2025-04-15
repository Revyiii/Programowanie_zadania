#include <iostream>
#include <fstream>
#include <iomanip>
#include <Windows.h>
#include <math.h>
using namespace std;


double wartosc(string s,int p)//base-p to deciaml
{
	int l = s.size();
	int i = 0;
	double num=0;
	
	while(i<l)
	{
		num+=(s[l-i-1]-'0')*pow(p,i);
		i++;
	}
	return num;
}


int main()
{
int jeden=0;
int dwa=0;
int dwadwa=0;
int trzy=0;

fstream plik;
plik.open("liczby.txt");

ofstream odp("wynik4.txt");

string num;
int l;
int i;
int temp;
int a;
int n;
double b;
float min=9000000;int minpos=0;double max=0;int maxpos=0;int index=0;
while(!plik.eof())
{	
	plik>>num;
	
	b=wartosc(num,2);
	if(min>b){min=b;minpos=index+1;}
	if(max<b){max=b;maxpos=index+1;}
	
	
	temp=0;
	a=0;
	l=num.size();
	i=0;
	while(i<l)
		{
		temp+=num[i]-'0';
		i++;	
		}
	n=(num[l-1]-'0'+2*num[l-2]-'0')%2;
	//cout<<n<<endl;
	jeden+=(temp<l-temp);
	dwa+=(!n);
	n=(num[l-1]-'0'+2*num[l-2]-'0'+3*num[l-3]-'0')%8;
	dwadwa+=(!n);
	//cout<<a<<endl;
	index++;
}
//cout<<jeden<<endl<<dwa<<endl<<dwadwa<<endl;
//cout<<min<<endl<<minpos<<endl<<max<<endl<<maxpos<<endl;
odp<<"1-"<<jeden<<endl<<"2.1-"<<dwa<<endl<<"2.2-"<<dwadwa<<endl<<"3.1-"<<minpos<<endl<<"3.2-"<<maxpos;

}
