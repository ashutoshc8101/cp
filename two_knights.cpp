#include <iostream>

using namespace std;

int combination(int n) {
  return ((n) * (n - 1)) / 2;
}

int main() {
  int n, m;
  cin >> m;
  for (n = 1; n <= m; n++) {
    int i = 0, k = 0;
    int check_x, check_y;

    int count = 0;

    for (i = 0; i < n; i++) {
      for (k = 0; k < n; k++) {
        check_x = i + 1;
        check_y = k + 2;

        if (check_x < n && check_y < n) {
          count++;
        }

        check_x = i - 1;

        if (check_x >= 0 && check_y < n) {
          count++;
        }

        check_x = i + 2;
        check_y = k + 1;
        if (check_x < n && check_y < n) {
          count++;
        }
        check_y = k - 1;
        if (check_x < n && check_y >= 0) {
          count++;
        }

        check_x = i - 2;
        check_y = k + 1;
        if (check_x >= 0 && check_y < n) {
          count++;
        }
        check_y = k - 1;
        if (check_x >= 0 && check_y >= 0) {
          count++;
        }

        check_x = i + 1;
        check_y = k - 2;
        if (check_x < n && check_y >= 0) {
          count++;
        }

        check_x = i - 1;
        if (check_x >= 0 && check_y >= 0) {
          count++;
        }
      }
    }

    cout << count << endl;
    // cout << combination(n*n) - (count / 2) << endl;
  }
  return 0;
}
