#include <iostream>
using namespace std;

int main() {
	int student;
	double score[] = { 0 };
	int i;
	double max_score = 0;

	cout << "학생 수: ";
	cin >> student;


    cout << "학생들의 점수를 차례대로 입력: ";
    for (int i = 0; i < student; i++) {
        cin >> score[i];

        if (score[i] > max_score) {
            max_score = score[i];
        }
    }

    cout << "가장 좋은 점수: " << max_score << endl;

    cout << "학생들의 등급" << endl;
    for (int i = 0; i < student; i++) {
        if (score[i] >= max_score - 10) {
            cout << "학생 " << i << "의 점수는 " << score[i] << "이고 등급은 A 입니다." << endl;
        }
        else if (score[i] >= max_score - 20) {
            cout << "학생 " << i << "의 점수는 " << score[i] << "이고 등급은 B 입니다." << endl;
        }
        else if (score[i] >= max_score - 30) {
            cout << "학생 " << i << "의 점수는 " << score[i] << "이고 등급은 C 입니다." << endl;
        }
        else if (score[i] >= max_score - 40) {
            cout << "학생 " << i << "의 점수는 " << score[i] << "이고 등급은 D 입니다." << endl;
        }
        else {
            cout << "학생 " << i << "의 점수는 " << score[i] << "이고 등급은 F 입니다." << endl;
        }
    }


	return 0;
}