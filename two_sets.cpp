#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  unsigned int n, r_n;
  cin >> n;
  r_n = n;
  long long sum, rsum;

  rsum = n * (n + 1) / 2;

  if (rsum % 2 != 0) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;

    sum = rsum / 2;

    vector<int> s1;

    while (sum > 0) {
      if (sum - n >= 0) {
        sum -= n;
        s1.push_back(n);
      }
      n--;
    }

    cout << s1.size() << endl;

    for (int i = 0; i < s1.size(); i++) {
      cout << s1[i] << ' ';
    }
    cout << endl;

    n = r_n;

    cout << n - s1.size() << endl;

    for (int i = 1; i < n + 1; i++) {
      if (find(s1.begin(), s1.end(), i) == s1.end()) {
        cout << i << ' ';
      }
    }

  }

  return 0;
}
