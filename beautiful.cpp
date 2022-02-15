#include <iostream>
#include <vector>

using namespace std;

int main() {
  unsigned long long int n, i, temp, k, p;
  cin >> n;

  vector<unsigned long long int> store;

  for (i = 1; i < n; i++) {
    store.push_back(i + 1);
  }

  temp = 1;

  cout << temp << ' ';
  p = n - 1;
  for (i = 1; i < n; i++) {
    for (k = 0; k < p; k++) {
      if (store[k] - temp != 1 || store[k] - temp != -1) {
        cout << store[k] << ' ';
        temp = store[k];
        store.erase(store.begin() + k);
        p--;
      }
    }
  }

  if (store.size() != 0) {
    cout << "NO SOLUTION" << endl;
  }

  return 0;
}
