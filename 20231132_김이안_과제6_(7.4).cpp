#include <iostream>
using namespace std;

int main() {
	const int SCORE = 100;			// �Է� ������ �ִ� ����
	double score[SCORE] = {};
	int i, n;
	double sum = 0, avg = 0;

	cout << "�Է��� ������ ����: ";
	cin >> n;

	if (n > SCORE) {
		cout << "�Է� ������ �ִ� ������ �ʰ��߽��ϴ�." << endl;

		return 0;
	}

	cout << endl;

	cout << "���� �Է�" << endl;
	
	for (i = 0; i < n; i++) {
		cout << "score[" << i << "]= ";
		cin >> score[i];

		sum += score[i];
	}

	avg = sum / n;			// ���

	cout << endl;

	cout << "������ ���: " << avg << endl;

	int count = 0;
	for (int i = 0; i < n; i++) {
		if (score[i] > avg) {
			count += 1;
		}
	}

	cout << "��հ� ���ų� ū ������ ��: " << count << endl;
	cout << "��պ��� ���� ���� ����: " << n - count << endl;

	return 0;
}