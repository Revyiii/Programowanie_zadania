
int input(string n,int max)
{
	int a; 
	while(true)
	{	a=0;
		cout<<endl<<n;
		cin>>a;
		//if(a=='q'||'Q'==a){exit(EXIT_SUCCESS);}
		cout<<a;
		if(!cin.fail()&& a<=max&&a>=0){return a;}
		cout<<"zla wartosc"<<endl;
		cin.clear();cin.sync();
	}
}
void wypisz(int p[maxs][maxs],bool s)
{
	int b =144;
	int c =120;
	for (int i=1; i<=maxs-2; i++)
	{for (int ii=1; ii<=maxs-2; ii++)
	{
		gotoxy(i*2+maxs*s*2,3+ii);
		SetConsoleTextAttribute(hConsole, b);
		if(p[i][ii]>=1){SetConsoleTextAttribute(hConsole, c);}
		cout<<trans(p[i][ii])<<' ';
		SetConsoleTextAttribute(hConsole, norm);
	}cout<<endl;
	}
}
void highlight(int n,int T[maxs][maxs])
{
	cout<<"\x1b[4;37;41m";
	for(int i=1;i<maxs-1;i++){
		gotoxy(n*2+maxs*2,i+3);
		cout<<trans(T[n][i])<<' ';
	}
	SetConsoleTextAttribute(hConsole, norm);
}
void highlightSquare(int x, int y ,int T[maxs][maxs])
{
	cout<<"\x1b[4;37;41m";
	gotoxy(x*2,y+3);
	cout<<trans(T[x][y])<<' ';
}
void SG(int T[maxs][maxs])
{
	int x;
	int y;
	int t;
	char j =maxs+94;
	while(true){
		clearLine(maxs+10);
		gotoxy(0,maxs+10);
		cout<<"podaj kolumne<a-"<<j<<">:";
		x=tolower(getche())-96;
		if(x+96=='q'){exit(EXIT_SUCCESS);}
		if(x>=1&&x<=maxs-2){break;}
	}
	highlight(x,T);
	while(true){
		clearLine(maxs+10);
		gotoxy(0,maxs+10);
		cout<<"podaj wiersz<1-"<<maxs-2<<">(1 potwierdz enterem):";
		y=tolower(getche())-48;
		if(y+48=='q'){exit(EXIT_SUCCESS);}
		else if(y==1){
			t=tolower(getche())-38;
			if(t!=13-38){y=t;}
		}
		if(y>=1&&y<=maxs-2){break;}
	}
	if(T[x][y]>=1){T[x][y]=-1;}
	else{T[x][y]=-2;}
}
void SK(int T[maxs][maxs])
{
	int x;
	int y;
	//for(int i=0;i<(maxs-2)*(maxs-2);i++){
	while(true){
	x=rand()%(maxs-2)+1;
	y=rand()%(maxs-2)+1;
	if(T[x][y]>=0||T[x][y]==-3){break;}
	}
	
	if(T[x][y]>=1){T[x][y]=-1;}
	else{T[x][y]=-2;}
	highlightSquare(x,y,T);	
}
void plane()
{
	int b = 311;
	char letter ='a';
	system("cls");
	cout<<"statki";
	gotoxy(maxs/2+2,2);
	cout<<"gracz";
	gotoxy(maxs*2.5,2);
	cout<<"komputer";
	SetConsoleTextAttribute(hConsole, b);
	gotoxy (0,3);
	cout<<"  ";
	gotoxy (maxs*2,3);
	cout<<"  ";
	SetConsoleTextAttribute(hConsole, norm);
	for(int i=1;i<=maxs-2;i++){
		SetConsoleTextAttribute(hConsole, b);
		gotoxy(0,3+i);
		cout<<"  ";
		gotoxy(0,3+i);
		cout<<i;
		gotoxy(maxs*2,3+i);
		cout<<"  ";
		gotoxy(maxs*2,3+i);
		cout<<i;
		gotoxy(i*2,3);
		cout<<letter<<' ';
		gotoxy(i*2+maxs*2,3);
		cout<<letter<<' ';
		SetConsoleTextAttribute(hConsole, norm);
		letter++;
	}
	gotoxy(0, maxs+5);
	cout<<"Aby wyjsc wcisnij [Q]";

	SetConsoleTextAttribute(hConsole, 0);
}
