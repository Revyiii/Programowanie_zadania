#include <iostream>
#include <windows.h>
#include <fstream>
#include <functional>
using namespace std;

int main()
{
	cout<<endl<<"Witam w zadaniu 6.3"<<endl;
	string key = "";
    int i;
    int ii;
    
    char d;
    size_t hash_value;
    bool palindrome;
    
    while(true){
    
    key.erase();
    //cout<<"podaj sÅ‚owo:";
    getline(cin,key);
    i = key.length();
    ii=0;
    while(i>ii)
    {
        //cout<<ii<<"::"<<i<<endl;
        if(key[ii]==' '){key.erase(key.begin()+ii);i-1;ii-1;}
        ii++;
    }
    hash<string> hash_fn;
    hash_value = hash_fn(key);
    i=key.size();
    ii=0;
    
    //cout<<key<<endl<<hash_value<<endl<<i<< "::"<<key.size()<<endl;
    
    while(i/2>=ii+1)
    {
        
        key.replace(i-ii-1, 1, 1, key[ii]);
        ii++;
        cout<<key<<endl;
    }
    cout<<hash_fn(key)<<endl;
    palindrome = (hash_value==hash_fn(key));
    cout<<palindrome<<endl;
    
    if(!palindrome){cout<<"nie ";}
    cout<<"jest palindormem"<<endl;
    cin.get();
	return 0;//get line nie dzi³a dwa razy do naprawy i usuniecia (look up dlaczegow 5.0.0 dzi³o³o cin z spacj¹)
	 cout<<"jeszcze raz? T/N: ";
	 do{cin.clear();cin.sync();cin>>d;d=toupper(d);
		if(d=='N'){return 0;}
		else if(d=='T'){break;}
		else{cout<<"podana wartartoÅ›Ä‡ jest nie poprawna. PonÃ³w prubu"<<endl;}
		}while(true);
	}
	cin.get();
	return 0;
}   
