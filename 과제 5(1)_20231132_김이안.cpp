// (1) int divisor(int n)�� n�� ��� �� 1�� ������ ���� ���� ���� ��ȯ�ϴ� �Լ��̴�.�� �Լ��� �̿��Ͽ� 2���� 1000 ������ �Ҽ��� ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
// 2���� 1000����...�ݺ��� ��� / divisor(n) == n�̸� n�� �Ҽ���

//#include <iostream>
//using namespace std;
//
//int divisor(int n);
//
//int main() {
//    int n = 2;
//
//    cout << "2���� 1000 ������ �Ҽ�:" << endl;
//
//    while (n <= 1000) {
//        if (divisor(n) == n) {
//            cout << n << " ";
//        }
//        n++;
//    }
//
//    cout << endl;
//
//    return 0;
//}
//
//int divisor(int n) {
//    int i = 2;
//
//    while (i <= n / 2) {
//        if (n % i == 0) {
//
//            return i;
//        }
//        i++;
//    }
//
//    return n;
//}