import msvcrt as m
import sys
print('program do nwd i nww')
while True:
    a=int(0)
    b=int(0)
    i=int(1)
    while True:
        try:
            a=int(input('podaj a liczbe:'))
            break   
        except ValueError:print('zła wartość')
    while True:
        try:
            b=int(input('podaj b liczbe:'))
            break   
        except ValueError:print('zła wartość')
    
    x=a
    y=b
    while a!=b:
        if a>b:
            a=a-b
        else :b=b-a
    x=int((x*y)/a)
    print("nwd:", a, "nww:", x)
    
    while True:
        print('kontynować? T/N')
        s=m.getche().upper()
        if s==b'T':break
        elif s==b'N':sys.exit(0)