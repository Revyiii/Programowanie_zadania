#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int a;cout<<"prosze poda� pierwsz� liczbe: "; cin>>a;if (cin.fail()){cout<<"podana warto�� jest nie poprawna";exit(1);}
	int b;cout<<"prosze poda� dr�g� liczbe: ";if (cin.fail()){cout<<"Podana warto�� nie jest poprawna";exit(1);} cin>>b;if (b==0){cout<<"nie dziel przez 0";exit(1);}if (cin.fail()||b==0||a/b==0||a%b==0){cout<<"Liczby s� nie podzienlne";exit(1);}
	cout<<"Liczby s� podzielne";
}
