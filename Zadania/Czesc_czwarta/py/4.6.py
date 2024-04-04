import math as m
import msvcrt as ms
import sys
from funkcje import *

def minmax(tab,n,m):
    pos=[0,]*4
    min=tab[0][0]
    max=tab[0][0]
    i=0
    while i<n:
        ii=0
        while ii<m:
            if min>tab[i][ii]:
                min=tab[i][ii]
                pos[0]=i
                pos[1]=ii
            if max<tab[i][ii]:
                max=tab[i][ii]
                pos[2]=i
                pos[3]=ii
            ii=ii+1
        i=i+1
    print(f"min:{min} pos {pos[0]+1}:{pos[1]+1}max:{max} pos {pos[2]+1}:{pos[3]+1}")    

print('Witam w zadaniu 4.6')
while True:
    
    #main 
    
    n=inputt("rozmiar tablicy x:")
    m=inputt("rozmiar tablicy y:")
    tab=[[0,]*n]*m
    l=inputt("Los czy nie\n1.los\n2.uzytkownik podaje\n")
    if l==1:
        lost2(tab,n,m)
    elif l==2: 
        czytajt2(tab,n,m)
    piszt2(tab,n,m)

    minmax(tab,n,m)

    while True:
        print('kontynować? T/N')
        s=ms.getche().upper()
        if s==b'T':
            print()
            break
        elif s==b'N':sys.exit(0)

