/*
Vending Machine
Robert Smith
*/

#include <iostream>
#include <string>

using namespace std;
int main() {
	double total = 0.0;
	string coin = "";
	cout << "INSERT COIN \n (enter the name of the coin or 'q' to exit): ";

	while (1) {
		cin >> coin;
		//check the input to make sure it's actually a coin
		if (coin == "penny") {
			cout << "SERIOUSLY, WHO USES PENNIES\n" << total << endl;
		}
		else if (coin == "nickel") {
			total += .05;
			cout << total << endl;
		}
		else if (coin == "dime") {
			total += .1;
			cout << total << endl;
		}
		else if (coin == "quarter") {
			total += .25;
			cout << total << endl;
		}
		else if (coin == "q") {
			return 0;
		}
		else cout << "DON'T PUT FAKE COINS IN THE MACHINE\n";
	}
}