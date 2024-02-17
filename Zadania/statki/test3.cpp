#include <iostream>
#include <stdexcept>
#include <Windows.h>

using namespace std;

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  // you can loop k higher to see more color choices
  for(int k = 1; k < 1000; k++)
  {
    // pick the colorattribute k you want
    SetConsoleTextAttribute(hConsole, k);
    cout << k << " I want to be nice today!" << endl;
  }
  int i;
  cin>> i;
  return 0; 
} 
