#include <iostream>
#include <iomanip>
#include <locale.h>
#include <conio.h>
using namespace std;
#define a 7
#define b 12
#define c 16
#define ndk "nacisnij dowolny klawisz"

int main() 
{
setlocale(LC_CTYPE,"Polish");
double sr = (a+b+c)/3.0;
cout << fixed <<setprecision(2)<<\
"Srednia: " << sr << endl

getch();
return 0;

}
