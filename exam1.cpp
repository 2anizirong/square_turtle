#include <iostream>
#define SIZE 10
using namespace std;


int main() {
	int num[SIZE] = { 0 };

	cout << "10���� ���� �Է�" << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << "num[" << i << "] = ";
		cin >> num[i];
	}

	//int max_num = num[0];
	//int min_num = num[0];

	////�ִ�
	//for (int i = 0; i < SIZE; i++) {
	//	if (max_num <= num[i]) {
	//		max_num = num[i];
	//	}
	//	else {
	//		max_num = max_num;
	//	}
	//}

	////�ּڰ�
	//for (int j = 0; j < SIZE; j++) {
	//	if (min_num >= num[j]) {
	//		min_num = num[j];
	//	}
	//	else {
	//		min_num = min_num;
	//	}
	//}

	//cout << "�ִ�: " << max_num << ", " << "�ּڰ�: " << min_num << endl;


	int maxi = 0;
	int mini = 0;

	//�ִ�
	for (int i = 0; i < SIZE; i++) {
		if (num[maxi] <= num[i]) {
			maxi = i;
		}
		else {
			maxi = maxi;
		}
	}

	//�ּڰ�
	for (int j = 0; j < SIZE; j++) {
		if (num[mini] >= num[j]) {
			mini = j;
		}
		else {
			mini = mini;
		}
	}

	cout << "�ִ�: " << maxi << ", " << "�ּڰ�: " << mini << endl;

	//������ Ǯ��
	for (int i = 0, j = 0; i < SIZE; i++) {
		if (num[maxi] <= num[i]) {
			maxi = i;
		}
		if (num[mini] >= num[j]) {
			mini = j;
		}
	}
		

	return 0;
}