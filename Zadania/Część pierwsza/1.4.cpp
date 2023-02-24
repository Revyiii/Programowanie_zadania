#include <iostream>
#include <iomanip>
using namespace std;
#define a 7.225

int main() 
{

double P = a*a*6;
double obj = a*a*a;
double dk = a*12;



cout << fixed <<setprecision(2)<<"dlugosc boku:" << a << endl;
cout << "Pole: " << P << endl;
cout <<"objetosc: " << obj << endl;
cout <<"dlugosc krawedzi: " << dk << endl;		

cin.get();
return 0;
}
