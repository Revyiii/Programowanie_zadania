#include <iostream>

using namespace std;

void passByValud(int x);
void passByReference(int *x);

int main()
{
    int tad =23;
    int Margatt =45;

    passByValud(tad);
    passByReference(&Margatt);

    cout<<"tat is " << tad<<endl;
    cout<<"Margatt is " << Margatt<<endl;
}

void passByValud(int x){
    x = 99;
}
void passByReference(int *x)
{
    *x=66;
}
