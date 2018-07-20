/**
 * @brief Assignment 1 Problem 1
 * @author Daidemang Francis
 */

// Get input from user 
var fourDigitNum = []; 
fourDigitNum = prompt("Enter a four digit number: ");

// Display result
fourDigitNum = fourDigitNum.reverse();
for (var i = 0; i < fourDigitNum.length; i++) {
	console.log(fourDigitNum[i]);
}
