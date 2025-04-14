#include <iostream>
#include <fstream>
using namespace std;

string szyfr(string word,string key)
{
	int l;
	int ll;
	int i;
	
	l=word.size();
	ll=key.size();
	i=0;
	while(i<l)
	{
		word[i]=(word[i]+key[i%ll]-128)%26+64;
		i++;
	}	
	return word;
}
string deszyfr(string word,string key)
{
	int l;
	int ll;
	int i;
	
	l=word.size();
	ll=key.size();
	i=0;
	while(i<l)
	{
		word[i]=(word[i]-key[i%ll])+(word[i]-key[i%ll]<=0)*26+64;
		i++;
	}
	//cout<<word<<endl;	
	return word;
}



int main()
{
	string word ="MARTA";
	string key = "TOR";
	fstream plik;
	fstream plik2;
	plik.open("tj.txt");
	plik2.open("klucze1.txt");
	ofstream odp("wynik4a.txt");	
	while(!plik.eof())
	{
		plik>>word;
		plik2>>key;
		odp<<szyfr(word,key)<<endl;	
	}
	fstream plik3;
	fstream plik4;
	plik3.open("sz.txt");
	plik4.open("klucze2.txt");
	ofstream odpp("wynik4b.txt");
	
	while(!plik3.eof())
	{
		plik3>>word;
		plik4>>key;
		odpp<<deszyfr(word,key)<<endl;	
	}
	
	
}

