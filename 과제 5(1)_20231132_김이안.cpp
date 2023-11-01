// (1) int divisor(int n)은 n의 약수 중 1을 제외한 가장 작은 수를 반환하는 함수이다.이 함수를 이용하여 2부터 1000 사이의 소수를 구하여 출력하는 프로그램을 작성하시오.
// 2부터 1000사이...반복문 사용 / divisor(n) == n이면 n은 소수임

//#include <iostream>
//using namespace std;
//
//int divisor(int n);
//
//int main() {
//    int n = 2;
//
//    cout << "2부터 1000 사이의 소수:" << endl;
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