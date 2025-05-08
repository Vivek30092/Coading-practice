def main():
    number=int(input("enter number: "))
    factorial(number)

def factorial(x):
    for i in range(1,x+1):
        if x%i==0:
            print(i)

            
main()