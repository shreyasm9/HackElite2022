#type#2 - question 3
#Given 2 values of same type swap both the values

#solution

a=input("Enter value for a :")     #by default input is taken as string
b=input("Enter value for b :")
a,b = b,a                          #swapping 
print(f"a = {a} b = {b}")