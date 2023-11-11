#include <iostream>
using namespace std;

int main() {
	const int SIZE = 10;
	int num[SIZE] = {};

	cout << "10개의 정수 입력: ";
	for (int i = 0; i < SIZE; i++) {
		cin >> num[i];
	}

	for (int i = 0; i < SIZE - 1; i++) {
		for (int j = i + 1; j < SIZE; j++) {
			cout << "(" << num[i] << ", " << num[j] << ")" << endl;
		}
	}

	return 0;
}