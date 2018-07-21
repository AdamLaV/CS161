/**
  * @brief Assignment 1 Problem 2
  * @author Daidemang Francis
  */

var x1 = 5; 
var x2 = 6; 
var x3 = 7; 
var perimeter = (x1 + x2 + x3) / 2;
var area =  Math.sqrt(perimeter*((perimeter-x1)*(perimeter-x2)*(perimeter-x3)));
console.log(area);