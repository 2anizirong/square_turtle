#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	srand(time(0));

	const int NUM = 100;
	int n[NUM] = {};
    int counts[10] = { 0 };

    for (int i = 0; i < NUM; i++) {
        n[i] = rand() % 10;
        cout << n[i] << " ";
        counts[n[i]]++;

    cout << "\n\n";

    cout << "�� ���� ����" << endl;
    for (int i = 0; i < 10; i++) {
        cout << i << ": " << counts[i] << "��" << endl;
    }

    return 0;
}