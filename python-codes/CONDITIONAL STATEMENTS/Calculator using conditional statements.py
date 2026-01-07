a,b=map(int,input().split())
op=input()
if op=='+':
    print(a+b)
elif op=='-':
    print(a-b)
elif op == '*':
    print(a * b)
elif op == '/':
    print(a / b if b != 0 else "Error")
else:
    print("Invalid Operator")
    