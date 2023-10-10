#include "Sally.h"
#include <iostream>
using namespace std;

Sally::Sally(int a,int b)
: regVar(a),
constVar(b)
{
}

void Sally::printCrap()
{
    cout<<"did someone said steak "<< regVar << endl << constVar << endl;
}

void Sally::printCrap2() const
{
    cout <<"i am a conts"<<endl;
}/*

Sally::~Sally()
{
    cout << "I am a deconstractor"<<endl;
}
*/
