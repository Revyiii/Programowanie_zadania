import msvcrt as m 
import math as mm

a = float(input("Prosze podać a: "))
b = float(input("Prosze podać b: "))
c = float(input("Prosze podać c: "))
d = float(input("Prosze podać d: ")) 
if a == 0:
    if b==0:
        if c==d:print("Równanie tożsamośćowe") 
        else:print("Równanie sprzeczne")    
    else:print("x jest równy:", (d-c)/b)
else:
    c=c-d
    delta = b**2-(4*a*c)
    print("delta:", delta)
    if delta==0: print("x jest równy:", (-b)/(2*a))
    else:
        if delta>0:
            print("x1 jest równy:", (-b-mm.sqrt(delta))/(2*a))
            print("x2 jest równy:", (-b+mm.sqrt(delta))/(2*a))
        else: print("brak rozwiązań")
m.getch() 