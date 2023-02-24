#include <iostream>
using namespace std;

int main()
{
    int number;
    int temp = 0;
  
    cout << "wpisz numer większy niz 5 lub: ";
    cin >> number;

    if (!cin or number < 5)
    {
    cout << "zla wartosc"<< endl;
    }
    else
    {
        while (temp != number) 
        {
        temp++;
        cout << temp << ", ";
        }
        cout << endl;
        while (temp != 0)
        {
            cout << temp << ", ";
            temp--;
        }
    }
        
    return 0;
}

