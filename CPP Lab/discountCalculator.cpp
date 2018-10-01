//Orders from a company that cost $100 or more get a 10% discount. Orders less than $100 do not get a discount.
//Read in an decimal value representing the undiscounted order price, and print out what the order should cost.
#include <iostream>
using namespace std;

int main()
{
    double orderPrice, discount;
	cout << "Enter Order Price: ";
	cin >> orderPrice;
	
	if (orderPrice >= 100) {
		discount =  orderPrice * 10 / 100 ;
		orderPrice -= discount;
		cout << orderPrice;
	}
	else if (orderPrice < 100) {
		cout << orderPrice;
	}
}
