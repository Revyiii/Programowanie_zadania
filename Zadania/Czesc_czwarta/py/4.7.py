import math as m
import msvcrt as ms
import sys
from funkcje import *

def prime(n):
    odp=True
    i=3
    if n%2==0 and n!=2:
            odp=false
    while i<n/2:
        if n%i==0:
            odp=false
            break
        i=i+2
    return bool(odp)

print('Witam w zadaniu 4.7')
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

    sum=0
    num=0
    i=0
    while i<n:
        ii=0
        while ii<m:
            if prime(tab[i][ii]):
                print(f"{tab[i][ii]}:({i+1}:{ii+1})")
                sum=sum+tab[i][ii]
                num=num+1
                break
            ii=ii+1
        i=i+1
    if num==0:
        print("nie ma liczb pierwszych")
    else:
        print(f"suma:{sum}\nsrednie:{sum/num}")
    while True:
        print('kontynować? T/N')
        s=ms.getche().upper()
        if s==b'T':
            print()
            break
        elif s==b'N':sys.exit(0)

