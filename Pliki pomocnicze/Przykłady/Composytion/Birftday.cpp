#include "Birftday.h"
#include <iostream>

using namespace std;


Birftday::Birftday(int d,int m, int y)
{
    day=d;
    month=m;
    year=y;
}

void Birthday::printDate(){
    cout<<day<<"/"<<month<<"/"<<year<<endl;
}
