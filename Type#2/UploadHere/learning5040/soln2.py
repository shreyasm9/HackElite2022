string = input("Enter your name:")
a = string.upper()
h = True
for i in range(len(a)):
    for j in range(len(a)):
        if i != j:
            if a[i] == a[j]:
                h = False
            else:
                continue
print(h)
