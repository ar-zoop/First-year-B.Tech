flag=0
for i in range(2,101):
    for j in range(2,(i//2)+1):
        if i%j==0:
            flag=-99
            break;
    if flag==0:
        print(i, " is prime")