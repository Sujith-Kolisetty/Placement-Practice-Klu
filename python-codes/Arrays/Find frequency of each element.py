n=int(input())
arr=list(map(int,input().split()))
freq={}
for x in arr:
    freq[x]=freq.get(x,0)+1
for k,v in freq.items():
    print(k,-v)