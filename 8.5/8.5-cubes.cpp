// cubes.cpp -- regular and reference arguments
#include <iostream>

double cube(double);
double refcube(double&);

int main(int argc, char const* argv[]) {
	using namespace std;
	double x = 3.0;

	cout << cube(x);
	cout << " = cube of " << x << endl;
	/* refcude(x + 3); --> double refcube(const double&);
	 * P215，编译器在两种条件下生成临时变量
	 * ·实参的类型正确，但不是左值
	 * ·实参的类型不正确，但可以转换为正确的类型  
	 */
	cout << refcube(x);
	cout << " = cube of " << x << endl;
	return 0;
}

double cube(double a) {
	a *= a * a;
	return a;
}

double refcube(double& ra) {
	ra *= ra * ra;
	return ra;
}
