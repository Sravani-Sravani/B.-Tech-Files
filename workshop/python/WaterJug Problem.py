print("Water jug Problem")
x=int(input("Enter x:"))
y=int(input("Enter y:"))
while True:
    rno=int(input("Enter the rule no:"))
    if rno==1:
        if x<5:
            x=5
    if rno==2:
        if y<4:
            y=4
    if rno==3:
        if x>0:
            x=0
    if rno==4:
        if y>0:
            y=0
    if rno==5:
        if x+y>=5 and y>0:
            y=y-(5-x)
            x=4
    if rno==6:
        if x+y>=4 and x>0:
            x=x-(4-y)
            y=4
    if rno==7:
        if x+y<=5 and y>0:
            x=x+y
            y=0
    if rno==8:
        if x+y<=4 and x>0:
            y=x+y
            x=0
    print("x=",x)
    print("y=",y)
    if (x==2) and (y>=0 or y<=3):
        print("The result is goal state")
        break