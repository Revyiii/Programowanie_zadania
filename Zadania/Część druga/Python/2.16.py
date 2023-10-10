import msvcrt as m
import sys
import math

print('program do sprawdzania jaka jest suma cyfr n')
while True:
    s=int(0)
    n=int(1)
    while True:
        try:
            n=round(int(input('podaj a liczbe:')))
            break   
        except ValueError:print('zła wartość')
    
    while True:
        if n==0:
            break
        s=s+n%10
        n=round(n/10)
        # print('test s:',s,n)
    print('Suma wszystkich cyfr to', s)
    
    while True:
        print('kontynować? T/N')
        s=m.getche().upper()
        if s==b'T':break
        elif s==b'N':sys.exit(0)
