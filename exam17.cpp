#include <iostream>
#include "myproto11.h"
using namespace std;

int main7()
{
	for (double x = 0.0; x <= 3.0; x += 0.001) {
		if (f(x) * f(x + 0.001) < 0) {
			cout << (x + x + 0.001) / 2 << endl;
			break;
		}
	}

	return 0;
}

double f(double x)
{
	return 3 * x * x * x - 7 * x - 11;
}