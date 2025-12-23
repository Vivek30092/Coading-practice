console.log("Hello world");
console.log("vivek kumar choudhary");
console.log("first file ")

// variables in JS

fullName = "John"
console.log(fullName)

// age = 23
// console.log(age)

price = 99.99
x = null 
y = undefined
console.log(x)
console.log(y)


let my_name = "vivek"
let age = 23;
console.log(my_name)

 


// JS is case sensitive 
fullName = "Vivek(small latter)";
FULL_NAME = "Golu(small latter)";

console.log(fullName);
console.log(FULL_NAME);

$myName = "Vivek"
_my_name = "nobody"

isTotal = false

// variable declaration
// let
let full_Name = "Hermione"
let myAge = 18;
myAge = 20;
const PI = 3.14
console.log(full_Name)

console.log(myAge)

let int = BigInt("246")
let SYMBOL = Symbol("hello!")


// Object : collection of values
let student = {
    mname : "Harry" ,
    age : 23 ,
    cgpa : 9.9,
    isPass : true
};
// access keys in object(2 ways)
console.log(student["mname"])
console.log(student.age)

// assign new values to key in object
student["age"] = student["age"] + 4 ;
student["mname"] = "Ron"

// type of data in object
console.log(typeof student["isPass"])