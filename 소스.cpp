#include <iostream>
using namespace std;

int main() {
    int won;
    cout << "원화를 입력하세요: ";
    cin >> won;

    // 달러와 센트 계산
    int dollars = won / 100;
    int cents = won % 100;

    cout << dollars << "달러 " << cents << "센트" << endl;

    return 0;
}
