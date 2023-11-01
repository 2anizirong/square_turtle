#include <iostream>
using namespace std;

int main() {

    //(1)
    double result = 1.0;
    int i = 1;

    while (i <= 97) {
        result *= (double)i / (i + 2);
        i += 2;
    }

    cout << "(1) 1/3 * 3/5 * 5/7 ... * 95/97 * 97/99 = " << result << endl;

    cout << "\n";


    //(2)
    double term = 0.0;
    double pi = 0.0;
    int n1 = 1;
    int power = 1;


    while (true) {
        //term = ((-1) ^ (n1 + 1)) / (double)(2 * n1 - 1);          거듭제곱 연산자가 C++에는 없는 것 같다.. : 거듭제곱=power
        term = power / (double)(2 * n1 - 1);
        pi += term;
        power = -power;         //항마다 부호바꾸기
        n1++;

        if (n1 > 1000000) break;
    }

    pi *= 4;

    cout << "(2) 계산한 pi: " << pi << endl;

    cout << "\n";


    //(3) 임의의 정수를 입력 받아 각 자리수를 더하여 출력하는 프로그램을 작성하시오. (예: 1234를 입력하면 1 + 2 + 3 + 4를 계산함)
    //힌트 :% 연산자와 / 연산자 및 반복문을 사용함
    int n2;
    int num1;
    int sum=0;

    cout << "정수를 입력 : ";
    cin >> n2;
    
    while (n2 > 0) {
        num1 = n2 % 10;
        sum += num1;
        n2 = n2 / 10;
    }

    cout << "(3) 각 자리수를 더한 값 : " << sum << endl;

    cout << "\n";


    //(4) 2진수를 입력 받아 10진수로 변환하여 출력하는 프로그램을 작성하시오. 
    //(2진수는 int로 선언하여 읽어 들이는데, 2진수이므로 101101처럼 0과 1로만 구성된 정수를 입력해야 한다.)
    int n_2;
    int num2;
    int binary = 1;
    int n_10 = 0;

    cout << "2진수를 입력 : ";
    cin >> n_2;

    while (n_2 > 0) {
        num2 = n_2 % 10;

        if (num2 != 1 && num2 != 0) {
            cout << "0과 1로만 구성된 정수를 입력하세요." << endl;
            return 0;
        }

        n_10 += num2 * binary;
        binary *= 2;
        n_2 = n_2 / 10;
    }

    cout << "(4) 10진수로 변환한 값 : " << n_10 << endl;

    return 0;
}