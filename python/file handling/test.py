count = int(input("enter number of students in the class : "))
fileout = open("Marks.dat","w")

for i in range(count):
    print(f"enter details of student {i+1} ")
    name = input("enter your name : ")
    roll_num = int(input("roll number : "))
    marks = float(input("enter your marks : "))
    rec = str(roll_num)+"," +name+ "," +str(marks)+'\n'
    
    fileout.write(rec)
    
fileout.close()