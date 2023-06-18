#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	cout<<"program do liczenia śrdniej z n liczb"<<endl;
	cout<<"podaj n: ";int n=0;cin>>n;
	float sum=0;	
	float e=0;
	//

	for(int i=1;i<=n;i++)
	{
		cout<<"podaj "<<i<<" liczbe: ";
		cin>>e;
		sum=sum+e;
	}
	cout<<setprecision(2)<<"średnia "<<n<<" liczb jest rowna: "<<sum/n<<endl;

	cin.get();
	return 0;
}
