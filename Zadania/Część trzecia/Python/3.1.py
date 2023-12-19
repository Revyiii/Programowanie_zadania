import math as m
import msvcrt as ms
import sys

while True:
    def RL(a,b):
        if a==0:
            if b==0:print("Rownanie tozsamosciowe")
            else:print("rownanie sprzeczne")
        else:
            if b==0:print("x jest rowny:0")
            else:  
                a=b/a
                print(f"x jest rowny:{a}")
    def RK(a,b,c):
        delta=b*b-(4*a*c)
        if delta ==0:
            a=((-b)/(2*a))
            print(f"x jest rowny:{a}")
        else:
            if(delta>0):
                print("x1 jest rowny:",((-b-m.sqrt(delta))/(2*a)))
                print("x2 jest rowny:",((-b+m.sqrt(delta))/(2*a)))
            else:print("brak rozwiazan")
    def get(g):
        h = int(input(f"podaj {g}:"))
        return h

    #main 
    print("program do liczenia rownania")
    a = get('a')
    b = get('b')
    c = get('c') 
    d = get('d')
    print(f"a:{a},b:{b},c:{c},d:{d}")
    c=c-d
    if(a==0):RL(b,c)
    else:RK(a,b,c)

    while True:
        print('kontynować? T/N')
        s=ms.getche().upper()
        if s==b'T':
            print()
            break
        elif s==b'N':sys.exit(0)


