n=int(input())
arr=map(int,input().split())
res=0
for x in arr:
    res ^=x
print(res)