#include <iostream>
#include "def.h"
using namespace std;

int main() {
	int num_dec;

	cout << "10���� �Է�:";
	cin >> num_dec;

	dec2bin(num_dec);

	return 0;
}

//void dec2bin(int n) {
//	while (n >= 1) {
//		int t = 0;
//
//		t = n % 2;
//		n = n / 2;
//
//		cout << t;
//	}
//	// ���� �ٲٱ�
//}

void dec2bin(int n) {
	if (n > 2) cout << n;

	dec2bin(n / 2);
	cout << n % 2;
}