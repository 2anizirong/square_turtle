#include <iostream>
#include "myheader.h"
using namespace std;

int main() {
	const int N = 100;
	int data[N], d, i = 0;

	while(i < N) {
		cin >> d;
		if (d < 0) break;
		if (!search(d, data, i))
			data[i++] = d;
	}

	print(data, i);
	return 0;
}

bool search(int key, int d[], int size) {
	for (int i = 0; i < size; i++) {
		if (d[i] == key) return true;
	}

	return false;
}

void print(int data[], int size) {

	for (int i = 0; i < size; i++) {
		cout << data[i] << " ";
	}

	cout << endl;
}