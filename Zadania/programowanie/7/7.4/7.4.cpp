#include <iostream>
#include <windows.h>
#include <fstream>
#include <math.h>
#include <vector>
#include <algorithm>
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

void print(vector<string> a)
{
	cout<<endl;
	int l = a.size();
	int i=0;
	while (i<l)
	{
		cout<<a[i];
		i++;
	}
	cout<<endl;
}

int main(){
	cout<<endl<<"Witam w zadaniu 7.4"<<endl;
	
	fstream plik;
	plik.open("NAPIS.TXT");
	ofstream odp("ZADANIE5.txt");
	char a;
	char b;
	int sum=0;
	int pierwszy = 0;
	bool rise=1;
	string ros="";
	int temp;
	string word;
	vector<string> all;
	//vector<string> ans;
	
	while(!plik.eof())
	{
		a=plik.get();
		word =word+a;
		sum = sum +a;
		if(a<=b && a!=10){rise=0;}
		//cout<<"a:"<<a<<" ascii:"<<int(a)<<" sum:"<<sum<<" rise:"<<rise<<endl;
		if(a==10){if(rise){ros+=word;}pierwszy+=pierwsza(sum-10);sum=0;rise=1;all.push_back(word);word="";}
		//if(a==10){ros=ros+rise;pierwszy=pierwszy+pierwsza(sum-10);sum=0;rise=1;word="";}
		b=a;	
	}
	//cout<<endl<<word<<endl<<endl;
	
	cout<<pierwszy<<endl;
	cout<<ros<<endl;
	odp<<pierwszy<<endl;
	odp<<ros<<endl;
	
	int l=all.size();
	int i=0;

	string c;
	string d;
	while(i<l-1)
	{	
		c=all[i];
		d=all[i+1];
		//cout<<all[i];
		if(c.compare(d)>0){iter_swap(all.begin()+i,all.begin()+i+1);i=-1;}
		i++;	
	}
	i=1;
	//print(all);
	while(i<l-1)
	{	
		c=all[i];
		d=all[i+1];
		if(c.compare(d)==0){odp<<c;cout<<c;while(c.compare(d)==0){c=all[i];d=all[i+1];i++;}}
		i++;	
	}
	
	//cin.get();
	return 0;
}   
