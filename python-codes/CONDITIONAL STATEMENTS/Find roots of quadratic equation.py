import math 
a,b,c=map(int,input().split())
d=b*b-4*a*c

if d>0:
    r1=(-b+math.sqrt(d))/(2*a)
    r2=(-b-math.sqrt(d))/(2*a)
    print(r1, r2)
elif d==0:
    print(-b/2(*a))
else:
    print("nee puku")
