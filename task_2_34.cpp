#include <iostream>
using namespace std;

/*

У кассы аэрофлота выстроилась очередь из N человек.  
Время обслуживания кассиром i-го клиента равно Тi (i = 1, ..., N).  
а) Определите время пребывания в очереди каждого клиента;  
б) Укажите номер клиента, для обслуживания которого кассиру потребовалось больше всего время. 

*/

int main() {

    int n, waitingTime = 0, maxT = 0, maxTi;

    cin >> n;

    int T[n];

    for (int i = 0; i < n; i++) {
        cin >> T[i];
    }

    for (int i = 0; i < n; i++) {
        cout << waitingTime << endl;
        waitingTime += T[i];
        if (T[i] > maxT) {
            maxT = T[i];
            maxTi = i + 1;
        }
    }

    cout << maxTi << endl;

    return 0;

}
