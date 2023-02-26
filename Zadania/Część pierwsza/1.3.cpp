#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

int main()
{
    //animacja powitalna
    string pow ("witam w programie");
    char* pow_arr = new char[pow.length()];
    strcpy(pow_arr, pow.c_str());
    int n=0;
    while(n<=pow.length())
    {
        cout << pow_arr[n];
        Sleep(250);
        n++;
    }
    Sleep(2000);
    delete[] pow_arr;
    //czyszczenie consoli
    system("cls");
    // reszta zadania
    float bok = 5.875;
    float pole = 6.0*bok*bok;
    float obj = 1.0*bok*bok*bok;

    cout << setprecision(5) << "p="<< pole << "; obj=" << obj;
	
	cin.get();
    return 0;
}
