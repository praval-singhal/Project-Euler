a=[1,2]
b=[2]
i=2
s=0
while a[i-1]+a[i-2]<=4e18:
    j=a[i-1]+a[i-2]
    if j%2==0:
        b.append(j)
        s=s+1
    a.append(j)
    i=i+1

t=int(input(""))
while t>0:
    n=int(input(""))
    i=0
    j=0
    while b[i]<=n:
        j=j+b[i]
        i=i+1
    print(j)
    t=t-1
