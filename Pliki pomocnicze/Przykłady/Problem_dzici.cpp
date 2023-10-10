#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
//#include "Sort.h"
//Program, that generates random number from given range and chackes if there are any duplicats

using namespace std;
//ints
const int LOW = 1;
const int HIGH = 365;

char anser;

double dups;
double runs = 1000;

int x;
int y;

int display;
int children = 23;

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void pritArray(int array[], int size)
{
    cout << "run: " << x <<endl;
    int i;
    for (i=0; i < size; i++)
    {
        cout << array[i+1] << "," ;
    }
    cout << endl <<endl;
}

int partition(int array[], int LOW, int HIGH)
{
    int pivot = array[HIGH];
    int i = (LOW - 1);

    for (int j = LOW; j <= HIGH- 1; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[HIGH]);
    return (i + 1);
}

void quickSort(int array[], int LOW, int HIGH)
{
   if (LOW < HIGH)
    {
        int pi = partition(array, LOW, HIGH);

        quickSort(array, LOW, pi - 1);
        quickSort(array, pi + 1, HIGH);
    }
}

void duplicationCh (int array[],int size)
{
    int localDp=0 ;

    for (int d=1;size>=d;d++)
    {
        //cout << "cacle: " << d << endl; //debug function

        if(array[d]==array[d+1])
            {
                localDp++;
            }
    }
    //cout  << "local duplications: " << localDp<< endl;
    if(localDp>0){
        dups++;
    }
}


void generate(int show)
{
    int dates [children];

    time_t seconds;
    time(&seconds);
    srand((unsigned int) seconds);

    //srand (time(NULL));

    while(x<runs)
        {
        x++;
        y=0;

        while(children>y)
            {
            y++;

            dates[y] =rand() % (HIGH - LOW + 1) + LOW;
            //cout << dates[y] << ","<< endl; //debug function
            }
        //pritArray (dates,children-1);
        quickSort(dates, 0, children);
        duplicationCh(dates,children);


        if(show > 0)
            {
             pritArray (dates,children-1);
            }


        }

    double avrage = dups/runs;


    cout << "runs: " << runs << endl;
    cout << "children: " << children << endl;
    cout << "ranga: " << LOW << "-" << HIGH << endl;
    cout << "end of calculation \nduplications: " << dups << endl;
    cout << "precentage: " << dups/runs*100 << "%" << endl;

}

void get()
{

    int display = 0;

    cout << "How many rans you want to do: ";
    cin >> runs;
    cout << "How many children do you want: ";
    cin >> children;
    cout << "Do you want to display arrays (y/n): ";
    cin >> anser;

    if(anser == 'y')
        {
        int display = 1;
        generate(display);

        }
    else if (anser == 'n')
    {
        generate(display);
    }

}

int main()
{

    int r = 1;

    while(r=1)
    {
        get();
        cout << endl<< endl << endl <<endl << "Do you want to repat(y/n):" ;

        char w;

        cin >> w;

        if(w == 'y')
            {

            r = 1;

            }
        else
        {
           return 0;
        }

    }



    return 0;

}
