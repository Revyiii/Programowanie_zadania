#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));ddd

   for(int x = 1; x<25; x++){
        cout<<rand()%6+1<<endl;
   }
}
