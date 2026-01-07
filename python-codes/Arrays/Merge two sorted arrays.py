n=int(input())
a=list(map(int,input().split()))
m=int(input())
b=list(map(int,input().split()))
a.sort()
b.sort()
i=j=0
res=[]
while i<n and j<m:
    if a[i]<b[j]:
        res.append(a[i])
        i+=1
    else:
        res.append(b[j])
        j+=1
res.extend(a[i:])
res.extend(b[j:])
print(res)