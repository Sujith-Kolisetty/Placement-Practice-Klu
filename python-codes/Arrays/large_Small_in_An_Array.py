n=int(input())
arr=list(map(int,input().split()))
small=large=arr[0]
for x in arr:
    if x<small:
        small=x
    if x>large:
        large=x
print(small,large)
