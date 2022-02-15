#include <iostream>

using namespace std;

int main() {

  unsigned int t, i;
  long long x, y, ans;

  cin >> t;

  for (i = 0; i < t; i++) {
    cin >> y >> x;

    if (x > y) {
      if (x % 2 == 0) {
        ans = (x - 1) * (x - 1) + y;
      } else {
        ans = x * x - y + 1;
      }
    } else {
      if (y % 2 == 0) {
        ans = y * y - x + 1;
      } else {
        ans = (y - 1) * (y - 1) + x;
      }
    }

    cout << ans << endl;
  }

  return 0;
}
