// strquote.cpp -- different designs
#include <iostream>
#include <string>

using namespace std;

string version1(const string&, const string&);
const string& version2(string&, const string&);
const string& version3(string&, const string&);

int main(int argc, char const* argv[]) {
	string input;
	string copy;
	string result;

	cout << "Enter a string: ";
	getline(cin, input);
	copy = input;
	cout << "Your string as entered: " << input << endl;
	result = version1(input, "***");
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string: " << input << endl;
	
	result = version2(input, "###");
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string: " << input << endl;

	cout << "Resetting original string.\n";
	input = copy;
	result = version3(input, "@@@");
	cout << "Your string enhanced: " << result << endl;
	cout << "Your original string: " << input << endl;
	return 0;
}

string version1(const string& s1, const string& s2) {
	string temp;
	temp = s2 + s1 + s2;
	return temp;
}

const string& version2(string& s1, const string& s2) {
	s1 = s2 + s1 + s2;
	return s1;
}

const string& version3(string& s1, const string& s2) {
	string temp;
	temp = s2 + s1 + s2;
	// warning C4172: 返回局部变量或临时变量的地址: temp
	//cout << temp << endl;
	return temp;
}
