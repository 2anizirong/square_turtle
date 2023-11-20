#include <iostream>
#include "myheader.h"
using namespace std;

int main() {
	int data[] = { 10,20,30,40,50,-1 };
	int size = sizeof(data) / sizeof(int);

	for (int i = 1; i < size;) {
		if (search(data[i], data, i))
			move(data, i, size);
		else i++;
	}

	return 0;
}

bool search(int key, int d[], int size) {

}