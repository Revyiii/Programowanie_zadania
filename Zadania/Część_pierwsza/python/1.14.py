import msvcrt as m 
import secrets
temp={}
i=0
while i < 3:
    temp[i]=secrets.randbelow(90)/10+1
    i=i+1
print(temp)
i=0
while i<3:
    if temp[i]>=sum(temp.values())-temp[i]:i=4
    i=i+1
if i>=4:print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nnie można")
else:print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nmożna")

m.getch() 