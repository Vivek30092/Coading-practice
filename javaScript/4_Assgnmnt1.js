companies = ["Bloomberg","Google","IBM","Uber","Microsoft","Netflix"];
// remove the first company from the array
// companies.splice(0,1);
companies.shift();
console.log(companies);

// remove Uber & add Ola in its place
companies.splice(2,1,"ola");
console.log(companies);

// add amazon at the end
// companies.splice(5,0,"Amazon");
companies.push("Amazon");
console.log(companies);