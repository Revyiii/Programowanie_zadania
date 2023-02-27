#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main()
{
setlocale(LC_CTYPE,"Polish");
char b=97;
int boki=3;
float bok;
float pole=1.0;
for(int i=0;i<boki;i++)
{
cout<<"prosze podac boku " << b <<":";
cin >> bok;
if (bok<0 ){i--;b--;cout<<"podana wartosc jest niepoprawna"<<endl;}
else{pole=pole*bok;}
b++;
}
cout <<"pole prostokat to: "<<pole<<endl;
cin.get();
return 0;
}