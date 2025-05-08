import sys
lst = eval(input("enter list: "))
print("given list is : ", lst)
def main():
    print(f"""
program to perform list operations
1. append
2. insert at perticular index
3. remove element
4. show list
5. exit
select an option:""")
    choice = int(input())
    if choice == 1:
        lst.append(input("enter element to append: "))
        print(lst)
    elif choice == 2:
        lst.insert(int(input("enter index: ")), input("enter element to insert: "))
        print(lst)
    elif choice == 3:
        try:
            lst.remove(input("enter element to remove: "))
            print(lst)
        except ValueError:
            print("element not found in list")
    elif choice == 4:
        print(lst)
        print("exiting...")
        sys.exit()
        
        
main()