#include <iostream>
#include <iomanip>
#define a 7.225
using namespace std;
int main()
{
	cout <<fixed<< setprecision(2)<<\
	"dla boku:"<<a << endl <<\
	"P="<< a*a*6<< endl <<\
	"O=" << a*a*a << endl<<\
	"S="<< a*12;
	return 0;
}
