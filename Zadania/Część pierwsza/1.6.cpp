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

cout<<"Prosze podac bok a:";
cin >> a;
cout <<"Prosze podac bok b:"; 
cin >> b;
cout <<"Prosze podac bok c:";
cin >> c;

float p = a*b*c;
float obj = 2*(a*b+a*c+b*c);
float kraw = 4*(a+b+c); 	

cout<<fixed<<setprecision(2)<<\
"Objetosc jest równa="<<obj<<endl<<\
"pole jest równe="<<p<<endl<<\
"Suma dlugosci krawedzi to="<<kraw;

cin.get();
return 0;
}
