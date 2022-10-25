from multiprocessing.pool import TERMINATE


cha=input("Enter the input ")
ch=cha.lower()
count=0
for i in range(len(ch)):
    for j in range(i+1,len(ch)):
        if ch[i]==ch[j]:
            count=count+1        
if count==0:
    print("true")
else:
    print("False")