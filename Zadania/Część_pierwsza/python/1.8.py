import os
import msvcrt as m 

name = input("Prosze podac imie użytkownika:")
a = float(input("Prosze podac liczbe a:"))
b = float(input("Prosze podac liczbe b:"))
c = float(input("Prosze podac liczbe c:"))
print("średnia:", (a+b+c)/3,"\nimię użytkownika:",name)
m.getch()   
