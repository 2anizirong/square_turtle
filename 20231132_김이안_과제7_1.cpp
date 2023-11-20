//1. 7장 프로그래밍 실습 문제 7.23 (배열을 함수 인자로)
// 
//크기가 10인 정수 배열 a, b를 선언하고, 이 배열로 숫자 10개씩을 각각 읽어 들인다.
//두 배열을 인자로 받아 두 배열의 내용과 순서가 같으면 true를 같지 않으면 false를 반환하는 다음 함수를 작성
//
//bool isEqual(int list1[], int list2[], int size);
//
//이 함수를 이용하여 배열 a, b의 내용이 같은지 다른지를 출력하는 프로그램을 작성하시오.


#include <iostream>
using namespace std;

const int SIZE = 10;

bool isEqual(int list1[], int list2[], int size);

int main() {
    int a[SIZE];
    int b[SIZE];

    cout << "배열 a의 원소를 입력하세요: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> a[i];
    }

    cout << "배열 b의 원소를 입력하세요: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> b[i];
    }

    if (isEqual(a, b, SIZE)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    return 0;
}

bool isEqual(int list1[], int list2[], int size) {
    for (int i = 0; i < size; i++) {
        if (list1[i] != list2[i]) {
            return false;
        }
    }
    return true;
}