// single line comment
/* multi
line 
comment */

// Arithmetic operators
let a = 2;
let b = 5;

console.log("a + b:",a+b);
console.log("a - b:",a-b);
console.log("a * b:",a*b);
console.log("a / b:",a/b);
console.log("a % b:",a%b);      //modulo ope.
console.log("a ** b:",a**b);     //exp ope.

// unary operator
console.log(a++);   //postIncrement  (2)
console.log(++a);  //preIncrement   (4)
console.log(a);    //               (4)


// Assignment Operator
console.log("a + 5:",a+=5);
console.log("a - 5:",a-=5);  
console.log("a * 5:",a*=5);  
console.log("a / 5:",a/=5);  


// comparison operators
console.log(5==5);   //true
console.log(5!=5);      //false
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

// ternary operator
let age = 14 ;
console.log(age > 18 ? "can drink" : "can drink but be cautious " ); 
