#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>

/*

Дана последовательность слов, в которой слова разделены запятыми, а за последним словом — точка. Напечатайте: 
а) эту же последовательность слов, но в обратном порядке; 
б) все различные слова, указав для каждого из них число его вхождений в последовательность. 

*/

using namespace std;

vector <string> split(const string &s, char delim) {
  stringstream ss(s);
  string item;
  vector <string> elems;
  while (getline(ss, item, delim)) {
    elems.push_back(item);
  }
  return elems;
}

int main() {

    string S;

    cin >> S;

    vector <string> worlds = split(S, ',');
    map <string,int> worldsCount;

    for (int i = worlds.size() - 1; i >= 0; i--) {
        cout << worlds[i];
        if (i != 0) cout << ',';
        else cout << endl;
        if (!worldsCount[worlds[i]]) {
            worldsCount.insert( pair <string,int> (worlds[i], 0) );
        }
        worldsCount[worlds[i]]++;
    }

    for (auto it = worldsCount.begin(); it != worldsCount.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;


}
