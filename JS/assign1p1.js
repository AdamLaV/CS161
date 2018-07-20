/**
 * @brief Assignment 1 Problem 1
 * @author Daidemang Francis
 */

// Get input from user  
var fourDigitNum = prompt("Enter a four digit number: ");

// Display result
console.log(fourDigitNum % 10);
for (var i = 0; i < 3; i++) {
	fourDigitNum /= 10;
console.log(Math.floor(fourDigitNum % 10));
}
