import msvcrt as m
import sys

print('program do liczenie n liczby fibonacciego')
while True:
    i=int(0)
    n=int(1)
    a=int(0)
    b=int(1)
    c=int(0)
    while True:
        try:
            n=round(int(input('podaj a liczbe:')))
            break   
        except ValueError:print('zła wartość')
    
    while n>i:
        c=a+b
        a=b
        b=c
        i=i+1
    print(n," liczba ciagu fibonacciego jest rowna:",a)
    
    while True:
        print('kontynować? T/N')
        s=m.getche().upper()
        if s==b'T':break
        elif s==b'N':sys.exit(0)
