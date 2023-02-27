#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
setlocale(LC_CTYPE,"Polish");
float a;
float b;
float c;
cout<<"prosze podać a:"; cin>>a;
cout<<"prosze podać b:"; cin>>b;
cout<<"prosze podać c:"; cin>>c;
if(a==0){
	if(b==c){cout<<"Równanie tożsamośćowe"<<endl;}
	else{cout<<"równanie sprzeczne"<< endl;}}
else{a=(c-b)/a;cout<<"x jest równy: "<< a<<endl;}

cin.get();
return 0;
}
