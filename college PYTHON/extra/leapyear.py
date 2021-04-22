year=int(input("Enter an year to check if its a leap year: "))
if year%400==0 :
    print("Year is leap year")

elif year%100==0 :
    print("Year is not leap year")
    
elif year%4==0 :
    print("Year is leap year")
else:
    print("Not leap year")
