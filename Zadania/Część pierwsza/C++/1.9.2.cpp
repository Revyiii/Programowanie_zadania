#include <iostream>
#include <stdlib.h>
using namespace std;

float bok()
{
	float input = 0;
	cout<<"prosze podaæ bok:";
	cin>>input;
	if (input<=0 || cin.fail()){cout<<"podana wartoœæ jest nie poprawna";exit(1);}
	else {return input;}
}

int main()
{
	float a;
	float b;
	a=bok();
	b=bok();
	cout<<"pole jest równe: "<<a*b;
}
