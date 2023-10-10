#include <iostream>

using namespace std;

void bucky(){
    cout <<"fuckkkkkkkk";
    bucky();
}

int silnia(int x){
    if(x==1){
            return 1;
    }else{
        return x*silnia(x-1);
    }


}
int main()
{
   cout << silnia(7) << endl;
}
