// print hello world 5 times
for(let i=0;i<=5;i++){
    console.log("hello world")
}
console.log("loop ended")

// calculating sum of first 10 numbers
let sum = 0
let num 
num = prompt("enter number to calculate sum of first number")
for(let i = 0;i<=num;i++){
    sum+=i;
}
console.log("sum =",sum);

// while loop
let  i = 1;
while(i<=5){
    console.log("i =",i);
    i++;
}

// do-while
j = 1;
do{
    console.log("learning do-while");
    j++;
}while(j<=5);

// for-of loop
let str = "Harry&Hermione"
let size = 0;
for(let val of str){
    console.log(val);
    size++;
}
console.log("size of string is:",size);

// for-in loop
let student = {
    name : "Ron",
    age : 17,
    cgpa : 7.7,
    isPass : true
};

for(let key in student){
    console.log(key ,":",student[key]); 
}


// practice question : print all even number from 0 to 100
for(let i = 0;i<=100;i++){
    if(i%2===0){
        console.log(i)
    }
}

// practice question : number guessing[prompt user to guess name until it's wright]
let my_num = 14;
guess_number = prompt("Guess the game number:")

while(my_num != guess_number){
    guess_number = prompt("You entered wrong number. Guess again:")

}
console.log("you guessed wright")

