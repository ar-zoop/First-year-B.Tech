sum=0
for i in range (0,5):
    a=int(input("Enter marks of the student: "))
    sum+=a
    if (a>60):
         print("First division")
    elif(a>50):
        print("Second division")
    elif(a>40):
        print("Third divisiom")
    else:
        print("Fail")
            
print(sum/5)
