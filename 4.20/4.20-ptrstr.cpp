// ptrstr.cpp -- using pointers to strings
#define _CRT_SECURE_NO_WARNINGS

#include <cstring>
#include <iostream>

int main()
{
	using namespace std;
	char animals[20] = "bear";
	const char* bird = "wren";
	char* ps;

	cout << animals << " and ";
	cout << bird << "\n";
	//cout << ps << "\n";

	cout << "Enter a kind of animal: ";
	cin >> animals;
	//cin >> ps;

	ps = animals;
	cout << ps << "!\n";
	cout << "Before using strcpy():\n";
	cout << animals << " at " << (int*)animals << endl;
	cout << ps << " at " << (int*)ps << endl;
	cout << strlen(animals) + 1 << endl;
	ps = new char[strlen(animals) + 1];
	strcpy(ps, animals);
	cout << "After using strcpy():\n";
	cout << animals << " at " << (int*)animals << endl;
	cout << ps << " at " << (int*)ps << endl;
	delete[] ps;
	return 0;

}