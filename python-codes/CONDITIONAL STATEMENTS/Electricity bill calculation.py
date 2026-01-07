units=int(input())
if units<=100:
    bill=units*1
elif units<=200:
    bill=units*2
else:
    bill=units*5
print(bill)