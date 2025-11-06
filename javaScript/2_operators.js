// single line comment
/* multi
line 
comment */

// Arithmetic operators
let a = 2;
let b = 1;

console.log("a + b:",a+b);
console.log("a - b:",a-b);
console.log("a * b:",a*b);
console.log("a / b:",a/b);
console.log("a % b:",a%b);      //modulo ope.
console.log("b ** a",a**b);     //exp ope.

// unary operator
console.log(a++);   //postIncrement
console.log(++a);  //preIncrement
console.log(a);


// Assignment Operator
console.log("a + 5:",a+=5);
console.log("a - 5:",a-=5);  
console.log("a * 5:",a*=5);  
console.log("a / 5:",a/=5);  


// comparison operators
console.log(5==5);
console.log(5!=5);
console.log(5!="5"); //first string implicitly converted to number then compare 
console.log(5==="5"); //strict version to compare
console.log(5!=="5"); //strict version to compare

console.log(5>3);
console.log(5<3);


// Logical Operators(ans. True or False)
// for && both condition should be true
console.log((5>4) && (10>9))  //true
console.log((5<4) && (10>9))  //false

// for || any one condition can be true
console.log((5<4) || (10>9))  //true
console.log((5<4) || (10<9))  //false

// ! logical not inverse the answer
console.log(!(5<4))  //true


// if, else-if, else operator


// Ternary Operators
age > 18 ? "adult" : "not adult";


