n=int(input())
arr=list(map(int,input().split()))
max_value=arr[0]
for x in arr: 
    if x> max_value:
        max_value=x
print(max_value)

