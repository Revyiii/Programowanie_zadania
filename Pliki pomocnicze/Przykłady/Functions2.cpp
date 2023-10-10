#include <iostream>

using namespace std;

void printCrap(int x=cin>>x)
{
    cout << "I guess it's " << x << "\ndid a get it right?";
}

int main()
{
    cout << "What is your favourite number" << endl;

    /*int a;
    cin>>a;
    cout << a;*/

    int a;
    cin >> a;
    printCrap();

    return 0;
}
