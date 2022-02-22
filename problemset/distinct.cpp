#include <iostream>
#include <map>

using namespace std;

int main() {
  unsigned int n, i;
  cin >> n;
  map<unsigned long long int, unsigned int> m;
  unsigned long long int temp;

  for (i = 0; i < n; i++) {
    cin >> temp;
    map<unsigned long long int, unsigned int>::iterator it = m.find(temp);
    if (it == m.end()) {
      m.insert(make_pair(temp, 1));
    } else {
      it->second = it->second + 1;
    }
  }

  cout << m.size() << endl;

  return 0;
}
