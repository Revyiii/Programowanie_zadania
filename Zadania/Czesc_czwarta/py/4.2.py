import math as m
import msvcrt as ms
import sys
from funkcje import *

while True:
    
    #main 
    print('Witam w zadaniu 4.2')
    n=inputt("rozmiar tablicy:")
    tab=[0,]*n
    l=inputt("Los czy nie\n1.los\n2.uzytkownik podaje\n")
    if l==1:
        LOST(tab,n)
    elif l==2: 
        CZYTAJT(tab,n)
    PISZT(tab,n)
    p=inputt("zobacz czy licza jest w tablicy")
    
    i=0
    odp="NIE"
    while i<n:
        if p==tab[i]:
            odp="TAK"
            break
        i=i+1
    print(odp)

    while True:
        print('kontynować? T/N')
        s=ms.getche().upper()
        if s==b'T':
            print()
            break
        elif s==b'N':sys.exit(0)

