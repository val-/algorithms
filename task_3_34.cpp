#include <iostream>
using namespace std;

/*

Заданы запасы по N видам топлива в каждом из М районов города и нормы минимально допустимого запаса по каждому виду топлива. 
Определите:  
а) запасы каждого вида топлива на все районы;  
б) запасы всех видов топлива для каждого района;  
в) в каких районах запас того или иного вида топлива меньше минимально допустимого и каких видов топлива запасено недостаточно в каждом районе. 

*/

int main() {

    // Упрощенный ввод данных в программу - можно переписать на чтение DAT, XML или JSON

    const int N = 3, M = 4,
        realStorage[N][M] = {
            {10, 20, 10, 30},
            {11, 21, 11, 31},
            {12, 22, 12, 32}
        },
        requiredStorage[N][M] = {
            {100, 20, 100, 30},
            {11, 210, 11, 310},
            {120, 22, 120, 32}
        };

    int realStorageByType[N],
        realStorageByRegion[M];

    bool warningsByTypeAndRegion[N][M],
        warningsByRegionAndType[M][N];

    for (int i = 0; i < N; i++) {
        realStorageByType[i] = 0;
        for (int j = 0; j < M; j++) {
            if (i == 0) {
                realStorageByRegion[j] = 0;
            }
            realStorageByRegion[j] += realStorage[i][j];
            realStorageByType[i] += realStorage[i][j];
            warningsByTypeAndRegion[i][j] = realStorage[i][j] < requiredStorage[i][j];
            warningsByRegionAndType[j][i] = warningsByTypeAndRegion[i][j];
        }
    }


    // Распечатка результата в стандартный вывод для наглядности

    for (int i = 0; i < N; i++) {
        cout << realStorageByType[i] << " ";
    }

    cout << endl << endl;

    for (int j = 0; j < M; j++) {
        cout << realStorageByRegion[j] << " ";
    }

    cout << endl << endl;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << warningsByTypeAndRegion[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++) {
            cout << warningsByRegionAndType[j][i] << " ";
        }
        cout << endl;
    }

    return 0;

}
