char=input("Enter the input:-")

alp=char.lower()

count=0

for i in range(len(alp)):

    for j in range(i+1,len(alp)):

        if alp[i]==alp[j]:

            count=count+1        

if count==0:

    print("True")

else:

    print("False")