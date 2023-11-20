#include <iostream>
#include "myheader.h"
using namespace std;

int main() {

	const int N = 100;
	int data[N];

	read_data(data, N);
	double ave = get_ave(data, N);
	int n1 = count(ave, data, N, true);
	int n2 = count(ave, data, N, false);

	cout << "��� �̻��� " << n1 << "���̰�, ";
	cout << "��� �̸��� " << n2 << "���̴�." << endl;

	return 0;
}

void read_data(int d[], int size) {
	for (int i = 0; i < size - 1; i++) {
		cin >> d[i];

		if (d[i] < 0)return;
	}
	d[size - 1] = -1;
}

double get_ave(int d[], int size) {
	int sum = 0, i;

	for (i = 0; d[i] >= 0; i++) {
		//if (d[i] < 0)break;
		sum += d[i];
	}
	return sum / (double) i;
}

int count(double ave, int d[], int size, bool flag) {
	int n = 0;

	for (int i = 0; d[i] >= 0; i++) {
		/*if (flag == true && d[i] >= ave) n++;
		else if (flag == false && d[i] < ave)n++;*/

		if (flag && d[i] >= ave) n++;
		else if (!flag && d[i] < ave)n++;
	}

	return n;
}