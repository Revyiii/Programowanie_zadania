import os
import msvcrt as m 

r = float(input("Prosze podac bok r:"))
h = float(input("Prosze podac bok h:"))
pi = float(3.14)
print(\
"obj:", round(pi*r*r*h,2),\
"\npole pow:", round(2*pi*r*(r+h),2) ,\
"\nsuma krawedzi:",round(4*pi*r,2))
m.getch() 