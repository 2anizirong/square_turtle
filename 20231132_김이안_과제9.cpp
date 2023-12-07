//3x4 ����� ������ �� �ִ� 2���� �迭 matrix[3][4]��, �� ��Ŀ� ���� ���� �հ� ���� ���� ������ �� �ִ� �迭 rowSum[3], colSum[4]�� �����϶�.
//
//(1) Ű����κ��� ������ �о� �鿩 matrix[3][4]�� �����ϴ� �Լ� readMatrix()�� �����϶�.
//void readMatrix(int m[][4], int row, int col);
//
//(2) �迭 m�� �� ���� ���� ���Ͽ� �迭 sum�� �����ϴ� �Լ��� �����϶�.
//void addRow(int m[][4], int sum[], int row, int col);
//
//(3) �迭 m�� �� ���� ���� ���Ͽ� �迭 sum�� �����ϴ� �Լ��� �����϶�.
//void addCol(int m[][4], int sum[], int row, int col);
//
//(4) �迭 m�� ����� ������ ����ϴ� �Լ��� �����϶�.
//void printSum(int sum[], int size);
//
//(5) ������ ������ �Լ��� �̿��Ͽ� 3x4 ��Ŀ� 12���� �����͸� ������ �� �� ��� ���� ���� ���� ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.


#include <iostream>
using namespace std;

const int ROW = 3;
const int COL = 4;

void readMatrix(int m[][COL], int row, int col);
void addRow(int m[][COL], int sum[], int row, int col);
void addCol(int m[][COL], int sum[], int row, int col);
void printMatrix(int m[][COL], int row, int col);
void printSum(int sum[], int size);

int main() {
    int matrix[ROW][COL];
    int rowSum[ROW];
    int colSum[COL];

    // (1)
    readMatrix(matrix, ROW, COL);

    // (2)
    addRow(matrix, rowSum, ROW, COL);

    // (3)
    addCol(matrix, colSum, ROW, COL);

    // (4)
    printMatrix(matrix, ROW, COL);

    // (5)
    cout << "�� ���� ��:" << endl;
    printSum(rowSum, ROW);

    cout << endl;

    cout << "�� ���� ��:" << endl;
    printSum(colSum, COL);

    return 0;
}

// (1)
void readMatrix(int m[][COL], int row, int col) {
    cout << "������ �Է��ϼ���:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> m[i][j];
        }
    }
    cout << endl;
}

// (2)
void addRow(int m[][COL], int sum[], int row, int col) {
    for (int i = 0; i < row; i++) {
        sum[i] = 0;
        for (int j = 0; j < col; j++) {
            sum[i] += m[i][j];
        }
    }
}

// (3)
void addCol(int m[][COL], int sum[], int row, int col) {
    for (int j = 0; j < col; j++) {
        sum[j] = 0;
        for (int i = 0; i < row; i++) {
            sum[j] += m[i][j];
        }
    }
}

// (4)
void printMatrix(int m[][COL], int row, int col) {
    cout << "���:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// (5)
void printSum(int sum[], int size) {
    cout << "�հ�: ";
    for (int i = 0; i < size; i++) {
        cout << sum[i] << " ";
    }
    cout << endl;
}