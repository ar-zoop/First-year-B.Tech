flag=0
a=int(input("Enter a number to check if its prime: "))
for i in range (1,(a//2)+1):
    if a%i==0:
        print("not prime")
        flag=-99
        break;
        
if flag==0:
    print("prime")