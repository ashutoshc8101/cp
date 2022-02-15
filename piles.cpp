#include <iostream>

using namespace std;

int main() {
  unsigned int n, i;
  unsigned long long int a, b;

  cin >> n;

  for (i = 0; i < n; i++) {
    cin >> a >> b;

    while ( a > 0 && b > 0 ) {
      if (a >= b) {
        a -= 2;
        b -= 1;
      } else {
        a -= 1;
        b -= 2;
      }
    }

    if (a == 0 && b == 0) {
      cout << "YES";
    } else {
      cout << "NO";
    }
    cout << endl;
  }

  return 0;
}
