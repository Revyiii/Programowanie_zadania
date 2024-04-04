// #include <iostream>
// #include <windows.h>

// using namespace std;

// const int maxs = 100;

// void piszt2(int T[maxs][maxs])//zapytaj pana czy to jest ok ;) w sensię że bez n i m od użytkownika ale chyba nie bo zmniejszsa to fynkcjonalność
// {
// 	int y = sizeof(T)/sizeof(T[0]);
// 	int x = sizeof(T[0])/y;
// 	for (int i; i<y; i++) {
// 		for (int ii; ii<x; ii++) {
// 			cout<<T[i][ii]<<",";
// 		}
// 		cout<<endl;
// 	}
// }

void czytajt2(int T[maxs][maxs],int n, int m)//dopracować podaj 
{
	for (int i=0; i<n; i++) {
		for (int ii=0; ii<m; ii++) {
			cout<<"Podaj("<<i+1<<","<<ii+1<<"):";
			cin>>T[i][ii];
		}
	}
}

void piszt2(int T[maxs][maxs],int n,int m)//zapytaj pana czy to jest ok ;) w sensię że bez n i m od użytkownika ale chyba nie bo zmniejszsa to fynkcjonalność
{
	for (int i=0; i<n; i++) {
		for (int ii=0; ii<m; ii++) {
			cout.width(4);
			cout<<T[i][ii]<<",";
		}
		cout<<endl;
	}
}

void lost2(int T[maxs][maxs],int n, int m)
{
	for (int i=0; i<n; i++) {
		for (int ii=0; ii<m; ii++) {
			T[i][ii]=rand()%(100);
		}
	}
}

