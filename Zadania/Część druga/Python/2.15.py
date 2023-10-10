import msvcrt as m
import sys
import math

print('program do sprawdzania czy liczba jest pierwsza')
while True:
    i=int(2)
    n=int(1)
    odp='tak'
    while True:
        try:
            n=int(input('podaj a liczbe:'))
            break   
        except ValueError:print('zła wartość')
    
    while i<=math.sqrt(n):
        if n%i==0:
            odp='nie'
            break
        i=i+1
    print(odp)
    while True:
        print('kontynować? T/N')
        s=m.getche().upper()
        if s==b'T':break
        elif s==b'N':sys.exit(0)
