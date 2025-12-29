let str = "Hello, World!";
let str2 = 'HARRY';

// length of string 
console.log(str.length);

// string indices
console.log(str[0]);


// Template Literals
let sentence = `This is a template literals`//backticks
console.log(sentence)
console.log(typeof sentence)        //string

// we can write variables with string using template literals
let fullName = {
    firstName : "Harry",
    lastName : "Potter",
};
let output = `Mr. ${fullName.lastName}'s full name is ${fullName.firstName} ${fullName.lastName}`
console.log(output);

// escape char
console.log("vivek \nChoudhary");
console.log("using \ttab");

// String Methods
console.log(str.toUpperCase());
console.log(str2.toLowerCase());

// string slice
console.log(str.slice(2,5));
console.log(str.slice(2)); //return full index after 2nd index

// concat strings
console.log(str.concat(str2));
console.log(str.concat(" ", str2));
console.log(str + " " + str2);

// replace string
console.log(str.replace("World", "Vivek"));
console.log(str2.replace("R","P"));   // Note : it only replace first occurence
console.log(str2.replaceAll("R","P"));

// charAt
console.log(str.charAt(4));