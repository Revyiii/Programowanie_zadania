import math as m
import msvcrt as ms
import sys
from funkcje import *
print('Witam w zadaniu 4.5')
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
   
    
    i=0
    odp="NIE"
    time=0
    while i<n:
        ii=0
        while ii<n:
            if tab[i]==tab[ii] and i!=ii:
                odp="TAK"
            ii=ii+1
        i=i+1
    print(odp)

    while True:
        print('kontynować? T/N')
        s=ms.getche().upper()
        if s==b'T':
            print()
            break
        elif s==b'N':sys.exit(0)

