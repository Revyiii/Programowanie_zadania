#include <iostream>
#include <conio.h>
using namespace std;

int arr[] = {6,87,345,545,3};
int k;

void display_arr(int arrtemp[],int sizetemp)
{
	int nn = 0;
	while(nn<sizetemp)
	{
		cout<< arrtemp[nn] << ", ";
		nn++;
	}
	cout << endl;
}

void cyc(int arrtemp[],int sizetemp)
{
	
	int arrcyc[sizetemp];
	int n = 0;
	int p = 0;
	while (n<sizetemp)
	{
		p=n+k;
		while(p>=sizetemp)
		{
		p=p-sizetemp;
		}
		arrcyc[p]={arrtemp[n]};
		//cout<< arrtemp[p] <<", " << p <<endl;
		n++;
	}
	display_arr(arrcyc,sizetemp);	
	
}


int main() 
{
	
	int n =0;
	int size = sizeof(arr)/sizeof(arr[0]);
	display_arr(arr,size);
	cout<< "please set k:";
	cin >> k;
	cyc(arr,size);
	getch();
	return 0;
}
