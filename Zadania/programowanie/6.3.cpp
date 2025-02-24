#include <iostream>
#include <windows.h>
#include <fstream>
#include <functional>
using namespace std;

int main()
{
	cout<<endl<<"Witam w zadaniu 6.3"<<endl;
	
    
    do{
    string key = " kayak  ";
    cin>>key;
    int i = key.length();
    int ii=0;
    while(i>ii)
    {
        //cout<<ii<<"::"<<i<<endl;
        if(key[ii]==' '){key.erase(key.begin()+ii);i-1;ii-1;}
        ii++;
    }
    hash<string> hash_fn;
    size_t hash_value = hash_fn(key);
    i=ii;
    ii=0;
    
    //cout<<key<<endl<<hash_value<<endl<<i<<endl<<key.size()<<endl;
    
    while(i/2>ii+1)
    {
        
        key.replace(i-ii-1, 1, 1, key[ii]);
        ii++;
        cout<<key<<endl;
    }
    //cout<<hash_fn(key)<<endl<<key<<endl;
    bool palindrome = (hash_value==hash_fn(key));
    //cout<<palindrome<<endl;
    if(!palindrome){cout<<"nie ";}
    cout<<"jest palindormem";
    }while(true);
	cin.get();
	return 0;
}   
