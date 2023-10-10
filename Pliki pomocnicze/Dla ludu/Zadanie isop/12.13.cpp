#include <iostream>
#include <ctime>

using namespace std;

int main() 
{
srand(time(NULL));	
	
	int arr[100] = {};
	for (int ii = 0; ii < sizeof(arr)/sizeof(arr[0]); ii++)
	{
		arr[ii]={(rand()/ double(RAND_MAX))*100};
		cout<<arr[ii]<<", ";
	}
	cout<<endl;
	
	int max=arr[0]; 
	int min=arr[0];
	int i = 0;
	while(i<sizeof(arr)/sizeof(arr[0]))
	{
		if(arr[i]>arr[max]){max=i;}
		if(arr[i]<arr[min]){min=i;}
		i++;
	}	
	cout << "max number is: " << arr[max] << " and it's index is: " << max<<endl;
	cout << "min number is: " << arr[min] << " and it's index is: " << min<<endl	;
	cin.get();
	return 0;
}
