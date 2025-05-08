#program to check if given number is palindrome or not
def is_palindrome(num1):
    num1=str(num1)
    num2=num1[::-1]
    if(num1==num2):
        print("palindrome number")
    else:
        print("not palindrome")

def main():
    num1=int(input("enter an integer: "))
    is_palindrome(num1)

main()