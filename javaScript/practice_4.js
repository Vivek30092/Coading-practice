// take input for marks and give grades
marks = prompt("Enter your total marks out of 100:")

if ((marks <= 100) && (marks >= 0)){
    alert("valid number...result generated.");
    if((marks<=100) && (marks >= 90)){
        console.log("A");
    }else if((marks<=89) && (marks >= 70)){
        console.log("B");
    }else if((marks<=60) && (marks >= 69)){
        console.log("C");
    }else if((marks<=50) && (marks >= 59)){
        console.log("D");
    }else{
        console.log("F");
    }
}else{
    alert("enter valid number.");
}