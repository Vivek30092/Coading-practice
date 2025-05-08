students = []

with open("students.csv") as file:
    for line in file:
        name,home = line.rstrip().split(",")
        student = {"name":name, "home":home}
        students.append(student)
        
def get_name(student):
    return student["name"]



# anonyms function
# for student in sorted(students, key = lambda student : student["name "]):

for student in sorted(students, key = get_name):
    print(f"{student['name']} is in {student['home']}")