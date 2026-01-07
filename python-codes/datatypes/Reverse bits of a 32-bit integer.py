n=int(input())
rev=0
for _ in range(32):
    rev=(rev <<1) | (n&1)
    n>>=1
print(rev)