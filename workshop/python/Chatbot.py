print("Hi I am student advisor chatbot")
n=input("May I know ur name")
print("Thank You!"+n)
print("I am here to explore you about the core courses req for the specialisations offered in KLU,CSE Dept\nHere are the specialisations pffered by KLU CSE Dept:")
print("1. Software Modeling & DevOps\n2. Internet of Things\n3. Clous Edge Computing\n4. Graphics, Gaming &UX Design\n5. Cyber security & Blockchain Technology\n6. Artificial intelligence & Intelligence process Automation\n7. Data Science & Big Data Analytics\n8. Computer Communication\n9. Exit\nHere are the Specialisations offered by KLCSE. Choose any Specialisation.")
e=int(input("Select any option"))
if(e==1):
    print("Global certification: PSM|Professional Scrum Master\nCore course in 2nd yr_1st sem: Software Engineering")
elif(e==2):
    print("Global certification: None\nCore course in 2nd yr_1st sem: None")
elif(e==3):
    print("Global certification: Linux Essesntial(010-160)\nCore course in 2nd yr_1st sem: Operating System Design")
elif(e==4):
    print("Global certification: Unity Developer Advance Certification\nCore course in 2nd yr_2nd sem: Enterprise Programming")
elif(e==5):
    print("Global certification: ETHEREUM developer Advance Certification\nCore course in 2nd yr_2nd sem: Computer Networks")
elif(e==6):
    print("Global certification: PCAP|Certifie Associate Python Programming\nCore course in 2nd yr_1st sem: Artificial Intelligence & Mathemetical Programming")
elif(e==7):
    print("Global certification: C100DEV:MangoDB Certified Developer Associate\nCore course in 2nd yr_1st sem: Data Base Management System")
elif(e==8):
    print("Global certification: None\nCore course in 2nd yr_1st sem: None")
elif(e==9):
    exit()
else:
    print("Please enter a valid number")