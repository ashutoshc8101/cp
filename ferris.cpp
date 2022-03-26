#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  unsigned int n, i;
  unsigned long long int x;

  unsigned long long int temp;
  vector<unsigned long long int> children;

  cin >> n >> x;

  for (i = 0; i < n; i++) {
    cin >> temp;
    children.push_back(temp);
  }

  sort(children.begin(), children.end(), greater<unsigned long long int>());

  unsigned int count = 0;
  for (i = 0; i < children.size(); i++) {
    if (children[i] <= x) {
      count++;
    } else {
      continue;
    }

    for (unsigned j = i + 1; j < children.size(); j++) {
      if (children[i] + children[j] <= x) {
        children.erase(children.begin() + j);
      }
    }
  }

  cout << count << endl;

  return 0;
}
