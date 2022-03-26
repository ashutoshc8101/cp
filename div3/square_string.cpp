#include <iostream>

using namespace std;

int main() {
  unsigned short t, i;
  cin >> t;
  string s;

  for (i = 0; i < t; i++) {
    cin >> s;
    if (s.length() % 2 != 0) {
      cout << "NO" << endl;
      continue;
    }
    bool square = true;
    for (unsigned int k = 0; k < s.length() / 2; k++) {
      if (s[k] != s[(s.length()/2) + k]) {
        square = false;
      }
    }

    if (square) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
