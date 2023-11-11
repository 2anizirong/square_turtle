//#include <iostream>
//using namespace std;
//
//void read_data(int d[], int size);
//void copy_data(int d[], int c[], int size);
//void print_data(int d[], int size);
//
//int main() {
//	const int SIZE = 100;
//	int data[SIZE], copied[SIZE],n;
//
//	cout << "몇 개의 데이터를 입력하시겠습니까? ";
//	cin >> n;
//
//	read_data(data, n);
//	copy_data(data, copied, n);
//	print_data(copied, n);
//
//	return 0;
//}
//
//void read_data(int d[], int size) {
//	for (int i = 0; i < size; i++) {
//		cout << "d[" << i << "]= ";
//		cin >> d[i];
//	}
//
//	return;
//}
//
//void copy_data(int d[], int c[], int size) {
//	for (int i = 0; i < size; i++) {
//		c[i] = d[i];
//	}
//	cout << endl;
//
//	return;
//}
//
//void print_data(int d[], int size) {
//	for (int i = 0; i < size; i++) {
//		cout << "c[" << i << "] = " << d[i] << endl;
//	}
//
//	return;
//}