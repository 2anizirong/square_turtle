#include <iostream>
#include "def.h"
using namespace std;

int main() {
	int num_bin;

	cout << "2진수 입력:";
	cin >> num_bin;

	cout << bin2dec(num_bin, 1) << endl;

	return 0;
}

int bin2dec(int n, int power) {
	if (n == 0)return 0;
	return (n % 10) * power + bin2dec(n / 10, power * 2);
}