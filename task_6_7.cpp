#include <iostream>
using namespace std;

/*

В заданной матрице A(N, M) найдите количество строк, не содержащих отрицательных чисел. 

*/

int main() {

    int count = 0;

    // Упрощенный ввод данных в программу - можно переписать на чтение DAT, XML или JSON

    const int N = 6, M = 4,
        A[N][M] = {
            {-10, 20, 10, 30},
            {10, 20, 10, 30},
            {-11, 21, -11, 31},
            {-11, -21, -11, 31},
            {-12, 22, -12, 32},
            {12, 22, 12, 32}
        };
    
    for (int i = 0; i < N; i++) {
        bool isValidString = true;
        int j = 0;
        while (isValidString && j < M) {
            if (A[i][j] < 0) {
                isValidString = false;
            }
            j++;
        }
        if (isValidString) {
            count++;
        }
    }

    cout << count << endl;

    return 0;

}
