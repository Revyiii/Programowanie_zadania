#include <iostream>
#include <string>
using namespace std;

class MyClass{
    public:
        MyClass (string z){
            setName(z);
        }
        void setName(string x){
            name = x;
        }
        string getName(){
            return name;
        }
    private:
        string name;

};


int main()
{

    MyClass mo ("My name\n");
    cout << mo.getName();

    MyClass mo2("Yourname");
    cout << mo2.getName();

/*
    MyClass mo;
    mo.setName("Tymon £azowy");
    cout << mo.getName();
*/
    return 0;
}
