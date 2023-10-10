import msvcrt as m
import sys
k = b'n'
while True:
    min,max = 0,0
    while True:
        try:
            min = int(input("podaj min:"))
            if -15<=min and min<=15:
                break
            else:print("Poza zakresem")
        except ValueError:print("Zła wartość")
    while True:
        try:
            max = int(input("podaj max:"))
            if -15<=max and max<=15 :
                if max<min:
                    print("min musi byc mniejsze od max")
                else:
                    break
            else:
                print("Poza zakresem")
        except ValueError:
            print("Zła wartość")
    l1,l3 = min,min
    print("    ",end="")
    while l3 <=max:
        print(f"{l3:>4}",end="")
        l3 += 1
    print("")
    while l1 <=max:
        print(f"{l1:<4}",end="")
        l2 = min
        while l2 <=max:
            print(f"{l1*l2:>4}",end="")
            l2 += 1
        print("")
        l1 += 1
    while True:
        print('kontynować? T/N')
        s=m.getche().upper()
        if s==b'T':break
        elif s==b'N':sys.exit(0)