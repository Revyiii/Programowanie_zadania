import math as m
import msvcrt as ms
import sys
import random as r

from ctypes import windll, Structure, c_long, byref
class POINT(Structure):
    _fields_ = [("x", c_long), ("y", c_long)]
def getx():
    pt = POINT()
    windll.user32.GetConsoleScreenBufferInfoEx(byref(pt))
    return { "x": pt.x, "y": pt.y}




def gotoxy(x,y):
    print ("%c[%d;%df" % (0x1B, y, x), end='')    
def los(x):
        x = r.randint(1, 50)
        return x
def get(n,max):
     while True:
        try:
            guess = int(input(f"gracz nr.{n}: podaj liczbe calkowita od 1 do {max}: "))
            if guess < 1 or guess > max:
                raise ValueError()
            return guess
        except ValueError:
            print("podana wartosc jest zla spruboj ponownie")
def komentarz(x,y,n):
    gotoxy(x,y)
    opcje = {0: "jestes super!", 1: "smielej!", 2: "nie przesadaj!", 3: "ojej!"}
    print(opcje[n])



while True:

    #print(get(1,50))
    komentarz(10,10,3)
    print(getx())


    #main

    while True:

        print('kontynować? T/N')
        s=ms.getche().upper()
        if s==b'T':
            print()
            break
        elif s==b'N':sys.exit(0)


