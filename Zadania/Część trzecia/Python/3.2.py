import math as m
import msvcrt as ms
import sys
import random as r
import sys, re, os
import ctypes
from ctypes import wintypes
from math import floor

os.system("cls")
# def gotoxy(x,y):
#     print ("%c[%d;%df" % (0x1B, y, x), end='')   

def gotoxy(x,y):
    print(f"\x1b[{y+1};{x+1}H",end='')

def getwith():
    s = os.get_terminal_size()
    return int(s.columns)
   
def clearline(y):
    c=getwith()
    gotoxy(0,y)
    i=0
    while(i<c):
        print(" ",end='')
        i+=1   
     
def getx():
    OldStdinMode = ctypes.wintypes.DWORD()
    OldStdoutMode = ctypes.wintypes.DWORD()
    kernel32 = ctypes.windll.kernel32
    kernel32.GetConsoleMode(kernel32.GetStdHandle(-10), ctypes.byref(OldStdinMode))
    kernel32.SetConsoleMode(kernel32.GetStdHandle(-10), 0)
    kernel32.GetConsoleMode(kernel32.GetStdHandle(-11), ctypes.byref(OldStdoutMode))
    kernel32.SetConsoleMode(kernel32.GetStdHandle(-11), 7)
    try:
        _ = ""
        sys.stdout.write("\x1b[6n")
        sys.stdout.flush()
        while not (_ := _ + sys.stdin.read(1)).endswith('R'):
            True
        res = re.match(r".*\[(?P<y>\d*);(?P<x>\d*)R", _)
    finally:
        kernel32.SetConsoleMode(kernel32.GetStdHandle(-10), OldStdinMode)
        kernel32.SetConsoleMode(kernel32.GetStdHandle(-11), OldStdoutMode)
    if(res):
        return (int(res.group("x")))
    return (-1)

def gety():
    OldStdinMode = ctypes.wintypes.DWORD()
    OldStdoutMode = ctypes.wintypes.DWORD()
    kernel32 = ctypes.windll.kernel32
    kernel32.GetConsoleMode(kernel32.GetStdHandle(-10), ctypes.byref(OldStdinMode))
    kernel32.SetConsoleMode(kernel32.GetStdHandle(-10), 0)
    kernel32.GetConsoleMode(kernel32.GetStdHandle(-11), ctypes.byref(OldStdoutMode))
    kernel32.SetConsoleMode(kernel32.GetStdHandle(-11), 7)
    try:
        _ = ""
        sys.stdout.write("\x1b[6n")
        sys.stdout.flush()
        while not (_ := _ + sys.stdin.read(1)).endswith('R'):
            True
        res = re.match(r".*\[(?P<y>\d*);(?P<x>\d*)R", _)
    finally:
        kernel32.SetConsoleMode(kernel32.GetStdHandle(-10), OldStdinMode)
        kernel32.SetConsoleMode(kernel32.GetStdHandle(-11), OldStdoutMode)
    if(res):
        return (int(res.group("y")))
    return (-1)
    
def los(x):
        x = r.randint(1, 50)
        return x
def get(n,m):
     while True:
        try:
            guess = int(input(f"gracz nr.{n}: podaj liczbe calkowita od 1 do {m}: "))
            if guess < 1 or guess > m:
                raise ValueError()
            y=gety()
            clearline(y+1)
            gotoxy(0,gety())
            print(f"gracz nr.{n} podaj liczbe calkowita od 1 do 50:##")
            return guess
        except ValueError:
            clearline(gety()-1)
            gotoxy(0,gety())
            print("podana wartosc jest zla spruboj ponownie")
            
def komentarz(x,y,n):
    gotoxy(x,y)
    opcje = {0: "jestes super!", 1: "smielej!", 2: "nie przesadaj!", 3: "ojej!"}
    print(opcje[n])
def gwiazdki(x,y,n):
    gotoxy(x,y)
    i=1
    while(i<=n):
        print("*",end="")
        i+=1
def sprawdz(k,g1,g2):
    a=bool(floor(g1/k))
    b=bool(floor(g2/k))
    if(a+b==2):o1,o2=2,2
    elif(a==1):o1,o2=2,0
    elif(b==1):o1,o2=0,2
    elif(g1>g2):o1,o2=0,1
    elif(g2>g1):o1,o2=1,0
    elif(g1==g2):o1,o2=3,3
    else:print("cos poszlo nie tak")
    return o1,o2
def kto_wygral(o1,o2):
    if(o2==0):return "gracz 2"
    elif(o1==0):return "gracz 1"
    elif(o1==3):return "remis"
    else:return "nikt"

#main    
w1=0
w2=0

while True:

    g1=get(1,50)
    g2=get(2,50)
    k=los(50)
    print("k:"),gwiazdki(4,gety(),k)
    print("P1:"),gwiazdki(4,gety(),g1)
    print("P2:"),gwiazdki(4,gety(),g2)
    o1,o2=sprawdz(k,g1,g2)
    gotoxy(0,gety()+1)
    print("gracz 1 ", komentarz(8,gety(),o1))
    print("gracz 2 ", komentarz(8,gety(),o2))
    print("wygral ", kto_wygral(o1,o2))
    
        
    if(o1==0):w1 +=1 
    elif(o2==0):w2 += 1
        
    while True:

        print('kontynować? T/N')
        s=ms.getche().upper()
        if s==b'T':
            os.system("cls")
            print()
            print(f"g1:")
            break
        elif s==b'N':sys.exit(0)


