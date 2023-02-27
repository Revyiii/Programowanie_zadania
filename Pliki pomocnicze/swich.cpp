#include <iostream>

using namespace std;

int main()
{
    int age = 18;
    switch(age){
    case 16:
        cout << "hey you can't drive still"<< endl;
        break;
    case 18:
        cout << "You can drive and drink now"<< endl;
        break;
    case 27:
        cout << "hey you can think now"<< endl;
        break;
    default:
        cout<< "sorry it's just a number"<<endl;

    }
}
