import msvcrt as m
import sys

print('program liczenia silni z n')
while True:
    s=int(1)
    n=int(1)
    i=int(1)
    while True:
        try:
            n=round(int(input('podaj a liczbe:')))
            break   
        except ValueError:print('zła wartość')
    
    while i<=n:
        s=s*i
        i=i+1
    print("silna z n jest równa:",s)
    
    while True:
        print('kontynować? T/N')
        s=m.getche().upper()
        if s==b'T':break
        elif s==b'N':sys.exit(0)
