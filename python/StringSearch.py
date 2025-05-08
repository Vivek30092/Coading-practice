string="vivek Kumar"
size=len(string)
i=0
def search(string,i):
    while(i<size):
        if string[i]=='u':
            return i
    i=i+1
    return -1

search(string,i)    