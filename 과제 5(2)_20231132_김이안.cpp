// (2) n!을 계산하는 함수 int fact(int n)을 정의하고, 이 함수를 이용하여 임의의 두 정수 n과 r을 입력 받은 후 nCr을 계산하여 출력하는 프로그램을 작성
// n!= 1 X 2 X ... X n
// nCr = n!/ ((n - r)!X r!)   (또는 nCr = n!/ (n - r)!/ r!)

//#include <iostream>
//using namespace std;
//
//int fact(int n);
//
//int main() {
//	int n, r;
//
//	cout << "n을 입력 : ";
//	cin >> n;
//
//	cout << "r을 입력 : ";
//	cin >> r;
//
//	fact(n);
//
//	cout << endl;
//
//	if (n < r || n < 0 || r < 0) {
//		cout << "n 또는 r 값이 잘못됨. 다시 입력." << endl;
//	}
//	else {
//		int n_factorial = fact(n);
//		int n_min_r_factorial = fact(n - r);
//		int r_factorial = fact(r);
//
//		int nCr = n_factorial / (n_min_r_factorial * r_factorial);
//		cout << n << "C" << r << " = " << n << "! / (" << n - r << "! * " << r << "!) = " << nCr << endl;
//	}
//
//	return 0;
//}
//
//int fact(int n) {
//	//n! 구하기
//	int n_fact = 1;
//	int i = 1;
//
//	while (i <= n) {
//		n_fact *= i;
//		i++;
//	}
//	cout << n << "! = " << n_fact << endl;
//
//	return n_fact;
//}