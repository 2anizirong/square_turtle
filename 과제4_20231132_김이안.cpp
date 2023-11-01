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
        //term = ((-1) ^ (n1 + 1)) / (double)(2 * n1 - 1);          �ŵ����� �����ڰ� C++���� ���� �� ����.. : �ŵ�����=power
        term = power / (double)(2 * n1 - 1);
        pi += term;
        power = -power;         //�׸��� ��ȣ�ٲٱ�
        n1++;

        if (n1 > 1000000) break;
    }

    pi *= 4;

    cout << "(2) ����� pi: " << pi << endl;

    cout << "\n";


    //(3) ������ ������ �Է� �޾� �� �ڸ����� ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (��: 1234�� �Է��ϸ� 1 + 2 + 3 + 4�� �����)
    //��Ʈ :% �����ڿ� / ������ �� �ݺ����� �����
    int n2;
    int num1;
    int sum=0;

    cout << "������ �Է� : ";
    cin >> n2;
    
    while (n2 > 0) {
        num1 = n2 % 10;
        sum += num1;
        n2 = n2 / 10;
    }

    cout << "(3) �� �ڸ����� ���� �� : " << sum << endl;

    cout << "\n";


    //(4) 2������ �Է� �޾� 10������ ��ȯ�Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
    //(2������ int�� �����Ͽ� �о� ���̴µ�, 2�����̹Ƿ� 101101ó�� 0�� 1�θ� ������ ������ �Է��ؾ� �Ѵ�.)
    int n_2;
    int num2;
    int binary = 1;
    int n_10 = 0;

    cout << "2������ �Է� : ";
    cin >> n_2;

    while (n_2 > 0) {
        num2 = n_2 % 10;

        if (num2 != 1 && num2 != 0) {
            cout << "0�� 1�θ� ������ ������ �Է��ϼ���." << endl;
            return 0;
        }

        n_10 += num2 * binary;
        binary *= 2;
        n_2 = n_2 / 10;
    }

    cout << "(4) 10������ ��ȯ�� �� : " << n_10 << endl;

    return 0;
}