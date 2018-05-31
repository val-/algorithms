#include <iostream>
using namespace std;

/*

На плоскости даны две точки А(2, 2) и В(2, 6), а также N точек со своими координатами. 
Определите, есть ли среди этих N точек хотя бы одна, которая является: 
а) вершиной равнобедренного треугольника с основанием АВ; 
б) вершиной прямоугольного треугольника с катетом АВ. 

*/

int main() {

    bool hasPointA = false;
    bool hasPointB = false;

    int n, i;
    cin >> n;

    int point[n][2];

    for (i = 0; i < n; i++) {
        cin >> point[i][0];
        cin >> point[i][1];
    }

    i = 0;
    while (!hasPointA && i < n) {
        if (point[i][0] != 2 && point[i][1] == 4) {
            hasPointA = true;
        }
        i++;
    }

    i = 0;
    while (!hasPointB && i < n) {
        if (
            point[i][0] != 2 &&
            ( 
                point[i][1] == 2 || point[i][1] == 6
            )
        ) {
            hasPointB = true;
        }
        i++;
    }

    cout << hasPointA << endl;
    cout << hasPointB << endl;

    return 0;

}
