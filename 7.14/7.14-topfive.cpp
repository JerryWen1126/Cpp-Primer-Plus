// topfive.cpp -- handling an array of string objects
#include <iostream>
#include <string>
using namespace std;
const int SIZE = 5;

void display(const string[], int);

int main(int argc, char const* argv[]) {
	string list[SIZE];
	cout << "Enter your " << SIZE << " favourite astronomical sights:\n";
	for (int i = 0; i < SIZE; i++) {
		cout << i + 1 << ": ";
		getline(cin, list[i]);
	}
	cout << "Your list:\n";
	display(list, SIZE);

	return 0;
}

void display(const string sa[], int n) {
	for (int i = 0; i < SIZE; i++) {
		cout << i + 1 << ": " << sa[i] << endl;
	}
}
