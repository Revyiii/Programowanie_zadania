#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

int main()
{
setlocale(LC_CTYPE,"Polish");
float a;
float b;
float c;

cout<<"Prosze podac bok a:"; cin >> a;
cout <<"Prosze podac bok b:"; cin >> b;
cout <<"Prosze podac bok c:"; cin >> c;

cout<<fixed<<setprecision(2)<<\
"Objetosc jest równa="<<a*b*c<<endl<<\
"pole jest równe="<<2*(a*b+a*c+b*c)<<endl<<\
"Suma dlugosci krawedzi to="<<4*(a+b+c);

cin.get();
return 0;
}
