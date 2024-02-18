#include <iostream>
using namespace std;

void showTheTime(int hour, int min)
{
	cout << "Time: " << hour << ':' << min << endl;
}

int main()
{
	int hour, min;
	cout << "Enter the number of hours: ";
	cin >> hour;
	cout << "Enter the number of minutes: ";
	cin >> min;
	showTheTime(hour, min);
	return 0;
}