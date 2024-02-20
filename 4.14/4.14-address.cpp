// address.cpp -- using the & operator to find address
#include <iostream>
int main()
{
	using namespace std;
	double cups = 4.5;
	int donuts = 6;
	

	cout << "donuts value = " << donuts;
	cout << " and donuts address = " << &donuts << endl;
	cout << "cups value = " << cups;
	cout << " and cups address = " << &cups << endl;
	cout << sizeof(int) << " " << sizeof(double);
	return 0;
}