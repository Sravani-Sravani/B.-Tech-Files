print("Water jug problem")
x=int(input("Enter x:"))
y=int(input("Enter y:"))
while True:
    rno=int(input("Enter the Rule No"))
    if rno==1:
        if x<4:
            x=4
    if rno==2:
        if y<3:
            y=3
    if rno==3:
        if x>0:
            x=0
    if rno==4:
        if y>0:
            y=0
    if rno==5:
        if x+y>=4 and y>0:
            y=y-(4-x)
            x=4
    if rno==6:
        if x+y>=3 and x>0:
            x=x-(3-y)
            y=3
    if rno==7:
        if x+y<=4 and y>0:
            x=x+y
            y=0
    if rno==8:
        if x+y<=3 and x>0:
            y=x+y
            x=0
    print("x=",x)
    print("y=",y)
    if(x==2 and y==0):
        print("The result is goal state")
        break
     #2,7,2,5,3,7   2 0
     #1,6,4,8,1,6   2,3
        