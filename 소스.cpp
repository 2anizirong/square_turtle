#include <iostream>
using namespace std;

int main() {
    int won;
    cout << "��ȭ�� �Է��ϼ���: ";
    cin >> won;

    // �޷��� ��Ʈ ���
    int dollars = won / 100;
    int cents = won % 100;

    cout << dollars << "�޷� " << cents << "��Ʈ" << endl;

    return 0;
}
