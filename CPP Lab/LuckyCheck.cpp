// Read in a single integer from cin. If it is 7, output "Lucky". If it is not 7, output nothing.
#include <iostream>
using namespace std;

int main()
{
    int luckyNum;
	cin >> luckyNum;
		
	if (luckyNum == 7) {
		cout << "Lucky";
	}	
	return 0;
}
