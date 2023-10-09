#include <iostream>
#include <conio.h>

using namespace std;


int main() 
{
	//swich
	int l;
	cout<<"podaj numer:";
	string num;
	cin>>num;
	l=num.length();
	switch (l)
	{
		case 1:{cout<<"numer ma tylko jedną cyfre";break;}
		case 2:{cout<<"numer ma dwie cyfry";break;}
		case 3:{cout<<"numer ma trzy cyfry";break;}
		case 4:{cout<<"numer ma cztery cyfry";break;}
		case 6:{cout<<"numer ma pięć cyfr";break;}
		case 7:{cout<<"numer ma siedem cyfr";break;}
		case 8:{cout<<"numer ma osiem cyfr";break;}
		case 9:{cout<<"numer ma dziewięć cyfr";break;}
		case 10:{cout<<"numer ma dziesięć cyfr";break;}
		case 11:{cout<<"numer ma jedynaście cyfr";break;}
		default:{cout<<"numer ma "<< l << " cyfr";}
	}
	return 0;
}
