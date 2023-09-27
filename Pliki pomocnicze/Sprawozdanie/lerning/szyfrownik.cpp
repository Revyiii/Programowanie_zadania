#include <iostream>
//#include <cstdlib>
#include <iomanip>
//#include <conio.h>
//#include <math.h>
//#include <string>
//#include <cstring>
#include <Windows.h>
using namespace std;

void animat(string pow) //funkcja do animacji
{
    char* pow_arr = new char[pow.length()];
    strcpy(pow_arr, pow.c_str());
    int n=0;
    while(n<=pow.length())
    {
        cout << pow_arr[n];
        Sleep(25);
        n++;
    }
    delete[] pow_arr;

}

void animat_arr(char* temp_arr)// funkcja do animacji arr
{
    string tempst = temp_arr;
    animat(tempst);

}

void szyfr(string plain)
{
    char* text_arr = new char[plain.length()];
    strcpy(text_arr, plain.c_str());
    int n=0;
    while(n<=plain.length())
    {
        int te = text_arr[n];
        cout<< te << "=" << text_arr[n]<< endl;
        n++;
    }

}

int main()
{

    animat ("witam w programie");
    cout << endl;
    animat ("prosze podac litery do zaszyrowania: ");
    string text;
    cin >> text;
    szyfr("ABCDEFGHIJKLMNOPRSTUWXYZabcdefghijklmnoprstuwxyz1234567890., !@#$%^&*_+`~?|");

}
