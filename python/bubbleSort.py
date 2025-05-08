aList = [30,14,27,5,19,20]
print("original list is :",aList)

n = len(aList)
for i in range(n):
    for j in range(0,n-i-1):
        if aList[j]>aList[j+1]:
            aList[j],aList[j+1]=aList[j+1],aList[j]
print(aList)