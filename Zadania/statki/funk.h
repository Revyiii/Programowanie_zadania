
//#include <consoleapi2.h>

char trans(int i)
{
	if(i==0){return ' ';}
	if(i>=1){return '*';}
	else if(i==-1){return 'x';}
	else if(i==-2){return '+';}
	else{return ' ';}
}
void zero(int p[maxs][maxs])
{
	for (int i=1; i<=10; i++)
	{for (int ii=1; ii<=10; ii++)
		p[i][ii]=0;
	}
}


void losx(int p[maxs][maxs],int n)
{
	int x;
	int y;
	bool k;
	bool t=true;
	while (true)
	{
		x=rand()%(maxs-n);
		y=rand()%(maxs)-1;
		k=rand()%(2);
		if(k==1){swap(x,y);};
		//cout<<x<<":"<<y<<":"<<k<<endl;
		t=true;
		for (int i=0; i<n; i++)
		{
			if(p[x+i*(1-k)][y+i*k]!=0){t=false;break;}
		}
		if(t==true){break;}
	}
//	for (int i = 0; i < n; i++)//do zopytmalizowania aby nie nadpisywać kratek
//	{for (int ii = -1; ii < 2; ii++)
//	{for (int iii = -1; iii < 2; iii++)
//	{ 	
//		p[x+i*(1-k)+ii][y+i*k+iii]=-3;
//	}}}
	for(int i=0;i<3;i++)
	{
		p[x+i*k-1][y-1+i*(1-k)]=-3;
		p[x+i*k-1+n*(1-k)+1*(1-k)][y-1+i*(1-k)+n*k+1*k]=-3;
	}
	for (int i = 0; i < n; i++)
	{
		p[x+i*(1-k)-1*k][y+i*k-1*(1-k)]=-3;
		p[x+i*(1-k)][y+i*k]=n;
		p[x+i*(1-k)+1*k][y+i*k+1*(1-k)]=-3;
	}
}
void los(int g[maxs][maxs],int k[maxs][maxs],int s[maxs],int n)
{
	zero(g);
	zero(k);
	for(int i=0;i<n;i++){ 
		for(int ii=0;ii<s[i];ii++){
			losx(g,i+1);
			losx(k,i+1);
	}}
}
int TEST(int T[maxs][maxs])
{
	int c=0;
	
	for (int i=1; i<=10; i++)
	{for (int ii=1; ii<=10; ii++)
		if(T[i][ii]>=1){c++;}
	}
	return c;
}

void czytaj(int g[maxs][maxs],int k[maxs][maxs]){
	int x;int y;
	fstream save;
	save.open("save1.txt",ios::in);
	if(!save.is_open()){cout<<"nie ma pliku";getch();exit(EXIT_FAILURE);}
	int test;
	save>>test;
	if(test!=maxs){cout<<"plik i program maja inna plansze";getch();exit(EXIT_FAILURE);}
	for(int i=0;i<(maxs-2)*(maxs-2);i++)
	{
	x=i+1-i/(maxs-2)*(maxs-2);
	y=i/(maxs-2)+1;
	save>>g[x][y];
	save>>k[x][y];
	}
	save.close();
}
void wpisz(int g[maxs][maxs],int k[maxs][maxs])
{
	int x;
	int y;
	fstream save;
	save.open("save1.txt",ios::out);
	save<<maxs;
	for(int i=0;i<(maxs-2)*(maxs-2);i++)
	{
	save<<"\n";
	x=i+1-i/(maxs-2)*(maxs-2);
	y=i/(maxs-2)+1;
//	cout<<"x:"<<x<<" y:"<<y<<endl;
	save<<g[x][y];
	save<<"\n";
	save<<k[x][y];
	}
}

