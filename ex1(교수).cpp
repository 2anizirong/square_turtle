#include <iostream>
#include "myheader.h"
using namespace std;

int main()
{
	const int N = 100;
	int data[N];

	read_data(data, N);
	double ave = get_ave(data, N);
	int n1 = count(ave, data, N, true);
	int n2 = count(ave, data, N, false);

	cout << "평균 이상은 " << n1 << "개이고, ";
	cout << "평균 미만은 " << n2 << "개이다" << endl;

	return 0;
}

void read_data(int d[], int size)
{
	for (int i = 0; i < size; i++) {
		cin >> d[i];
		if (d[i] < 0) return;
	}
}

double get_ave(int d[], int size)
{
	int sum = 0, i;
	
	for (i = 0; i < size && d[i] >= 0; i++) {
		sum += d[i];
	}
	return sum / (double) i;
}

int count(double ave, int d[], int size, bool flag)
{
	int n = 0;

	for (int i = 0; i < size &&  d[i] >= 0; i++) {
		if (flag && d[i] >= ave) n++;
		else if (!flag && d[i] < ave) n++;
	}
	return n;
}