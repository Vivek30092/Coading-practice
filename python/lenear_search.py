element = int(input("enter element to search: "))
l1 = [1,4,2,7,3,8,9]


for i in range(len(l1)):
    if l1[i]==element:
        print(f"found element at {i+1} position")
    else:
        print("not found")