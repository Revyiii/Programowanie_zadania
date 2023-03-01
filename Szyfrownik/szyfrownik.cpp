#include <iostream>
//#include <cstdlib>
#include <iomanip>
//#include <conio.h>
//#include <math.h>
//#include <string>
//#include <cstring>
#include <Windows.h>
using namespace std;
int nn = 100;//max lenght of the measseg
void animat_string(string pow) //funkcja do animacji
{
    char* pow_arr = new char[pow.length()];
    strcpy(pow_arr, pow.c_str());
    int n=0;
    while(n<=pow.length())
    {
        cout << pow_arr[n];
        Sleep(1);
        n++;
    }
    delete[] pow_arr;

}
void animat_char_arr(char* temp_arr)// funkcja do animacji arr
{
    string tempst = temp_arr;
    animat_string(tempst);

}
void animat_num_arr(int temp_arr[],int l)// funkcja do animacji arr
{
    int n=0;
    while (n<l)
	{
	    //<sizeof(temp_arr)/sizeof(temp_arr[0])
		cout << temp_arr[n] << ",";
		n++;
	}
	cout<<endl;
}
void ascitest(string plain)
{
    char* text_arr = new char[plain.length()];
    strcpy(text_arr, plain.c_str());
    int n=0;
    while(n<=plain.length())
    {
        int te = text_arr[n];
        cout<< te << "=" << text_arr[n]<< endl;
        n++;
    }
	delete[] text_arr;
}
int* asciitonum (string ascii)
{
    int lenght = ascii.length();
	char* text_arr = new char[ascii.length()];
    strcpy(text_arr, ascii.c_str());
    int n=0;
    static int numarr[100];
	while(n<=ascii.length())
    {
        int tn = text_arr[n];
        if(tn>=65 && tn<81){tn=tn-65;}
        else if (tn>81 && tn<=90){tn=tn-66;}
        else if (tn>=97 && tn<113){tn=tn-97;}
        else if (tn>113 && tn<=122){tn=tn-98;}
        else{tn=25;}
        numarr[n] = {tn};
        n++;
    }

	delete[] text_arr;
    //animat_num_arr(numarr,sizeof(numarr)/sizeof(numarr[0]));
    return numarr;
}
void num_to_ascii(int* arr,int l)
{

    char temp;
    int n=0;
    while(n<l)
        {
        if(arr[n]<16){temp=arr[n]+65;}
        else if(arr[n]>=16 && arr[n]<25){temp=arr[n]+66;}
        else{temp=35;}
        cout << temp;
        n++;
        }
}
void cyclicop(int arrtemp[],int sizetemp)
{

	int arr[sizetemp];
	int n = 0;
	int p = 0;
	int k = 0;
	char direc;
	cout << "podaj przesunieci:";
	cin >> k;
	cout << "podaj kierunek przesuniecia(L/P):";
	cin >> direc;
	if(direc==76)
	{
        while (n<sizetemp)
        {
            p=n+k;
            while(p>=sizetemp)
            {
                p=p-sizetemp;
            }
            arr[p]={arrtemp[n]};
            //cout<< arrtemp[p] <<", " << p <<endl;
            n++;
        }
	}
	else
    {
        while (n<sizetemp)
        {
            p=n+k;
            while(p>=sizetemp)
            {
                p=p-sizetemp;
            }
            arr[n]={arrtemp[p]};
            //cout<< arrtemp[p] <<", " << p <<endl;
            n++;
        }

	}

	num_to_ascii(arr,sizetemp);

}
void cezar(int arrtemp[],int sizetemp)
{
	int arr[sizetemp];
	int n = 0;
	int p = 0;
	int k = 0;
	int d = 24;
	char szyr;
	cout << "podaj przesunieci:";
	cin >> k;
	cout << "szyfrowac czy rozszyfrowac(S/R):";
	cin >> szyr;
	if(szyr==82 || szyr==114)
	{
        while (n<sizetemp)
        {
            p=arrtemp[n]-k;
            while(p>=25)
            {
                p=p-25;
            }
            arrtemp[n]= {p};
            //cout<< arrtemp[p] <<", " << p <<endl;
            n++;
        }
	}
	else
    {
        while (n<sizetemp)
        {
            p=arrtemp[n]+k;
            
            
            
            arrtemp[n]={p};
            //cout<< arrtemp[p] <<", " << p <<endl;
            n++;
        }

	}
	num_to_ascii(arr,sizetemp);
}
int main()
{

    animat_string ("witam w programie");
    cout << endl;
    animat_string ("aby wyswietlic menu podaj numer 1:");
    string text;
    int r=0;
    int decision=0;
    cin >> decision;
    while(decision>=0 || r>20)
    {
        if(decision==1)
        {
            cout << "\
            1.Menu\n\
            2.Szyfr cezara\n\
            3.Deszyr cezar\n\
            4.\n\
            5.\n\
             .Aby zamknoc program wpisz negatywna wartosc"\
             << endl;
        }
        else if(decision==2)
        {
            cout << "prosze podac text do zaszyfrowania:";
            cin >> text;
            int* nym;
            nym=asciitonum(text);
            //animat_num_arr(nym,text.length());
            cezar(nym,text.length());
            //delete[] text;
        }
        else if(decision==3)
        {
            cout << "prosze podac text do przesuniecia:";
            cin >> text;
            int* nym;
            nym=asciitonum(text);
            //animat_num_arr(nym,text.length());
            cyclicop(nym,text.length());
            //delete[] text;
        }
        else if (decision==5)
        {

        }
        else if(decision<0){return 0;}
        else {cout << "watrosc nie poprawna, aby wswietlic menu podaj 1"<< endl;}
        cout << endl << "kolejna opcja?:";
        cin >> decision;
        r++;
    }
    /*
    cin >> text;
    int* nym;
    nym=asciitonum(text);
    animat_num_arr(nym,text.length());
    num_to_ascii(nym,text.length());


    //szyfr("ABCDEFGHIJKLMNOPQRSTUWXYZabcdefghijklmnopqrstuwxyz1234567890., !@#$%^&*_+`~?|");
	return 0;
	*/
}
