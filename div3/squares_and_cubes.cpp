#include <iostream>
#include <math.h>
#include <map>

using namespace std;

int main() {
  unsigned short int t, i;
  long long unsigned int n, k, sq, cr;
  map<long long unsigned int, int> store;
  cin >> t;
  for (i = 0; i < t; i++) {
    cin >> n;
    for (k = 1; k <= sqrt(n); k++) {
      if (k*k <= n) {
        if (store.find(k*k) == store.end()) {
          store.insert(make_pair(k*k, 1));
        }
      }
      if (k * k * k <= n) {
        if (store.find(k*k*k) == store.end()) {
          store.insert(make_pair(k*k*k, 1));
        }
      }
    }
    cout << store.size() << endl;
    store.clear();
  }

  return 0;
}
