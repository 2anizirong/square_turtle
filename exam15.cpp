#include <iostream>
#include "myproto11.h"
using namespace std;

int main()
{
	int n;

	cin >> n;
	if (n < 3 || n > 9) return 0;

	for (int i = 1; i <= n; i++) {
		prspace(n - i);  pr1(i); pr2(i);
	}

	return 0;
}

void pr1(int n)
{
	for (int i = 1; i < n; i++)
		cout << i << " ";
}

void pr2(int n)
{
	for (int i = n; i > 0; i--)
		cout << i << " ";
	cout << endl;
}

void prspace(int n)
{
	for (int i = 0; i < n; i++)
		cout << "  ";
}