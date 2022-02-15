#include <iostream>

using namespace std;

int main() {
  short unsigned int n;
  cin >> n;

  short unsigned int p, v, t;
  short unsigned int count = 0;

  for (short unsigned int i = 0; i < n; i++) {
    cin >> p >> v >> t;

    if ((p + v + t) > 1) {
      count++;
    }
  }

  cout << count << endl;

  return 0;
}
