list1=[1,4,3,5,7,9,0,6,10,5]
list2=["vivek","kumar","zx"]
list3=["morning",14,3.0]
list4=["python",20,["neil armstrong","adwin buzz aldrin"]]

#to copy the list  usinf [:] operator
list1_copy=list1[:]    
print(list1_copy)

#to copy the list using built in copy function
from copy import copy
list2_copy=copy(list2)
print(list2_copy)

#adding element(1430) in list 
list1.append(1430) 
print(list1)

#traversing through list and also updating value
for _ in range(len(list1)):
    print(list1[_] + 10)


#deleting elements from list
        #using pop function which deletes value and store it for future use 
print(list1.pop(0))       #this will show appended value at index 0
print(list1)
        #using remove operator to remove element from list without knowing its index
list1.remove(1430)
print(list1)
        #using del operator which deletes value on provided index but don't store the value for further use
# del list1(2)
# print(list1)      #showing syntax error

#built in list operator 
print(list1+list2)
print(list1*2)
print([6,4]*3)
print("vivek" in list2)
print("vive" in list2)


#built in list method
print(max(list1))
print(min(list1))
list1.append(3)       #add element at the end of the list
list1.count(10)       #returns no of time the item occurs in the list