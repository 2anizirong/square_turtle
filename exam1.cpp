#include <iostream>
#define SIZE 10
using namespace std;


int main() {
	int num[SIZE] = { 0 };

	cout << "10°³ÀÇ Á¤¼ö ÀÔ·Â" << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << "num[" << i << "] = ";
		cin >> num[i];
	}

	//int max_num = num[0];
	//int min_num = num[0];

	////ÃÖ´ñ°ª
	//for (int i = 0; i < SIZE; i++) {
	//	if (max_num <= num[i]) {
	//		max_num = num[i];
	//	}
	//	else {
	//		max_num = max_num;
	//	}
	//}

	////ÃÖ¼Ú°ª
	//for (int j = 0; j < SIZE; j++) {
	//	if (min_num >= num[j]) {
	//		min_num = num[j];
	//	}
	//	else {
	//		min_num = min_num;
	//	}
	//}

	//cout << "ÃÖ´ñ°ª: " << max_num << ", " << "ÃÖ¼Ú°ª: " << min_num << endl;


	int maxi = 0;
	int mini = 0;

	//ÃÖ´ñ°ª
	for (int i = 0; i < SIZE; i++) {
		if (num[maxi] <= num[i]) {
			maxi = i;
		}
		else {
			maxi = maxi;
		}
	}

	//ÃÖ¼Ú°ª
	for (int j = 0; j < SIZE; j++) {
		if (num[mini] >= num[j]) {
			mini = j;
		}
		else {
			mini = mini;
		}
	}

	cout << "ÃÖ´ñ°ª: " << maxi << ", " << "ÃÖ¼Ú°ª: " << mini << endl;

	//±³¼ö´Ô Ç®ÀÌ
	for (int i = 0, j = 0; i < SIZE; i++) {
		if (num[maxi] <= num[i]) {
			maxi = i;
		}
		if (num[mini] >= num[j]) {
			mini = j;
		}
	}
		

	return 0;
}