n=int(input())
for i in range(n):
    print(' '.join(" "*(n-i-1)+"*"*(2*i+1)))
for i in range(n-2,-1,-1):
    print(' '.join(" "*(n-i-1)+"*"*(2*i+1)))