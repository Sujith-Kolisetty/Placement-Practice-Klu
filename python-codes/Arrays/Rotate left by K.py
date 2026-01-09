n=int(input())
arr=list(map(int,input().split()))
k=int(input())
k%=n
print(arr[k:]+arr[:k])