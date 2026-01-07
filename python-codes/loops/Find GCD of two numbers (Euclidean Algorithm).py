a,b=map(int,input("enter two numbers with a space:").split())
while b:
    a,b=b,a%b
    print(a)