// (3) 0과 100 사이의 정수 10개를 읽어 들여 이 중에서 가장 큰 값과 가장 작은 값을 찾아 출력하는 프로그램
// 
//	(a) 10개의 정수를 읽어 들이기 위하여 반복문 사용
//	(b) 가장 큰 값을 저장하는 변수 maxv를 0으로 초기화, 가장 작은 값을 저장하는 변수 minv를 100으로 초기화
//	(c) maxv보다 더 큰 값이 발견되면 maxv를 이 값으로 변경(if문 사용)
//	(d) minv보다 더 작은 값이 발견되면 minv를 이 값으로 변경(if문 사용)

#include <iostream>
using namespace std;

int find_max(int num1, int num2);
int find_min(int num1, int num2);

int main() {
    int maxv = 0;        // 가장 큰 값
    int minv = 100;      // 가장 작은 값
    int i = 1;

    while (i <= 10) {
        int num;

        cout << "정수" << i << " 입력: ";
        cin >> num;

        if (num < 0 || num > 100) {
            cout << "0과 100 사이 정수만 입력" << endl;
        }
        else {
            maxv = find_max(maxv, num);
            minv = find_min(minv, num);
            i++;
        }
    }

    cout << endl;

    cout << "가장 큰 값: " << maxv << endl;
    cout << "가장 작은 값: " << minv << endl;

    return 0;
}

int find_max(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    }
    else {
        return num2;
    }
}

int find_min(int num1, int num2) {
    if (num1 < num2) {
        return num1;
    }
    else {
        return num2;
    }
}