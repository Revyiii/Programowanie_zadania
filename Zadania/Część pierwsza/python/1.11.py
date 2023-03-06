import msvcrt as m 

a = float(input("Prosze podać a: "))
b = float(input("Prosze podać b: "))
c = float(input("Prosze podać c: ")) 

if a == 0:
    if b==c:print("Równanie tożsamośćowe") 
    else:print("Równanie sprzeczne")    
else:print("x jest równy:", (c-b)/a)
m.getch() 