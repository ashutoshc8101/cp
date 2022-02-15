#include <iostream>
#include <climits>

using namespace std;

int main() {
  int t, i;
  short n, k;
  long long int min = INT_MAX;
  long long int max = INT_MIN;
  long long int temp;

  cin >> t;

  for (i = 0; i < t; i++) {
    cin >> n;

    for (k=0; k < n; k++) {
      cin >> temp;
      if (temp < min) {
        min = temp;
      }
      if (temp > max) {
        max = temp;
      }
    }

    cout << max - min << endl;

    min = INT_MAX;
    max = INT_MIN;
  }

  return 0;
}
