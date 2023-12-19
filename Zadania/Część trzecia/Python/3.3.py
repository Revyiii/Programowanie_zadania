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
def get2():
    while True:
        try:
            x = int(input("wybor:"))
            break
        except ValueError:
            print("Cos nie tak")
    return x 
   

def rekurencja1(n):
    if(n==0):
        return 1
    else:
        return n*rekurencja1(n-1)
def rekurencja2(a,b):
    if(b==0):return a
    else: return:rekurencja2(b,a%b)
def rekurencja3(n)
    if(n==1 or n==2):return 1;
    else return rekurencja3(n-1)+rekurencja3(n-2)
def silnia(r):
    n=get2()
    if(r==1){return rekurencja1(n)}
    else:
        
def NWD(r):
def Fibonacci(r):
    
    
    
#main
print("Witam w zadaniu 3.3")
    while(true):
        print("Opcje: \n1.Silnia\n2.NWD\n3.Fibonacci")
        w=get(2)
        print("Opcje: \n1.Iteracyjnie \n2.Rekurencyjnie")
        r=get(3)
        if(w==1):print(f"silnia:{silnia(r)}")
        else if(w==2):print(f"NWD:{NWD(r)}")
        else if(w==3):print(f"Fibonacci:{Fibonacci(r)}") 
        