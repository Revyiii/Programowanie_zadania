#include <iostream>
using namespace std;

/*int main()
{
    char Tomatos[5] = {'a','b','c','d','f'};
    cout<<Tomatos[3]<<endl;
}
*/

int Tomatos[9];
int Lettuc[4] = {3,4,5,3};
void printArray(int theArray[], int sizs);
int main()
{

    int sum;
    cout << " element - vale " << endl;

    for(int x = 0;x<9;x++)
    {
      Tomatos[x] = x^2;
      cout << x << " _____ " << Tomatos[x] << endl;
      sum += Tomatos[x];


    }
    cout<< "sum is: "<< sum<<endl;
    printArray(Tomatos, 9);
    printArray(Lettuc, 4);
}


void printArray(int theArray[], int sizs)
{
    for(int x = 0;x<sizs; x++){
        cout << theArray[x]<< endl;
    }
}
