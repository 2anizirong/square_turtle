// (2) n!�� ����ϴ� �Լ� int fact(int n)�� �����ϰ�, �� �Լ��� �̿��Ͽ� ������ �� ���� n�� r�� �Է� ���� �� nCr�� ����Ͽ� ����ϴ� ���α׷��� �ۼ�
// n!= 1 X 2 X ... X n
// nCr = n!/ ((n - r)!X r!)   (�Ǵ� nCr = n!/ (n - r)!/ r!)

//#include <iostream>
//using namespace std;
//
//int fact(int n);
//
//int main() {
//	int n, r;
//
//	cout << "n�� �Է� : ";
//	cin >> n;
//
//	cout << "r�� �Է� : ";
//	cin >> r;
//
//	fact(n);
//
//	cout << endl;
//
//	if (n < r || n < 0 || r < 0) {
//		cout << "n �Ǵ� r ���� �߸���. �ٽ� �Է�." << endl;
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
//	//n! ���ϱ�
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