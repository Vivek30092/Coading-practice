let fullName = prompt("Enter your full name:").toLowerCase();

// remove spaces from the name
let newName = fullName.replaceAll(" ", "");

let length = newName.length;
let userName = `@${newName}${length}`;

console.log(userName);
