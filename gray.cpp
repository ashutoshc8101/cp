#include <iostream>
#include <math.h>
#include <bitset>

using namespace std;

int g (int n) {
    return n ^ (n >> 1);
}

int main() {

  unsigned short int n;
  unsigned int i;
  cin >> n;

  for (i = 0; i < pow(2, n); i++) {
    string s = bitset<64> (g(i)).to_string();
    for (int k = 0 ; k < n; k++) {
      cout << s[s.length() - k - 1];
    }
    cout << endl;
  }

  return 0;
}
