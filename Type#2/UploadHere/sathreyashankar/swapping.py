# Problem 3
# Given two values of the same type, swap both the values.

first = input("Enter a value: ")
second = input("Enter another vaue of same type as first value: ")
print("Before Swapping: a = ", first, ", b = ", second)
first, second = second, first
print("After Swapping: a = ", first, ", b = ", second)
