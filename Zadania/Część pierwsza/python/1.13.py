import msvcrt as m 
temp={}
i=0
while i < 3:
    try:
        num1 = int(input("Prosze podac liczbe: "))
    except ValueError:
        print("podana wartosc jest niepoprawna")
        continue
    temp[i] = num1
    i=i+1
i=0
while i<3:
    if temp[0]<temp[i]:temp[0]=temp[i]
    i=i+1

print("Maksymalna liczba to:",temp[0])

m.getch() 