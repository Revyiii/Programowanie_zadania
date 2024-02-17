#include <iostream>
#include <conio.h>
using namespace std;
int input(string g,int max){
	bool k = false;
	int x = 0;
	do{
		int y = -1;
		cout<<g;cin>>x;
		if(cin.fail()){cout<<"wartosc nieprawidlowa\n";}
		else{
			if(x<=0 or x>max){cout<<"liczba poza zakresem";}
			else{x=y;k = true;}
		}
		cin.clear();cin.sync();
	}while(k==false);
	return x;
}
int main(){
	int x = input("podaj:", 10);
	getch();
}
