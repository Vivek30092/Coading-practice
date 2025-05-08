import csv
students = []

with open("students.csv") as file:
    # reader function return list
    # reader = csv.reader(file)
    # for name,home in reader:
    #     students.append({"name":name,"home":home})
        
    # Dictreader returns dictionary
    reader = csv.DictReader(file)
    for row in reader:
        students.append({"name":row["name"],"home":row["home"]})
        


for student in sorted(students, key = lambda student : student['name']):
    print(f"{student['name']} is in {student['home']}")