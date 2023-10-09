#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
cout<<"program do liczenina Å›redniaj z n liczb dwucyfrowych, dodatnich"<<endl;
char d;
do{
	float sum=0;
	float e=0;


	cout<<"podaj n: ";int n=0;cin>>n;
    for(int i=1;i<=n;i++)
	{
		cin.clear();cin.sync();
		cout<<"podaj "<<i<<" liczbe: ";
		cin>>e;
        if (cin.fail()||e<10||e>=100){cout<<"podana wartosc jest nie poprawna sprubuj ponownie"<<endl;i--;e=0;}
        
		sum=sum+e;
	}
	cout<<setprecision(2)<<"srednia "<<n<<" dwucyfrowych liczb jest rowna: "<<sum/n<<endl;
	
	
	cout<<"jeszcze raz? T/N: ";
	do{
	cin.clear();cin.sync();
	cin>>d;
	d=toupper(d);
	if(d=='T'||d=='N'){break;}
	else{cout<<"podana wartoœæ jest nie poprawna. Ponów prubê"<<endl;}
	}while(true);
}while(d!='N');
    
    cin.get();
    return 0;
}
