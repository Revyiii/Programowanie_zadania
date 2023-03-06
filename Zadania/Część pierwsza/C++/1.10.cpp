#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main()
{
setlocale(LC_CTYPE,"Polish");

int num1;
int num2;

cout<<"prosze podac pierwszą liczbe:";
cin >> num1;
cout<<"prosze podac drógą liczbe:";
cin >> num2;
num1 %= num2;
if(num1!=0)
{
	cout<<"liczny są niepodzielne"<< endl;
}else{
	cout<<"liczny są podzielne"<< endl;
}

cin.get();
return 0;
}