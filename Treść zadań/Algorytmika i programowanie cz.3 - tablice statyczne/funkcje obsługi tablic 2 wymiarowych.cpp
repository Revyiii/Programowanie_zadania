#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>
using namespace std;
const int maks=100;

void piszT2(int T[maks][maks],int n,int k)
{
    for(int i=0;i<n;i++)
    {    for(int j=0;j<k;j++)
		 {  cout.width(4); 
			cout<<T[i][j];
		 }
		 cout<<endl;
	}		
}

void czytajT2(int T[maks][maks],int n,int k)
{
    for(int i=0;i<n;i++)
	{
		for(int j=0;j<k;j++)
		{	
		cin>>T[i][j];
		}
	}	
}

void losT2(int T[maks][maks],int n,int k)
{
    for(int i=0;i<n;i++)
    {    for(int j=0;j<k;j++)
		{
			T[i][j]=rand()%100;
		}
	}
}
int main()
{
    srand(time(NULL));

    int n;
    int k;
    int T[maks][maks];

    return 0;
}
