num=int(input("Enter to number to make it reverse: "))
a=0
res=1
while (num>0):
    res=num%10
    a=(a*10)+res
    num=num//10
print("The reverse of the number is ", a)