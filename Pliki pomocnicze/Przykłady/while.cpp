#include <iostream>

using namespace std;

int main()
{
    int x=1;
    int number;
    int sum =0;
    int runtimes = 5;
    int avarage;
    while(x<=runtimes){
        x++;
        cin >> number;
        sum = sum + number;



    }

    cout << "Your sum is "<< sum << endl;

    avarage = number/runtimes;
    cout << "your avarage is " << avarage << endl;
    return 0;
}
