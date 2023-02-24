#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
const int maks=100;

void piszT(int T[maks], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << T[i]<<" ";
    }
}
void czytajT(int T[maks], int n)
{
    for(int i=0; i<n; i++)
    {
        cin >> T[i];
    }
}
void losT(int T[maks], int n)
{
    for(int i=0; i<n; i++)
    {
        T[i]=0+rand()%(100);
    }
}
int main()
{
    srand (time(NULL));
    return 0;
}
