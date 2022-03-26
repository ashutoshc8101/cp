#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
  unsigned int t, i;
  short int n, j;
  unsigned long long int temp;
  map<unsigned long long int, int> perms;

  cin >> t;
  for (i = 0; i < t; i++) {
    cin >> n;
    for (j = 0; j < n; j++) {
      cin >> temp;
      while(temp > n) {
        temp /= 2;
      }
      if(perms.find(temp) == perms.end()) {
        perms.insert(make_pair(temp, 1));
      } else {
        while(perms.find(temp) != perms.end()){
          temp /= 2;
        }
        if (temp != 0) {
          perms.insert(make_pair(temp, 1));
        }
      }
    }

    if (perms.size() == n) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
    perms.clear();
  }

  return 0;
}
