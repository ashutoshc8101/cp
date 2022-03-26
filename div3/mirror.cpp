#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string smallest(string s) {
  string test = "";
  string str = "";

  for (unsigned int i = 0; i < s.length(); i++) {
    test += s[i];

    if (i == s.length() - 1) {
      str += test;
      reverse(test.begin(), test.end());
      str += test;
      return str;
    }

    if (test[i] <= s[i + 1]) {
      str += test;
      reverse(test.begin(), test.end());
      str += test;
      return str;
    }
  }

  return "";
}

int main() {
  unsigned int t, n;
  string s;
  cin >> t;

  while (t--) {
    cin >> n;
    cin >> s;

    cout << smallest(s) << endl;
  }

  return 0;
}
