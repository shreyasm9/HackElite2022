#Implement an algorithm to determine if a string has all unique characters. 
# What if you cannot use additional data structures?


#solution

def UC(str):
    setstr = set(str)           #set is a collection of unique characters.
    if(len(setstr)==len(str)):  #if the string length of input string is equal to string length of setstr then input string has unique characters
        return True
    return False

str=input("Enter a string: ")
if (UC(str)):
    print("True!!!")
else:
    print("False!!")