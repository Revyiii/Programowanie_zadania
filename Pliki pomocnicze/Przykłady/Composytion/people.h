#ifndef PEOPLE_H
#define PEOPLE_H
#include <string>
#include "Birftday.h"
using namespace std;

class people
{
    public:
        people();
        virtual ~people();
    private:
        string name;
        Birftday dateOfbirtf;
};

#endif // PEOPLE_H
