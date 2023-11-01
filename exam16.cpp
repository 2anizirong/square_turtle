#include <iostream>
#include "myproto11.h"
using namespace std;

int main6()
{
	int m, d, result = 0;
	char c;
	int days[] = {
		31, 28, 31, 30, 31, 30, 31, 31,
		30, 31, 30, 31
	};

	cin >> m >> c >> d;

	for (int i = 0; i < m - 1; i++)
		result += days[i];
	result += d;

	cout << result << endl;

	return 0;
}