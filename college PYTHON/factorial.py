def fact(a):
    if (a==0):
        return 1
    elif (a==1):
        return 1
    else:
        return a*fact(a-1)

n=int(input("Enter a number to find the factorial of: "))
a=fact(n)
print(a)
