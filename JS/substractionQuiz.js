// Generate two random numbers
function randomNum () {
	return  Math.floor((Math.random() * 100) + 1);
}
var num2, num1 = randomNum(); 


// Swap num1 with num2 if num1 is < num2 
if (num1 < num2) {
	var temp = num1;
	num1 = num2;
	num2 = temp;
}

// Prompt the student to answer "what is num1 - num2" 
var answer = prompt("what is " + num1 + " - " + num2 + "? ");

// Grade the answer and display the result 
if (num1 - num2 === parseInt(answer)) {
	alert("You are correct. 🙉");
}
else {
	alert("You are wrong. 🙈" + num1 + " - " + num2 + " should be " + (num1 - num2));
}
