#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int n, m, p;

    cin >> n >> m >> p;

    int AB = abs(m - n);
    int BC = abs(p - m);
    int AC = abs(p - n);

    if (AB < BC) {
        if (AB < AC) cout << "AB";
        else cout << "AC";
    } else {
        if (AC > BC) cout << "BC";
        else cout << "AC";
    }

    cout << endl;
    return 0;

}
