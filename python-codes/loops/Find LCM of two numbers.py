a,b=map(int,input().split())
x,y=a,b
while y:
    x,y=y,x%y
lcm=(a*b)//x
print(lcm)
