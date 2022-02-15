#include <iostream>
#include <map>

using namespace std;

int modDiff(int a, int b) {
  return a > b ? a - b : b - a;
}

int main()
{
  unsigned short int t, i, j, k;
  string letters, s;
  map<char, int> m;
  int time = 0;

  cin >> t;

  for (i = 0; i < t; i++, time = 0) {
    cin >> letters;
    cin >> s;
    for (j = 0; j < letters.length(); j++) {
      m.insert(make_pair(letters[j], j + 1));
    }

    for (j = 0; j < s.length() - 1; j++) {
      time += modDiff(m[s[j]], m[s[j + 1]]);
    }
    cout << time << endl;
    m.clear();
  }

  return 0;
}
