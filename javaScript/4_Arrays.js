let marks = [34, 23, 24, 93, 73, 25];
console.log(marks); 

// lenth of array
console.log(marks.length);

// array indices
console.log(marks[0]);

// looping over array
for(let i = 0;i<marks.length;i++){
    console.log(marks[i])
}

// looping using for-of
name_list = ["Harry","Ron","Hermione","Draco","Nevil","Dean","Fred","George"];
for(let name of name_list){
    console.log(name.toUpperCase());
}

// practice question 01 : to find avg of class by given array
let class_marks = [85,97,44,37,76,60];
let sum = 0;
// for(let mark in class_marks){
//     sum+=class_marks[mark];

// }
for (let marks of class_marks){
    sum += marks
}
console.log(`avg marks of the class is :`,sum/class_marks.length);



// practice question 02 : for a given array with prices, all items have an offer of 10% OFF on them. Change the array to store final price after applying offer.
// for-of only gives value not index
let ini_price = [250,645,300,900,50];

// using for-of loop
// let idx=0;
// for(let price of ini_price){
//     let offer = price/10;
//     ini_price[idx] -= offer
//     idx++;
// }
// console.log(ini_price)

// using for loop
for(let i = 0;i<ini_price.length;i++){
    let offer = ini_price[i]/10;
    ini_price[i] -= offer;
}
console.log(ini_price)

// Array methods
let foodItems = ["potato","apple","litchi"]
foodItems.push("chips","Cookies")
console.log(foodItems);
console.log(foodItems.toString());

// concat array
let Vth_sem =["OS","DBMS","DL","NLP"];
let VIth_sem = ["TOC","CS"];
let IIIrd_year = Vth_sem.concat(VIth_sem);
console.log(`3rd year subjects are : `,IIIrd_year)

// unshift 
Vth_sem.unshift("Minor Project")
console.log(Vth_sem)
// shift
console.log(VIth_sem.shift());

// slice
console.log(Vth_sem.slice(0,2));

// splice
let test_array = [1,2,3,4,5,6,7,8,9,10]
test_array.splice(2,5,10,20,30,40,50);
console.log(test_array);
test_array.splice(3,0,3.5);         // add element 
test_array.splice(3,1);             //delete element
// if passed only one index then it delete all element after that index 



