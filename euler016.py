
t=int(input(""))
for i in range(0,t):
    x=int(input(""))
    z=pow(2,x)
    y=0
    while z:
        y+=z%10
        z=z//10
    print(y)  
