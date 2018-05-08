#include <iostream>
using namespace std;

/*

Дана целочисленная матрица A(N, N). 
Найдите номер первой из её строк, которые начинаются с К положительных чисел подряд. 

*/

int main() {

    int firstValidLineNum = -1;

    // Упрощенный ввод данных в программу - можно переписать на чтение DAT, XML или JSON

    const int N = 4,
        K = 3,
        A[N][N] = {
            {1, 0, 1, 0},
            {0, 1, 1, 0},
            {1, 0, 1, 0},
            {1, 1, 1, 0}
        };

    int i = 0;
    while (firstValidLineNum < 0 && i < N) {
        bool isValidLine = true;
        int j = 0;
        while (isValidLine && j < K) {
            if (A[i][j] <= 0) {
                isValidLine = false;
            }
            j++;
        }
        if (isValidLine) {
            firstValidLineNum = i + 1;
        }
        i++;
    }
    

    cout << firstValidLineNum << endl;

    return 0;

}
