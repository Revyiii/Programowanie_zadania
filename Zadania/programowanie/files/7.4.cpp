#include <iostream>
#include <windows.h>
#include <fstream>
#include <math.h>
#include <vector>
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
		if(a<b && a!=10){rise=0;}
		//cout<<"a:"<<a<<" ascii:"<<int(a)<<" sum:"<<sum<<" rise:"<<rise<<endl;
		if(a==10){if(rise){ros+=word;}pierwszy+=pierwsza(sum-10);sum=0;rise=1;all.push_back(word);word="";}
		//if(a==10){ros=ros+rise;pierwszy=pierwszy+pierwsza(sum-10);sum=0;rise=1;word="";}
		b=a;	
	}
	cout<<pierwszy<<endl;
	cout<<ros<<endl;
	int l=all.size();
	int i=0;
	int ii=0;
	int iii=0;
	
	while(i<l)
	{
		ii=0;
		while(i+ii<l)
		{
			ii++;
			if(all[i]==all[i+ii])
			{
				odp<<all[i];
			}
			
		}
		
		i++;	
	}
	cin.get();
	return 0;
}   
