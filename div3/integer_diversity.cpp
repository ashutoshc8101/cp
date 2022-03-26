#include <iostream>
#include <map>

using namespace std;

int main() {
  unsigned short int t, i;
  unsigned short int n, j;
  short int temp;
  map<short int, int> mp;

  cin >> t;
  for (i = 0; i < t; i++) {
    cin >> n;
    for (j = 0; j < n; j++) {
      cin >> temp;
      if (mp.find(temp) == mp.end()) {
        mp.insert(make_pair(temp, 1));
      } else if (mp.find(-1 * temp) == mp.end()) {
        mp.insert(make_pair(-1 * temp, 1));
      }
    }

    cout << mp.size() << endl;

    mp.clear();
  }

  return 0;
}

