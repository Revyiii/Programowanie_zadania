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
	int l=0;
	int w=1;
	int i=s.length()-1;
	
	int c=0;
	while(i>l)
    {
    	c=s.at(i)-'0';
    	l=l+w*c;
    	w=w*p;
        i--;
    }
	return l;
}


int main()
{
	int p=8;
	string s="223";
	int num=wartosc(s,p);
	cout<<endl<<num;
	
	
}
