import os
import msvcrt as m 

print("Witaj w programie\n\n\n")
print("Naciśnij dowolny klawisz")
m.getch()
os.system("cls")

bok=5.875
print(\
"pole pow:", round(bok**2*6,2) ,\
"obj:", round(bok**3,2))

m.getch()