#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE,"Polish");
    cout << "Witam w programie" << endl<< endl << endl;
    cout << "Nacisnij dowolny kalwisz";
    getch();
    system("cls");
    cout << "dowidzenia";
    getch();
	return 0;
}
