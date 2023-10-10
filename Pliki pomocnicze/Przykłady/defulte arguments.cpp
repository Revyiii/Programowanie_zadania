#include <iostream>

using namespace std;
int volume(int l=2, int w=3, int h=4);
int main()
{
  cout << volume(5);
}

int volume(int l, int w, int h)
{
    return l*w*h;
}
