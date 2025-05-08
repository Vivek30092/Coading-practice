def main():
    number = int(input("enter num:"))
    print(fact(number))


def fact(num):
    while num > 0:
        if num == 1:
            return 1
        else:
            
            return num * fact(num - 1)


main()
