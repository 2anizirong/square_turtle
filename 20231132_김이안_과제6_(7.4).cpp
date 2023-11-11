#include <iostream>
using namespace std;

int main() {
	const int SCORE = 100;			// 입력 점수의 최대 개수
	double score[SCORE] = {};
	int i, n;
	double sum = 0, avg = 0;

	cout << "입력할 점수의 개수: ";
	cin >> n;

	if (n > SCORE) {
		cout << "입력 점수의 최대 개수를 초과했습니다." << endl;

		return 0;
	}

	cout << endl;

	cout << "점수 입력" << endl;
	
	for (i = 0; i < n; i++) {
		cout << "score[" << i << "]= ";
		cin >> score[i];

		sum += score[i];
	}

	avg = sum / n;			// 평균

	cout << endl;

	cout << "점수의 평균: " << avg << endl;

	int count = 0;
	for (int i = 0; i < n; i++) {
		if (score[i] > avg) {
			count += 1;
		}
	}

	cout << "평균과 같거나 큰 점수의 수: " << count << endl;
	cout << "평균보다 작은 수의 개수: " << n - count << endl;

	return 0;
}