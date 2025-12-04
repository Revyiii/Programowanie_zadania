import os
import msvcrt as m 

a = float(input("Prosze podac bok a:"))
b = float(input("Prosze podac bok b:"))
c = float(input("Prosze podac bok c:"))
print(\
"obj:", round(a*b*c,2),\
"\npole pow:", round(2*(a*b+a*c+b*c),2) ,\
"\nsuma krawedzi:",round(4*(a+b+c),2))
m.getch() 