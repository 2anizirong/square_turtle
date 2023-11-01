#include <iostream>
using namespace std;

int main1()
{
	int minv = 100, maxv = 0;
	int v;

	for (int i = 0; i < 10; i++) {
		cin >> v;
		if (v > maxv) maxv = v;
		if (v < minv) minv = v;
	}
	cout << maxv << ", " << minv << endl;

	cin >> v;
	minv = maxv = v;

	for (int i = 0; i < 9; i++) {
		cin >> v;
		if (v > maxv) maxv = v;
		else if (v < minv) minv = v;
	}


	// 배열 이용

	const int N = 10;
	int value[N];

	for (int i = 0; i < N; i++)
		cin >> value[i];

	maxv = minv = value[0];

	for (int i = 1; i < 10; i++) {
		if (value[i] > maxv)
			maxv = value[i];
		else if (value[i] < minv)
			minv = value[i];
	}

	return 0;
}