#include <iostream>
#include <vector>

using namespace std;

int main() {
  unsigned long int n, i;
  vector<unsigned long int> s1, s2;
  cin >> n;

  unsigned long long int sum = (n * (n + 1)) / 2;

  if (sum % 2 == 1) {
    cout << "NO" << endl;
    return 0;
  }

  cout << "YES" << endl;

  unsigned long long int ans = 0;

  for (i = n; i > 0; i--) {
    if(ans + i <= (sum / 2)) {
      s1.push_back(i);
      ans += i;
    } else {
      s2.push_back(i);
    }
  }

  cout << s1.size() << endl;
  for (int x = 0; x < s1.size(); x++) {
    cout << s1[x] << ' ';
  }
  cout << endl;

  cout << s2.size() << endl;

  for (int x = 0; x < s2.size(); x++) {
    cout << s2[x] << ' ';
  }
  cout << endl;

  return 0;
}
