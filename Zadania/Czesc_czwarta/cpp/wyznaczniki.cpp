#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
	bool r = true;  
	char d;
	cout<<"program do wyznacznikow"<<endl;  

//	int wspol[max][max] = {
//		{1,3,2,7},
//		{7,4,9,15},
//		{5,6,8,17}};
	//		0,1,2,3
	//		4,5,6,7
	//		8,9,10,11

	int T[12]={1,3,2,7,7,4,9,15,5,6,8,17};
	while(r==true)
	{
		
		
		//w
		int w=T[0]*T[5]*T[10]+T[1]*T[6]*T[8]+T[2]*T[4]*T[9]-T[2]*T[5]*T[8]-T[1]*T[4]*T[10]-T[0]*T[6]*T[9];
		//wx
		int wx=T[3]*T[5]*T[10]+T[1]*T[6]*T[11]+T[2]*T[7]*T[9]-T[2]*T[5]*T[11]-T[1]*T[7]*T[10]-T[3]*T[6]*T[9];
		//wy
		int wy=T[0]*T[7]*T[10]+T[3]*T[6]*T[8]+T[2]*T[4]*T[11]-T[2]*T[7]*T[8]-T[3]*T[4]*T[10]-T[0]*T[6]*T[11];
		//wz
		int wz=T[0]*T[5]*T[11]+T[1]*T[7]*T[8]+T[3]*T[4]*T[9]-T[3]*T[5]*T[8]-T[1]*T[4]*T[11]-T[0]*T[7]*T[9];

		if(w!=0){cout<<wx/w<<","<<wy/w<<","<<wz/w<<endl;}
		else if(wx==0&&wy==0&&wz==0){cout<<"uklad nie oznaczony(nieskaczenie wiele rozwiazan)"<<endl;}
		else if(wx!=0||wy!=0||wz!=0){cout<<"uklad sprzeczny"<<endl;}


		cout<<"jeszcze raz? T/N: ";
		do{
			cin.clear();cin.sync();
			cin>>d;
			d=toupper(d);
			if(d=='N'){return 0;}
			else if(d=='T'){break;}
			else{cout<<"podana warto�� jest nie poprawna. Pon�w prub�"<<endl;}
		}while(true);
	}

	cin.get();
	return 0;
}
