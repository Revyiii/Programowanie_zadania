#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
	
	fstream plik;
	plik.open("slowa.txt");
	ofstream odp("wyniki6.txt");
	string temp;
	
	int i=0;
	int l;
	int ll;
	int jeden=0;
	int dwa =0;
	int trzy=0;
	string word;
	string t;
	
	
	while(!plik.eof())
	{
		//cout<<word<<endl;
		plik>>word;
		temp=word;
		l=word.size();
		if(word[l-1]=='A'){jeden++;}
		plik>>word;
		ll=word.size();
		if(word[l-1]=='A'){jeden++;}
		//cout<<word<<", "<<temp<<", "<<word.find(temp,0)<<endl;
		if(word.find(temp,0)<100){dwa++;}
		t=word+", "+temp;
		if(word.size()==temp.size()){
			cout<<word<<",,"<<temp<<endl;
			i=0;
			while(i<word.size()-1)
			{
				if(word.at(i)>word.at(i+1)){swap(word[i],word[i+1]);i=-1;}
				i++;
				}
			i=0;
			while(i<temp.size()-1)
			{
				if(temp.at(i)>temp.at(i+1)){swap(temp[i],temp[i+1]);i=-1;}
				i++;
				}
				
				cout<<word<<", "<<temp<<endl<<endl;
				//if(word==temp){cout<<t<<endl;}
			trzy+=(word==temp);
			}
		
	}
	odp<<"6.1 "<<jeden-1<<endl<<"6.2 "<<dwa-1<<endl<<"6.3 "<<trzy-1;		
	cout<<jeden-1<<endl;
	cout<<dwa-1<<endl;
	cout<<trzy-1;
}

	
	

