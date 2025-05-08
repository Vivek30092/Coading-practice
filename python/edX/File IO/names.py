name = []

with open("names.txt") as file:
    for line in file:
        name.append(line.rstrip())
        
for name in sorted(name,reverse=True):
    print(f"hello, {name}")