//#include <iostream>
//
//using namespace std;
//
//void printCrossPattern(int m, int n) {
//    if (m % 2 == 0 || n % 2 == 0) {
//        cout << "Ȧ���� �Է��ϼ���" << endl;
//        return;
//    }
//
//    for (int i = 0; i < m; ++i) {
//        for (int j = 0; j < n; ++j) {
//            if (i == m / 2 || j == n / 2) {
//                cout << "+";
//            }
//            else {
//                cout << " ";
//            }
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    int m, n;
//    cout << "m�� �Է��ϼ���: ";
//    cin >> m;
//    cout << "n�� �Է��ϼ���: ";
//    cin >> n;
//
//    printCrossPattern(m, n);
//
//    return 0;
//}