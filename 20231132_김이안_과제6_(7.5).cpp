#include <iostream>
using namespace std;

int main() {
	const int NUM = 10;
	int n[NUM] = {};

	cout << "10개의 숫자 입력: ";
	for (int i = 0; i < NUM; i++) {
		cin >> n[i];
	}


    for (int i = 0; i < NUM; i++) {
        for (int j = i + 1; j < NUM; j++) {
            if (n[i] == n[j]) {
                n[j] = -1;
            }
        }
    }

    cout << "중복된 숫자를 제외한 결과: ";
    for (int i = 0; i < NUM; i++) {
        if (n[i] != -1) {
            cout << n[i] << " ";
        }
    }

	return 0;
}