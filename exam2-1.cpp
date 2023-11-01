//#include <iostream>
//using namespace std;
//
//void printUp(int n);		//1부터 n까지 출력하는 함수
//void printDown(int n);
//
//int main() {
//	int n;
//
//	cout << "n을 입력(3부터 9사이) : ";
//	cin >> n;
//	if (n >= 3 && n <= 9) {
//		int i = 1;
//		while (i<=n) {
//			printUp(i);
//			printDown(i);
//			i++;
//			cout << endl;
//		}
//
//	}
//	else {
//		cout << "조건에 위배" << endl;
//	}
//}
//
//void printUp(int n) {
//	int i = 1;
//
//	while (i <= n) {
//		cout << i;
//		i++;
//	}
//}
//
//void printDown(int n) {
//
//	while (n > 1) {
//		n--;
//		cout << n;
//	}
//}