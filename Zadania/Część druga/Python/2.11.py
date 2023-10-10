import msvcrt as m
import sys
print("program do szukania minimalne liczby z ciągu liczb dwu cyfrowych")
print("aby zakończyć podawanie ciągu podaj liczbę 0")
while True:
    i = 0
    a=1
    min_val = 100
    while a != 0:
        
        i += 1
        while True:
            try:
                a=int(input('podaj liczbe:'))
                if abs(a) > 10 and abs(a) < 99:break
                if a==0:break   
                print("podana wartość jest nie poprawna")
            except ValueError:
                print('zła wartość')
                i=i-1
        if a == 0:
            break
        elif a < min_val: min_val=a
    print("minimalną liczbą z ciągu:")
    if min_val == 100:
        print("najmniejsza liczba ciągu należy do zbioru pustego")
    else:
        print("jest: ", min_val)
        
    while True:
        print('kontynować? T/N')
        s=m.getche().upper()
        if s==b'T':break
        elif s==b'N':sys.exit(0)
