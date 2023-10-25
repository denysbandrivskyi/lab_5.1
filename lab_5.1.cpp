// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double k(const double x, const double y) // визначення
{
	return ((x / (1 + pow(sin(y), 2))) + (y / (1 + x * x)));
}
int main()
{
	double p, q;
	cout << "p = "; cin >> p;
	cout << "q = "; cin >> q;
	double c = k((1 + (p * q)), (q * q)) + pow(k(p, p * p), 2);
	cout << "c = " << c << endl;
	return 0;
}
