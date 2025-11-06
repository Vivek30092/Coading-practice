// if-else statement
let age= 20;
if (age > 18){
    console.log("you can vote")
}else{
    console.log("you can't vote until ",18-age,"years :(")
};


// odd-even
let number = 14;
if(number%2===0){
    console.log("even");
}else{
    console.log("odd");
};


// else-if statement
let mode = "dark";
let color ;

if(mode === "dark"){
    color = "black";
}else if (mode === "blue"){
    color = "blue";
}else{
    color = "light";
}

console.log(color)


// single if 
if (age>18) {
    console.log("adult");
}

// compact if-else
// age > 18 ? console.log("adult") : console.log("not adult");
result = age > 18 ? "adult" : "not adult";
console.log(result);