print("Water Jug Problem")
a=int(input("enter a value:"))
b=int(input("enter b value:"))
c=int(input("enter c value"))
while True:
    ruleno=int(input("enter the ruleno:"))
    if(ruleno==1):
        if a<12 :
            a=12
    if(ruleno==2):
        if a+b<12 and c>0 :
            a,b,c=a,a-c,8-a
    if(ruleno==3):
        if a==12 and b+c==0:
            a,b,c=12-8,8,c
    if(ruleno==4):
        if a+b==12 and c==0:
            a,b,c=a-5,b,5
    if(ruleno==5):
        if a+b==8 and c>0:
            a,b,c=8,12-(b+c),c                        
    if(ruleno==6):                                                      
        if a+b>8 and c>0:
            a,b,c=a+b,8-b,c;
    if(ruleno==7):
        if a+b<8 and c>0:
            a,b,c=a,8,c-b