def factorial(x):
    result=1
    for i in range(1,x+1):
        result=result*i
    show(result,x)
        
def main():
    number=int(input("enter number: "))
    factorial(number)


    
def show(result,number):
    print(f'''
    ====================================================
    factorial of {number} is {result}.
    ====================================================
    ''')



main()