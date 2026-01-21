n=int(input())
arr=list(map(int,input().split()))
arr.sort()
print(arr[0])
sum=0
for i in arr:
    sum+=i
print(sum)