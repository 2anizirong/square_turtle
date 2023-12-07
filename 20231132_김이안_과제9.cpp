//3x4 행렬을 저장할 수 있는 2차원 배열 matrix[3][4]와, 이 행렬에 대한 행의 합과 열의 합을 저장할 수 있는 배열 rowSum[3], colSum[4]을 선언하라.
//
//(1) 키보드로부터 정수를 읽어 들여 matrix[3][4]에 저장하는 함수 readMatrix()를 정의하라.
//void readMatrix(int m[][4], int row, int col);
//
//(2) 배열 m의 각 행의 합을 구하여 배열 sum에 저장하는 함수를 정의하라.
//void addRow(int m[][4], int sum[], int row, int col);
//
//(3) 배열 m의 각 열의 합을 구하여 배열 sum에 저장하는 함수를 정의하라.
//void addCol(int m[][4], int sum[], int row, int col);
//
//(4) 배열 m에 저장된 내용을 출력하는 함수를 정의하라.
//void printSum(int sum[], int size);
//
//(5) 위에서 정의한 함수를 이용하여 3x4 행렬에 12개의 데이터를 저장한 후 각 행과 열에 대한 합을 구하여 출력하는 프로그램을 작성하시오.


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
    cout << "각 행의 합:" << endl;
    printSum(rowSum, ROW);

    cout << endl;

    cout << "각 열의 합:" << endl;
    printSum(colSum, COL);

    return 0;
}

// (1)
void readMatrix(int m[][COL], int row, int col) {
    cout << "정수를 입력하세요:" << endl;
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
    cout << "행렬:" << endl;
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
    cout << "합계: ";
    for (int i = 0; i < size; i++) {
        cout << sum[i] << " ";
    }
    cout << endl;
}