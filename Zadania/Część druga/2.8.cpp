#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
cout<<"program do liczenina średniaj z n liczb dwucyfrowych, dodatnich"<<endl;
do{
float sum=0;
float e=0;

cout<<"podaj n: ";int n=0;cin>>n;
    for(int i=1;i<=n;i++)
	{
		cout<<"podaj "<<i<<" liczbe: ";
		cin>>e;
        if (cin.fail()||e<10||e>=100){cout<<"podana wartosc jest nie poprawna sprubuj ponownie"<<endl;i--;e=0;}
        
		sum=sum+e;
	}
	cout<<setprecision(2)<<"srednia "<<n<<" dwucyfrowych liczb jest rowna: "<<sum/n<<endl;

}while (true);

    
    cin.get();
    return 0;
}
