//2. 7.26 (�� ���� ���ĵ� �迭�� �ϳ��� ����)
//
//ũ�Ⱑ 10�� �� �迭 a, b�� �����ϰ�, �� �迭�� 10�� �̳��� ũ�� ������ ���ĵ� ���� ������ �о� ���δ�.
//(�о� ���� �������� ���� ǥ���ϱ� ���� - 1�� ���)
//�迭 list1, list2�� �Է� ���ڷ� �޾� ���̰�, �� �迭�� ������ ũ�Ⱑ �����ϴ� ������ ������ ����� list3�� ����ǵ��� �ϴ� �Ʒ� �Լ��� �����Ͻÿ�.
//
//void merge(int list1[], int size1, int list2[], int size2, int list3[]);
//
//ũ�Ⱑ 20�� �迭 c�� �����ϰ� ������ ������ �Լ��� �̿��Ͽ� �迭 a, b�� ������ ������ ����� �迭 c�� �����ϰ�, �̸� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.


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

    // �迭 a �Է�
    cout << "�迭 a�� ���Ҹ� �Է��ϼ��� (ũ�Ⱑ �����ϴ� ������ ����): ";
    for (int i = 0; i < SIZE1; i++) {
        cin >> a[i];
    }

    // �迭 b �Է�
    cout << "�迭 b�� ���Ҹ� �Է��ϼ��� (ũ�Ⱑ �����ϴ� ������ ����): ";
    for (int i = 0; i < SIZE2; i++) {
        cin >> b[i];
    }

    // �� �迭�� ����
    merge(a, SIZE1, b, SIZE2, c);

    // ��� ���
    cout << "�� �迭�� ������ ���:" << endl;
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