#include <iostream>
using namespace std;

int main() {
	int student;
	double score[] = { 0 };
	int i;
	double max_score = 0;

	cout << "�л� ��: ";
	cin >> student;


    cout << "�л����� ������ ���ʴ�� �Է�: ";
    for (int i = 0; i < student; i++) {
        cin >> score[i];

        if (score[i] > max_score) {
            max_score = score[i];
        }
    }

    cout << "���� ���� ����: " << max_score << endl;

    cout << "�л����� ���" << endl;
    for (int i = 0; i < student; i++) {
        if (score[i] >= max_score - 10) {
            cout << "�л� " << i << "�� ������ " << score[i] << "�̰� ����� A �Դϴ�." << endl;
        }
        else if (score[i] >= max_score - 20) {
            cout << "�л� " << i << "�� ������ " << score[i] << "�̰� ����� B �Դϴ�." << endl;
        }
        else if (score[i] >= max_score - 30) {
            cout << "�л� " << i << "�� ������ " << score[i] << "�̰� ����� C �Դϴ�." << endl;
        }
        else if (score[i] >= max_score - 40) {
            cout << "�л� " << i << "�� ������ " << score[i] << "�̰� ����� D �Դϴ�." << endl;
        }
        else {
            cout << "�л� " << i << "�� ������ " << score[i] << "�̰� ����� F �Դϴ�." << endl;
        }
    }


	return 0;
}