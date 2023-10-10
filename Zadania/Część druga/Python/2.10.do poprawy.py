import msvcrt as m
import os
import sys
#import array as arr
def gotoxy(x, y):
    os.system('cls' if os.name == 'nt' else 'clear')
    print("\033[%d;%dH" % (y, x), end='')

def main():
    #a = arr.array('i', [0, 16])


    x = 0
    y = 0
    l = 4
    print("program tabliczka mnożenie od do.\n Program przymuje wartości <-15;15>")
    while True:
        i = 0
        a =0
        b=16
        while True:
            try:
                a[0]=int(input('podaj a liczbe:'))
                if a[0]>=-15 and a[0]<=15:break   
                else: print('podana wartiść jest zła')
            except ValueError:print('zła wartość')
        while True:
            try:
                a[1]=int(input('podaj a liczbe:'))
                if a[1]>a[0] and a[1]>=-15 and a[1]<=15:break   
                else: print('podana wartiść jest zła')
            except ValueError:print('zła wartość')
        os.system('cls' if os.name == 'nt' else 'clear')
        y = a[0]
        while y <= a[1]:
            gotoxy((y - a[0] + 1) * l, 0)
            print(y, end=',')
            y += 1
        print()
        y = a[0]
        while y <= a[1]:
            print("-", end='')
            gotoxy((y - a[0] + 1) * l, 1)
            y += 1
        print()
        y = a[0]
        while y <= a[1]:
            x = a[0]
            print(y, end='')
            gotoxy(3, y - a[0] + 2)
            print("|", end='')
            while x <= a[1]:
                gotoxy((x - a[0] + 1) * l, y - a[0] + 2)
                print(y * x, end='')
                x += 1
            print()
            y += 1
        while True:
            print('kontynować? T/N')
            s=m.getche().upper()
            if s==b'T':break
            elif s==b'N':sys.exit(0)

if __name__ == "__main__":
    main()
