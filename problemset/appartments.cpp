#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, m, i;
  long int diff;
  long int temp;

  cin >> n >> m >> diff;

  vector<long int> desired;
  vector<long int> size_of_apps;

  for (i = 0; i < n; i++) {
    cin >> temp;
    desired.push_back(temp);
  }

  for (i = 0; i < m; i++) {
    cin >> temp;
    size_of_apps.push_back(temp);
  }

  int count = 0;

  for (i = 0; i < n; i++) {
    for (int k = 0; k < m; k++) {
      if (desired[i] <= size_of_apps[k] + diff && desired[i] >= size_of_apps[k] - diff) {
        count++;
        size_of_apps.erase(size_of_apps.begin() + k);
        m--;
      }
    }
  }

  cout << count;
  return 0;
}
