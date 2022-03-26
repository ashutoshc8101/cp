#include <iostream>

using namespace std;

int main() {
  unsigned int t;
  unsigned long long int a, b;

  cin >> t;

  while(t--) {
    cin >> a >> b;

    if (a < 3 && b < 3) {
      if ((a == 2 && b == 1) || (a == 1 && b == 2) || (a == 0 && b == 0)) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
      continue;
    }

    if (a > 2 * b || b > 2 * a) {
      cout << "NO" << endl;
      continue;
    }

    if (a > 1 && b > 1) {
      a = a % 3;
      b = b % 3;
    }

    if ((a == 2 && b == 1) || (a == 1 && b == 2) || (a == 0 && b == 0)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
