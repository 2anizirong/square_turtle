#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	int count[26] = { 0 };
	const int N = 1000000;

	srand(time(0));

	for (int i = 0; i < N; i++) {
		// srand(time(0));
		char d = rand() % 26 + 'a';
		count[d - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		cout << (char)(i + 'a') << ": " << count[i] / (double)N<< endl;
	}

	return 0;
}