#include <iostream>
#include <locale.h>
#include <iomanip>
#include <windows.h>
#include <Lmcons.h>

using namespace std;

int main()
{
setlocale(LC_CTYPE,"Polish");

char username[UNLEN+1];
DWORD username_len = UNLEN+1;
GetUserName(username, &username_len);

float a;
float b;
float c;
/*string name;
cout<<"Podaj imiê u¿ytkownika:";
cin >> name;
*/
cout<<"Prosze podać pierwszą liczbę:";
cin >> a;
cout<<"Prosze podać drugą liczbę:";
cin >> b;
cout<<"Prosze podać trzecią liczbę:";
cin >> c;

float ave = (a+b+c)/3;	

cout<<"średnia jest równa ="<<ave<<endl;
cout<<"Imie użytkownika to: "<<username<<endl;
//cout<<":albo:"<<name<<endl; 
cin.get();
return 0;
}