#include <iostream>
#include <conio.h>
#include <locale.h>
#include <iomanip>
using namespace std;

int main()
{
setlocale(LC_CTYPE,"Polish");
float r;
float h;
const float pi=3.14;

cout<<"Prosze podać promień:"; cin >> r;
cout <<"Prosze podac wysokosc:"; cin >> h;
cout<<fixed<<setprecision(2)<<\
"Objetosc jest równa="<<pi*r*r*h<<endl<<\
"pole jest równe="<<2*pi*r*(r+h)<<endl<<\
"Suma dlugosci krawedzi to="<<4*pi*r;

cin.get();
return 0;
}