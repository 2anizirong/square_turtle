#include <iostream>
#include "myproto11.h"

using namespace std;

int main3()
{
	int n, r;

	cin >> n >> r;
	cout << fact(n) / (fact(n - r) * fact(r));

	for (int i = 2; i <= 1000; i++) {
		if (isPrime(i))
			cout << i << endl;
	}

	for (int i = 2; i <= 998; i++) {
		if (isPrime(i) && isPrime(i + 2)) {
			cout << "(" << i << ",";
			cout << i + 2 << ")" << endl;
		}
	}

	return 0;
}

int fact(int n)
{
	int f = 1;

	for (int i = 2; i <= n; i++) f *= i;
	return f;
}

int divisor(int n)
{
	for (int i = 2; i < n; i++) {
		if (n % i == 0) return i;
	}
	return n;
}

bool isPrime(int n)
{
	return divisor(n) == n;
}