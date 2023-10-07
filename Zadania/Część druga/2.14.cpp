#include <iostream>

using namespace std;

int main()
{
    cout<<endl<<"program do liczenie n liczby fibonacciego"<<endl;
    bool r = true;
    char d;    
    while(r==true)
    {
    cout<<"\npodaj n:";
    int n = 0;
    cin>>n;
    if(cin.fail()){r=false;cout<<endl<<"podana wartość jest nie poprawna"<<endl;}
    int i = 0;
    double a=0;
    double b=1;
    double c=0;
    while (n>i)
    {
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    cout<<n<<" liczba ciagu fibonacciego jest rowna:"<<a<<endl;
    cout<<"jeszcze raz? T/N: ";
    do{
		cin.clear();cin.sync();
		cin>>d;
		d=toupper(d);
		if(d=='N'){return 0;}
		else if(d=='T'){break;}
		else{cout<<"podana warto�� jest nie poprawna. Pon�w prub�"<<endl;}
		}while(true);
    }
	cin.get();
    return 0;
}   