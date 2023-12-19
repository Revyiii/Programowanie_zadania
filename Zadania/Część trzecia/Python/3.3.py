import msvcrt as ms
import sys

def get(max):
    while True:
        try:
            x = int(input("wybor:"))
            if 1<=x and x<=max:
                break
            else:
                print("liczba poza zakresem")
        except ValueError:
            print("wartosc nieprawidlowa")
    return x
def inputt(n):
    while True:
        try:
            x = int(input(f"podaj {n}:"))
            break
        except ValueError:
            print("Cos nie tak")
    return int(x) 
   
def rekurencja1(n):
    if(n==0):
        return 1
    else:
        return n*rekurencja1(n-1)
def rekurencja2(a,b):
    if(b==0):return a
    else: return rekurencja2(b,a%b)
def rekurencja3(n):
    if(n==1 or n==2): return 1
    else: return rekurencja3(n-1)+rekurencja3(n-2)
def silnia(r):
    n=inputt('n')
    print("silnia:")
    if(r==1):return rekurencja1(n)
    elif(r==2):
        i,s=1,1
        while(i<=n):
            s=s*i
            i = i+1
        return s        
def NWD(r):
    a=input('a')
    b=input('b')
    print("nwd:")
    if (r==1):a=rekurencja2(a,b)			
    elif(r==2):
        t=0
        while(t!=1):
            c=a%b
            a=b
            b=c
            if(b!=0):t=1     
            return a

def Fibonacci(r):
    n=input('n')	
    print("Fibonacci:")
	
    if (r==1):
        n=rekurencja3(n)
        return n			
    elif(r==2):
        i = 0
        a=0
        b=1
        c=0
        while (n>i):
            c=a+b
            a=b
            b=c
            i=i+1
        return a 
    
#main
print("Witam w zadaniu 3.3")
while True:
    print("Opcje: \n1.Silnia\n2.NWD\n3.Fibonacci")
    w=get(2)
    print("Opcje: \n1.Rekurencyjnie \n2.Iteracyjnie")
    r=get(3)
    if(w==1):print(f"{silnia(r)}")
    elif(w==2):print(f"{NWD(r)}")
    elif(w==3):print(f"{Fibonacci(r)}") 

    while True:
        print('kontynować? T/N')
        s=ms.getche().upper()
        if s==b'T':
            print()
            break
        elif s==b'N':sys.exit(0)

        