#include <iostream>

using namespace std;

void printNumber(int x){
    cout << "i am printing an intrger "<<x<<endl;
}
void printNumber(float x){
    cout << "i am printing an flote "<<x<<endl;
}

int main()
{
    int a = 54;
    float b = 32.4896;

    printNumber(a);
    printNumber(b);
}
