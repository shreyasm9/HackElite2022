#Implement an algorithm to determine if a string has all unique characters. 
# What if you cannot use additional data structures?


#solution


def uc(str):                                  # defining functing to check enetred string is unique or not  
	for i in range(len(str)):
		for j in range(i+1,len(str)):
			if(str[i] == str[j]):
				return False;
	return True;
str = input("enter a string: ");              # taking input string from the user

if(uc(str)):
	print("true");
else:
	print("false");