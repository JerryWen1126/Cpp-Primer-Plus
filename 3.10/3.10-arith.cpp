// arith.cpp -- some C++ arithmetic
#include <iostream>
int main()
{
	using namespace std;
	float hats, heads;

	cout << "Enter a number: ";
	cin >> hats;
	cout << "Enter another number: ";
	cin >> heads;

	cout << "hats = " << hats << "; heads = " << heads << endl;
	cout << "hats + heads = " << hats + heads << endl;
	cout << "hats - heads = " << hats - heads << endl;
	cout << "hats * heads = " << hats * heads << endl;
	cout << "hats / heads = " << hats / heads << endl;
	cout << 120 / 4 * 5;
	return 0;
}