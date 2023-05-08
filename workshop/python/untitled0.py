s="aRTificial INTELLIgence" 
print("1. Convert the input string into upper case.") 
print("2. Convert the input string into lower case.") 
print("3. Check whether all the characters of the input string are in upper case.") 
print("4. Check whether all the characters of the input string are in lower case.") 
print("5. Replace the string INTELLIgence by Neural Network.") 
print("6. Check whether the given string starts with “T”.") 
print("7. Check whether the given string ends with “e”.") 
print("8. Convert the first letter of the input string into capital letter.") 
print("9. Convert the lower-case characters to upper case and vice versa.") 
print("choose an op ")
ch=int(input("Choose any option :")) 
output={ 
 1:s.upper(), 
 2:s.lower(), 
 3:s.isupper(), 
 4:s.islower(), 
 5:s.replace("INTELLIgence","Neural Network"), 
 6:s[0]=='T', 
 7:s[-1]=='e', 
 8:s.capitalize(), 
 9:s.swapcase(), 
} 
print(output[ch]) 
