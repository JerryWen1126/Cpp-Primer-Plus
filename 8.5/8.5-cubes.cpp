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
	 * P215��������������������������ʱ����
	 * ��ʵ�ε�������ȷ����������ֵ
	 * ��ʵ�ε����Ͳ���ȷ��������ת��Ϊ��ȷ������  
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
