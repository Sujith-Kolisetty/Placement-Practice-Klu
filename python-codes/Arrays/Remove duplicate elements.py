n=int(input())
arr=list(map(int,input().split()))
unique=[]
for x in arr:
    if x not in unique:
        unique.append(x)
print(*unique)