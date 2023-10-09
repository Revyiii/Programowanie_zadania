#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;


int main() 
{
    int a;
    char fig; 
	cout<<"podaj długość boku:"<<endl;
    cin>>a;
    cout<<"dostępne figury:\n1.kwadrat\n2.trójkąt\n3.pięcokąt\n4.sześciokąt";
    fig=getch();
    switch (fig)
    {
    case '1':
        cout<<"\nobwód jest równy "<<a*4<<" a pole "<<a*a;
        break;
    case '2':
        cout<<"\nobwód jest równy "<<a*3<<" a pole "<<a*a*sqrt(3)/4;
        break;
    case '3':
        cout<<"\nobwód jest równy "<<a*5<<" a pole "<<(sqrt(25+10*sqrt(5))/4)*a*a;
        break;
    case '4':
        cout<<"\nobwód jest równy "<<a*6<<" a pole "<<(a*a*sqrt(3)/4)*6;
        break;        
    default:
        cout<<"podana opcja jest zła";
        break;
    }

	return 0;
}
