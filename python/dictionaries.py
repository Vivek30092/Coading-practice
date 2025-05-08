dict1={
    "vivek" : "kumar",
    "himanshu" : "kumar",
}

dict2={
    "abhishek" : "daya",
    "anil" : "yadav"
}

#newDict=dict1|dict2

newDict={**dict1,**dict2}
#print(newDict)


dict1.update(dict2)
print(dict1)