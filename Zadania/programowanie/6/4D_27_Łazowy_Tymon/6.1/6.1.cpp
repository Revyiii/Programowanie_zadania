#include <iostream>
#include <windows.h>
#include <fstream>
#include <vector>
#include <math.h>
using namespace std;

void pierwsza(int n, vector<int> &prime)
{
    //cout<<endl<<"test:"<<n<<endl;
	int i=3;        
    if (n%2==0 && n!=2){return;}

    while(i<sqrt(n))
    {
        if(n%i==0){return;}
        i=i+2;
    }
    i=0;
    int l=prime.size();
    //cout<<l<<endl;
	while(i<l)
	{
		//cout<<"i:"<<i<<"l:"<<l<<endl;
		if(n<prime[i]){prime.insert(prime.begin()+i,n);return;}
		i++;
	}  
	      
	prime.push_back(n);
	
	return;
}
bool suma(int n)
{
    int s=0;
    while(true)
    {   
        if(n==0){break;}
        s=s+n%10;
        n=n/10;   
    }
    return s%2;      
}


int main(){
	cout<<endl<<"Witam w zadaniu 6.1"<<endl;
	
	fstream plik;
	ofstream jeden("wyniki1.txt");
    ofstream dwa("wyniki2.txt");
	plik.open("dane.txt");
	vector<int> prime;
	int a;
	
	int i;
	i=1;
	
	int posmax=0;
	int posmin=0;
	plik>>a;
	int max=a;
	int min=a;
	float avg=a;
	
	while(!plik.eof())
	{
		plik>>a;
		avg=avg+a;
		if(a>max){max=a;posmax=i;}
		if(a<min){min=a;posmin=i;}
		pierwsza(a,prime);
		//cout<<a<<endl;
		i++;
	}
	avg=avg/i/1.0;
	i=0;
	
	int l=prime.size();
	while(i<l)
	{
		jeden<<prime[i]<<endl;
		dwa<<prime[i];
		if(suma(prime[i])==0){dwa<<" BINGO";}
		dwa<<endl;
		i++;
	}
	
	cout<<"min:"<<min<<" minpos:"<<posmin<<endl;
	cout<<"max:"<<max<<" maxpos:"<<posmax<<endl;
	cout<<"avg:"<<avg<<endl;

	cin.get();
	return 0;
}   
