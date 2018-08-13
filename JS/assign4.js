let balance = 1000;
let payment = 150;
let APR = 19.9, interestRate = 0, month = 0;

// Compute output
console.log('Month  ' + ' int    ' + ' Pay ' + ' balance ');

while (interestRate >= 0) {
	console.log(month + '      ' + interestRate.toPrecision(3) + '    ' + payment + '    ' + balance.toPrecision(4));
	month++
	interestRate = (APR / 100) / 12 * balance;
	balance = balance - payment + interestRate;
}
