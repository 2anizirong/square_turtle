//3. 7.27 (�迭�� �Լ� ���ڷ�)
//
//10���� ������ �迭�� �о� ���̰�, �迭�� ����� ���ڰ� ������ �Ǿ� �ִ��� ���θ� ����ϴ� ���α׷��� �ۼ��Ϸ��� �Ѵ�.
//���� �Լ��� �����ϰ� �� �Լ��� �̿��ؼ� �� ���α׷��� �ۼ��Ͻÿ�.
//
//bool isSorted(int list[], int size);


#include <iostream>
using namespace std;

const int SIZE = 10;

bool isSorted(int list[], int size);

int main() {
    int numbers[SIZE];

    cout << "10���� ������ �Է��ϼ���: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }

    if (isSorted(numbers, SIZE)) {
        cout << "�迭�� ���ĵǾ� �ֽ��ϴ�." << endl;
    }
    else {
        cout << "�迭�� ���ĵǾ� ���� �ʽ��ϴ�." << endl;
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