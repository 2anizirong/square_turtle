//2. 7.26 (두 개의 정렬된 배열을 하나로 통합)
//
//크기가 10인 두 배열 a, b를 선언하고, 각 배열에 10개 이내의 크기 순으로 정렬된 양의 정수를 읽어 들인다.
//(읽어 들일 데이터의 끝을 표시하기 위해 - 1을 사용)
//배열 list1, list2를 입력 인자로 받아 들이고, 이 배열의 내용을 크기가 증가하는 순으로 통합한 결과가 list3에 저장되도록 하는 아래 함수를 정의하시오.
//
//void merge(int list1[], int size1, int list2[], int size2, int list3[]);
//
//크기가 20인 배열 c를 선언하고 위에서 정의한 함수를 이용하여 배열 a, b의 내용을 통합한 결과를 배열 c로 저장하고, 이를 출력하는 프로그램을 작성하시오.


#include <iostream>
using namespace std;

const int SIZE1 = 10;
const int SIZE2 = 10;
const int SIZE3 = SIZE1 + SIZE2;

void merge(int list1[], int size1, int list2[], int size2, int list3[]);

int main() {
    int a[SIZE1];
    int b[SIZE2];
    int c[SIZE3];

    // 배열 a 입력
    cout << "배열 a의 원소를 입력하세요 (크기가 증가하는 순으로 정렬): ";
    for (int i = 0; i < SIZE1; i++) {
        cin >> a[i];
    }

    // 배열 b 입력
    cout << "배열 b의 원소를 입력하세요 (크기가 증가하는 순으로 정렬): ";
    for (int i = 0; i < SIZE2; i++) {
        cin >> b[i];
    }

    // 두 배열을 통합
    merge(a, SIZE1, b, SIZE2, c);

    // 결과 출력
    cout << "두 배열을 통합한 결과:" << endl;
    for (int i = 0; i < SIZE3; i++) {
        cout << c[i] << " ";
    }

    return 0;
}

void merge(int list1[], int size1, int list2[], int size2, int list3[]) {
    int i, j, k;

    for (i = 0, j = 0, k = 0; i < size1 && j < size2; ) {
        if (list1[i] < list2[j]) {
            list3[k++] = list1[i++];
        }
        else {
            list3[k++] = list2[j++];
        }
    }

    for (; i < size1; ) {
        list3[k++] = list1[i++];
    }

    for (; j < size2; ) {
        list3[k++] = list2[j++];
    }
}