// fun_ptr.cpp -- pointers to functions
#include <iostream>
double betsy(int);
double pam(int);

void estimate(int, double (*)(int));

int main(int argc, char const* argv[]) {
	using namespace std;
	int code;
	cout << "How many lines of code do you need? ";
	cin >> code;
	cout << "Here's Betsy's estimate:\n";
	estimate(code, betsy);
	cout << "Here's Pam's estimate:\n";
	estimate(code, pam);
	return 0;
}

double betsy(int lns) {
	return 0.03 * lns + 0.0004 * lns * lns;
}

double pam(int lns) {
	return 0.05 * lns;
}

void estimate(int lines, double(*pf)(int)) {
	using namespace std;
	cout << lines << " lines will take ";
	cout << pf(lines) << " hour(s)\n";
	// (*pf)(lines) keeps the same output.
}
