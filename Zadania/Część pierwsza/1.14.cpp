#include <iostream>
#include <locale.h>
#include <cmath>

using namespace std;
void print_arr(int temp_arr[],int l)
{
    int n=0;
    while (n<l)
	{
	    //<sizeof(temp_arr)/sizeof(temp_arr[0])
		cout << temp_arr[n] << ",";
		n++;
	}
	cout<<endl;
}


int main() 
{
	setlocale(LC_CTYPE,"Polish");
	int min = 0;
	int max = 10;
	int n = 3;
	float arr = [n];
	for(i=0;i<3;i++)
	{
		arr[i-1]={celi(a+rand()%(min-max+1)*10)/10};
	}
	print_arr(arr,sizeof(arr)/sizeof(arr[0]);
	
	cin.get();
	return 0;
}
