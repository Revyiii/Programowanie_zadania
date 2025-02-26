#include <iostream>
#include <windows.h>
#include <fstream>
#include <vector>
using namespace std;

int main(){
	cout<<endl<<"Witam w zadaniu 6.4"<<endl;
	
	fstream plik;
	plik.open("6.4.txt");
    ofstream jeden("a.txt");
    ofstream dwa("b.txt");
    ofstream trzy("c.txt");
    ofstream cztery("d.txt");
	char a;
	int one;
	int two;
	int tree;
	char b;
    string lines;
    string words;
    int i;
    int ii;

	if(!plik.eof()){two++;}
	while(!plik.eof())
	{
		a=plik.get();
        b=a-32*(a>=97&&a<=122);
        jeden << b;
        if(a>='0'&&a<='9'){dwa << '#';}else{dwa << a;}
        lines.append(1,a);
        if(a==10)
        {
            i=lines.length()-1;
            while(i>=0)
                {
                trzy<<lines[i];
                i--;
                }
            lines="";            
        }
        words.append(1,a);
        if(a==' '||a==10)
        {
            i=words.length()-1;
            while(i>=0)
                {
                cztery<<words[i];
                i--;
                }
            words="";            
        }
        
	}
    jeden.close();
    dwa.close();
    trzy.close();
    cztery.close();
	//cin.get();
	return 0;
}   
