import math as m
import msvcrt as ms
import sys
from funkcje import *

while True:
    
    #main 
    print('Witam w programie z Tablicami')
    m = int(inputt("Liczba elementow:"))
    a=[0,]*m
    CZYTAJT(a,m)
    PISZT(a,m)
    i=m
    while 0<=i-1:
        print(f"{a[i-1]},",end="")
        i=i-1
    
    while True:
        print('kontynować? T/N')
        s=ms.getche().upper()
        if s==b'T':
            print()
            break
        elif s==b'N':sys.exit(0)

