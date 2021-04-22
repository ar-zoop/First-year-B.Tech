def fib(a):
    if a==0:
        return 0;
    elif a==1:
        return 1;
    else:
        return (fib(a-1)+fib(a-2))


n=int(input("Enter how many digits you want to print for fibonacci: "))
for i in range(0,n):
    a=fib(i)
    print(a)