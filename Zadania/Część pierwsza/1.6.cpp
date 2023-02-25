#include <iostream>
#include <iomanip>
#include <locale.h>

#using namespace std

int main()
{
setlocale(LC_CTYPE,"Polish");
float a;
float b;
float c;

cout<<"Prosze podać bok a:";
cin >> a;
cout <<"Prosze podać bok b:"; 
cin >> b;
cout <<"Prosze podać bok c:";
cin >> c;
cout>>fixed<<setprecision(2)<<\
"Objętość jest równa="<<a*b*c<<endl<<\
"pole jest równe="<<2*(a*b+a*c+c*d)<<endl<<\
"Suma długości krawędzi to="<<(a+b+c)*4;

cin.get();
}
