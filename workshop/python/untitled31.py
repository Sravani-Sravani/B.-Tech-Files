Num1=float(input("Enter first number:"))
Num2=float(input("Enter second number:"))
Num3=float(input("Enter third number:"))
if(Num1>Num2)and(Num1>Num3):
    print("largest is ",Num1)
elif(Num2>Num1)and(Num2>Num3):
    print("largest is ",Num2)
else:
    print("largest is ",Num3)
