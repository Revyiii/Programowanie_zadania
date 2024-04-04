import math as m
import msvcrt as ms
import sys
from funkcje import *

print('Witam w zadaniu 4.8')

while True:
    #main 
    n=inputt("rozmiar tablicy:")
    tab=[0,]*n
    l=inputt("Los czy nie\n1.los\n2.uzytkownik podaje\n")
    if l==1:
        LOST(tab,n)
    elif l==2: 
        CZYTAJT(tab,n)
    PISZT(tab,n)
    
    for i in range(0,n):
        for ii in range(0,n):
            if tab[i]<tab[ii]:
                tab[i],tab[ii] = tab[ii],tab[i]
    PISZT(tab,n)
    while True:
        print('kontynować? T/N')
        s=ms.getche().upper()
        if s==b'T':
            print()
            break
        elif s==b'N':sys.exit(0)

