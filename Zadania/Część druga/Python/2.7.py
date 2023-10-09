import msvcrt as m
import sys
print('program do liczenie liczb trzy cyfrowych ktorych suma jest rowna n:')
while True:
    n=int(input('podaj n:'))
    sum=int(0)
    for a in range(1,10):
        for b in range(0,10):
            for c in range(0,10):
                if a+b+c==n:print(a*100+b*10+c,", ",end='');sum=sum+1
    print("\nliczb trzy czyfrowych o sumie ",n," jest: ",sum)
    while True:
        print('kontynować? T/N')
        s=m.getche().upper()
        if s==b'T':break
        elif s==b'N':sys.exit(0)
