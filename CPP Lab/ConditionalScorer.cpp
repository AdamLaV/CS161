//  Read in two integers from the console. If they are different, print their sum. If they are the same, print double their sum.
#include <iostream>
using namespace std;

int main()
{
    int sumOne, sumTwo, total;
	cin >> sumOne >> sumTwo;
	
	if (sumOne != sumTwo) {
		total = sumOne + sumTwo;
		cout << total;
	}
	else if (sumOne == sumTwo) {
		total = (sumOne + sumTwo) * 2;
		cout << total;
	}
}
