#include <iostream>
#include <fstream>
#include <iomanip>
#include <Windows.h>
#include <math.h>
using namespace std;

//int* asciitonum (string ascii)
//{
//    int lenght = ascii.length();
//	char* text_arr = new char[ascii.length()];
//    strcpy(text_arr, ascii.c_str());
//    int n=0;
//    static int numarr[100];
//	while(n<=ascii.length())
//    {
//        int tn = text_arr[n];
//        if(tn>=65 && tn<81){tn=tn-65;}
//        else if (tn>81 && tn<=90){tn=tn-66;}
//        else if (tn>=97 && tn<113){tn=tn-97;}
//        else if (tn>113 && tn<=122){tn=tn-98;}
//        else{tn=25;}
//        numarr[n] = {tn};
//        n++;
//    }
//
//	delete[] text_arr;
//    return numarr;
//}


int wartosc(string s,int p)
{
	int l= s.length();
	int i=0;
	int tn;
	int n;
	int num=0;
	while(i<l)
    {
    	
        tn = s.at(l-i-1);
        tn=tn-48;
        cout<<tn<<":";
        if(p>10&&i+1<l)
        {
        	i++;
        	tn=tn+(s.at(l-i-1)-48)*10;
		}
		cout<<tn<<":";
        n=pow(p,i/1+(p>10)-((i-1)%2));
		cout<<n<<",";
		num=num+tn*pow(p,i/1+(p>10&&!i%2));
        i++;
    }
	return num;
}


int main()
{
	int p=16;
	string s="123";
	int num=wartosc(s,p);
	cout<<endl<<num;
	
	
}
