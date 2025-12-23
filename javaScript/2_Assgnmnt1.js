// Get user to input a number using prompt .Check number is a multiple of 5 or not.
// alert("hello coder.");   //one time popup

let num;
num = prompt("Enter a number: ");     //takes input

if (num%5===0){
    alert("number is multiple of 5. ")
    console.log(num,"is multiple of 5.")
}else{
    alert("number is not multiple of 5")
    console.log(num,"is not multiple of 5.")

}