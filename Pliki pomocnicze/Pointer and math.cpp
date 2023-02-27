#include <iostream>

using namespace std;

int main()
{
    int top[5];
    int *top0 = &top[0];
    int *top1 = &top[1];
    int *top2 = &top[2];


    cout<<top0<<endl;
    cout<<top1<<endl;
    cout<<top2<<endl;

    top0 += 2;
    cout<<top0<<endl;

}
