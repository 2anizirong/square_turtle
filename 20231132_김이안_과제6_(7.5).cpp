#include <iostream>
using namespace std;

int main() {
	const int NUM = 10;
	int n[NUM] = {};

	cout << "10���� ���� �Է�: ";
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

    cout << "�ߺ��� ���ڸ� ������ ���: ";
    for (int i = 0; i < NUM; i++) {
        if (n[i] != -1) {
            cout << n[i] << " ";
        }
    }

	return 0;
}