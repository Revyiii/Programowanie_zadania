#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
{
setlocale(LC_CTYPE,"Polish");

float r;
float h;
const float pi=3.14;

cout<<"Prosze podaæ promieñ:";
cin >> r;
cout <<"Prosze podac wysokosc:"; 
cin >> h;

float p = 2*pi*r*(r+h);
float obj = pi*r*r*h;
float kraw = 4*pi*r; 	

cout<<fixed<<setprecision(2)<<\
"Objetosc jest równa="<<obj<<endl<<\
"pole jest równe="<<p<<endl<<\
"Suma dlugosci krawedzi to="<<kraw;

cin.get();
}