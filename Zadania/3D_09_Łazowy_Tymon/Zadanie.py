import math as m
import msvcrt as ms
import sys
from funkcje import *


def zamiana(tab, x, n):
    i=0
    while (i<n):
        tab[x-1][i],tab[i][x-1]=tab[i][x-1],tab[x-1][i]
        i=i+1



print('Witam w zadaniu')
while True:
    
    #main 
    
    n=inputt("podaj n:")
    tab=[[0,]*n]*n
    lost2(tab,n,n)
    piszt2(tab,n,n)
    x=input("podaj x:")
    zamiana(tab,x,n)
    piszt2(tab,n,n)

    while True:
        print('kontynować? T/N')
        s=ms.getche().upper()
        if s==b'T':
            print()
            break
        elif s==b'N':sys.exit(0)