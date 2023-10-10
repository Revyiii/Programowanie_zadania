  #include <iostream>

using namespace std;

int main()
{
    int number;
    int sum = 0;

    cout << "enter first number or 0 to exit a program" << endl;
    cin >> number;

    while(number != 0){
        sum = sum + number;

        cout << "next one please" << endl;
        cin >> number;
    }
    cout << "sum: " << sum << endl;
    return 0;
}
