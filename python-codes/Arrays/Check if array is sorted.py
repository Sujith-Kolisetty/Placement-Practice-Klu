n=int(input())
arr=list(map(int,input().split()))
print("Sorted" if arr==sorted(arr)else "not sorted")