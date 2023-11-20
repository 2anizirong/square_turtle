#include <iostream>
using namespace std;

bool search(int key, int d[], int size);

int main()
{
	int data[] = { 10, 20, 30, 10, 40, 30, 40, 50 - 1 };
	int size = sizeof(data) / sizeof(int);

	for (int i = 1; i < size; ) {
		if (search(data[i], data, i))
			move(data, i, size);
		else i++;
	}
}

bool search(int key, int d[], int size)
{
	for (int i = 0; i < size; i++) {
		if (key == data[i]) return true;
	}
	return false;
}