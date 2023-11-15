#include <iostream>
#include <math.h>

using namespace std;

void RL(float a,float b)
{	
 if(a==0){
 if(b==0){cout<<"R�wnanie to�samo��owe"<<endl;}
 else{cout<<"r�wnanie sprzeczne"<< endl;}}
 else{
 if(b==0){cout<<"x jest r�wny:0"<<endl; }
 else{a=b/a;cout<<"x jest r�wny: "<<a<<endl;}}
}
void RK(float a, float b, float c)
{
float delta=b*b-(4.0*a*c);	

if(delta==0)
{
a=((-b)/(2*a));
cout<<"x jest r�wny: "<< a <<endl;
}else{
if(delta>0)
{cout<<"x1 jest r�wny: "<< ((-b-sqrt(delta))/(2*a))<<endl;
cout<<"x2 jest r�wny: "<<((-b+sqrt(delta))/(2*a))<<endl;
}else
{cout<<"brak rozwi�z�"<<endl;}}
}

int main()
{
    cout<<endl<<"program do liczenie równania"<<endl;
    char d;    
    int i; 
    char l;
    int x[10];
    while(true)
    {
    l='a';
    i=0;
    while(i<sizeof(x)/sizeof(x[1]))
    {
    cout<<"podaj "<<l<<":";
    cin.clear();cin.sync();cin>>x[i];
    if(cin.fail())
    {i--;l--;cout<<"podana wartość jest nie poprawna"<<endl;}
    i++;l++;
    }
    cout<<"a:"<<x[0]<<" b:"<<x[1]<<" c:"<<x[2]<<" d:"<<x[3]<<endl;
	x[2]=x[2]-x[3];
	if(x[0]==0){RL(x[1],x[2]);}
	else{RK(x[0],x[1],x[2]);}


    cout<<"jeszcze raz? T/N: ";
    do{cin.clear();cin.sync();cin>>d;d=toupper(d);
		if(d=='N'){return 0;}
		else if(d=='T'){break;}
		else{cout<<"podana wartartość jest nie poprawna. Ponów prubu"<<endl;}
		}while(true);
    }
	cin.get();
    return 0;
}   
