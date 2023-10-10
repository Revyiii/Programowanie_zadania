  #include <iostream>

using namespace std;

int main()
{
    int age;
    int ageTotal = 0;
    int numberofpeople = 0;

    cout << "enter first persons age or -1 to exit a program" << endl;
    cin >> age;

    while(age != -1){
        ageTotal = ageTotal + age;
        numberofpeople++;

        cout << "next one please" << endl;
        cin >> age;
    }

    cout << "Number of people that entered: " << numberofpeople << endl;
    cout << "Average age: " << ageTotal/numberofpeople << endl;

    return 0;
}
