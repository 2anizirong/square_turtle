// (3) 0�� 100 ������ ���� 10���� �о� �鿩 �� �߿��� ���� ū ���� ���� ���� ���� ã�� ����ϴ� ���α׷�
// 
//	(a) 10���� ������ �о� ���̱� ���Ͽ� �ݺ��� ���
//	(b) ���� ū ���� �����ϴ� ���� maxv�� 0���� �ʱ�ȭ, ���� ���� ���� �����ϴ� ���� minv�� 100���� �ʱ�ȭ
//	(c) maxv���� �� ū ���� �߰ߵǸ� maxv�� �� ������ ����(if�� ���)
//	(d) minv���� �� ���� ���� �߰ߵǸ� minv�� �� ������ ����(if�� ���)

#include <iostream>
using namespace std;

int find_max(int num1, int num2);
int find_min(int num1, int num2);

int main() {
    int maxv = 0;        // ���� ū ��
    int minv = 100;      // ���� ���� ��
    int i = 1;

    while (i <= 10) {
        int num;

        cout << "����" << i << " �Է�: ";
        cin >> num;

        if (num < 0 || num > 100) {
            cout << "0�� 100 ���� ������ �Է�" << endl;
        }
        else {
            maxv = find_max(maxv, num);
            minv = find_min(minv, num);
            i++;
        }
    }

    cout << endl;

    cout << "���� ū ��: " << maxv << endl;
    cout << "���� ���� ��: " << minv << endl;

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