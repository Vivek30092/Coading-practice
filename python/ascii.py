#to find the ASCII value of the character
def main():
    char=input("enter any character: ")
    ascii_value(char)   
    
def ascii_value(char):
    ans=ord(char)
    print(f'''ASCII character for {char} is {ans}. ''')

main()
