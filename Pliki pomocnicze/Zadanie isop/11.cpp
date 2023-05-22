#include <iostream>

using namespace std;

int main() 
{
	int i =0;
	int n = 6;
	int sum = 0;
	int arr[] = {6,5,6,7,8,1,9,4};
	
	while(i<sizeof(arr)/sizeof(arr[0]))
	{
		if(arr[i]==n){sum++;}
		i++;
	}	
	cout <<n<<" wystepuje "<<sum<<" razy"<<endl;

	cin.get();
	return 0;
}
