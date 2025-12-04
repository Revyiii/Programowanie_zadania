import msvcrt as m 

num1 = int(input("Prosze pierwszą liczbe: "))
num2 = int(input("Prosze pierwszą liczbe: "))
num1 %= num2 
if num1 == 0:print("podzielne")
else:print("nie podzielne")

m.getch() 