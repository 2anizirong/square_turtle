#include <iostream>
#define SIZE 10
using namespace std;

int main() {
	int num[SIZE] = { 0 };

	cout << "10개의 정수 입력" << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << "num[" << i << "] = ";
		cin >> num[i];
	}

	int maxi = 0;

	for (int i = 0; i < SIZE; i++) {
		if (num[maxi] <= num[i]) {
			maxi = i;
		}
	}

	int tmp = num[maxi];
	num[maxi] = num[SIZE - 1];
	num[SIZE - 1] = tmp;

	return 0;
}