#include <iostream>

using namespace std;

int main() 
{
	int n =0;
	int i = 0;
	int arr[] = {6,87,345,545,3};
	
	while(n<sizeof(arr)/sizeof(arr[0]))
	{
		if(arr[n]>arr[i])
		{
			i=n;
		}
		n++;
	}	
	cout << "max number is: " << arr[i] << " and it's index is: " << i;
	cin.get();
	return 0;
}
