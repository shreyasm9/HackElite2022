#  Problem 2
#  Implement an algorithm to determine if a string has all unique characters.

user_input = input("Enter any string here: ")
strng = user_input.upper()
unique = set(strng)

if(len(unique) == len(strng)):
    print(True)
else:
    print(False)
    