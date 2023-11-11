//#include <iostream>
//using namespace std;
//
//void read_data(int d[], int size);
//void copy_data(int d[], int c[], int size);
//void print_data(int d[], int size);
//
//int main() {
//	const int SIZE = 100;
//	int data[SIZE], copied[SIZE];
//
//	read_data(data, SIZE);
//	copy_data(data, copied, SIZE);
//	print_data(copied, SIZE);
//
//	char a[10] = { 's','e','o','u','l','\0' };
//	char b[10] = { 's','o','s' };
//
//	return 0;
//}
//
//void read_data(int d[], int size) {
//	for (int i = 0; i < size; i++) {
//		cout << "d[" << i << "]= ";
//		cin >> d[i];
//
//		if (d[i] < 0)break;
//		d[size - 1] = -1;
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
//	for (int i = 0; i < size && d[i] != -1; i++) {
//		cout << "c[" << i << "] = " << d[i] << endl;
//	}
//
//	return;
//}