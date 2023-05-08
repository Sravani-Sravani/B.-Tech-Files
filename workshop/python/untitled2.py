int x=4,y=3
if(x<4):
    x=4
elif(y<3):
    y=3
elif(x>0):
    x=0
elif(y>0):
    y=0
elif(y>0):
    x=4
elif(x+y>=4):
    y=y-(4-x)
elif(x>0):
    y=3
elif(x+y>=3):
    x=x-(3-y)
elif(y>0):
    y=3
elif(x+y<=4):
    x=x+y
elif(x+y<=3):
    y=x+y
print(x,y)

