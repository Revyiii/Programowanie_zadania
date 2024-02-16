// #include <iostream>
// #include <ctime>
// #include <cstdlib>
// #include <conio.h>
// using namespace std;
// const int maxs=100;

void piszt2(int T[maxs][maxs],int n,int k)
{
    for(int i=0;i<n;i++)
    {    for(int j=0;j<k;j++)
		 {  cout.width(4); 
			cout<<T[i][j];
		 }
		 cout<<endl;
	}		
}

void czytajt2(int T[maxs][maxs],int n,int k)
{
    for(int i=0;i<n;i++)
	{
		for(int j=0;j<k;j++)
		{	
		cin>>T[i][j];
		}
	}	
}

void lost2(int T[maxs][maxs],int n,int k)
{
    for(int i=0;i<n;i++)
    {    for(int j=0;j<k;j++)
		{
			T[i][j]=rand()%100;
		}
	}
}
// int main()
// {
//     srand(time(NULL));

//     int n;
//     int k;
//     int T[maxs][maxs];

//     return 0;
// }
