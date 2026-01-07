n=int(input())
arr=list(map(int,input().split()))
even = odd=0
for x in arr:
    if x%2==0:
        even+=1
    else:
        odd+=1
print(even, odd)