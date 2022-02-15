#include <iostream>

using namespace std;

int main() {
  int t, i;
  cin >> t;

  long int a, b, c;
  long int d1, d2, d3;

  for (i = 0; i < t; i++) {
    cin >> a >> b >> c;

    // a, b*m, c
    // m = a + c / 2b

    // a*m, b, c
    // a*m + c = 2b
    // m = (2b - c)/ a

    // a, b, c*m
    // c*m - b = b - a
    // m = 2b - a / c

    // m should be whole and m should positive

    if ((a + c) % (2*b) == 0) {
      cout << "YES" << endl;
    } else if (((2*b) - c) % a == 0 && (2 * b - c) > 0) {
      cout << "YES" << endl;
    } else if ((2*b - a) % c == 0 && ( 2*b - a) > 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
