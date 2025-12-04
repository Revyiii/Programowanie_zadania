import msvcrt as m 

bok=1.0
pole=1.0
i=0
while i < 3:
    try:
        bok = float(input("Prosze podac bok: "))
    except ValueError:
        print("podana wartosc jest niepoprawna\n")
        continue
    if bok < 0:
        
        print("podana wartosc jest niepoprawna\n")
    else:
        pole=pole*bok
        i += 1
print("pole prostokat to:",pole)
m.getch() 