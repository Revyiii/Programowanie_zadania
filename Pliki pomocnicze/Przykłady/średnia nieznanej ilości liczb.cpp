#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	cout<<"program do liczenia śrdniej z n liczb"<<endl;
	float sum=0;	
	float e=0;
	cout<<setprecision(2);
	for(int n=1;1<2;n++)
	{
		cout<<"podaj "<<n<<" liczbe: ";
		cin>>e;
		sum=sum+e;
		cout<<"średnia na te czas("<<n<<") jest rowna: "<<sum/n<<endl;
	}
	

	cin.get();
	return 0;
}
