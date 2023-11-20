//1. 7�� ���α׷��� �ǽ� ���� 7.23 (�迭�� �Լ� ���ڷ�)
// 
//ũ�Ⱑ 10�� ���� �迭 a, b�� �����ϰ�, �� �迭�� ���� 10������ ���� �о� ���δ�.
//�� �迭�� ���ڷ� �޾� �� �迭�� ����� ������ ������ true�� ���� ������ false�� ��ȯ�ϴ� ���� �Լ��� �ۼ�
//
//bool isEqual(int list1[], int list2[], int size);
//
//�� �Լ��� �̿��Ͽ� �迭 a, b�� ������ ������ �ٸ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.


#include <iostream>
using namespace std;

const int SIZE = 10;

bool isEqual(int list1[], int list2[], int size);

int main() {
    int a[SIZE];
    int b[SIZE];

    cout << "�迭 a�� ���Ҹ� �Է��ϼ���: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> a[i];
    }

    cout << "�迭 b�� ���Ҹ� �Է��ϼ���: ";
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