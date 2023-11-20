//3. 7.27 (배열을 함수 인자로)
//
//10개의 정수를 배열로 읽어 들이고, 배열에 저장된 숫자가 정렬이 되어 있는지 여부를 출력하는 프로그램을 작성하려고 한다.
//다음 함수를 정의하고 이 함수를 이용해서 위 프로그램을 작성하시오.
//
//bool isSorted(int list[], int size);


#include <iostream>
using namespace std;

const int SIZE = 10;

bool isSorted(int list[], int size);

int main() {
    int numbers[SIZE];

    cout << "10개의 정수를 입력하세요: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }

    if (isSorted(numbers, SIZE)) {
        cout << "배열이 정렬되어 있습니다." << endl;
    }
    else {
        cout << "배열이 정렬되어 있지 않습니다." << endl;
    }

    return 0;
}

bool isSorted(int list[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (list[i] > list[i + 1]) {
            return false;
        }
    }
    return true;
}