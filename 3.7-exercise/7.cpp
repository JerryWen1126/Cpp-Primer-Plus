#include <iostream>

using namespace std;
int main(int argc, char* argv[])
{
	double gas;
	const double milesPer100km = 62.14;
	const double litersPerGal = 3.785;
	cout << "Enter your car's consumed gas per 100km in liter: ";
	cin >> gas;
	cout << "Your car can drive " << litersPerGal * milesPer100km / gas << " miles per gallon.";
	return 0;
}