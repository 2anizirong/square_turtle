#include <iostream>
using namespace std;

int main2()
{
	double pi4 = 0.0;
	int d = 1;
	int sign = 1;

	for (int i = 0; i < 10000; i++, d += 2, sign *= -1)
		pi4 += (1. / d) * sign;

	cout << pi4 * 4 << endl;

	return 0;
}