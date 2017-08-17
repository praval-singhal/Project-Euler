a=[1]

for i in range(1,1001):
    a.append(a[i-1]*i);
    
t=int(input(""))
for u in range(0,t):
    n=int(input(""))
    x=a[n]
    
    y=0
    while x:
        y=y+x%10
        x=x//10
        
    print(y)    
