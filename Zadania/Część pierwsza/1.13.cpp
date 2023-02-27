#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

int main() 
{
	setlocale(LC_CTYPE,"Polish");
	int n = 3; //liczba liczb
	int t;
	int arr[n];
	int i=0;

	while(i<n)
	{
		cout << "prosze podać "<< i+1
		 <<" liczbe:";
		cin >> t;
		arr[i]={t};
		i++;
	}
	n = 0;
	i = 0;
	while(n<sizeof(arr)/sizeof(arr[0]))
	{
		if(arr[n]>arr[i])
		{
			i=n;
		}
		n++;
	}	
	cout << "max number is: " << arr[i];
	cin.get();
	return 0;
}
