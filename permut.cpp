#include <iostream>

using namespace std;

int main() {
  unsigned int n;
  cin >> n;

  if (n == 2 || n == 3) {
    cout << "NO SOLUTION" << endl;
  } else if (n == 4) {
    cout << "2 4 1 3"<< endl;
  }
   else {
    for (unsigned int i = 1; i <= n; i += 2) {
      cout << i << ' ';
    }
    for (unsigned int i = 2; i <= n; i += 2 ) {
      cout << i << ' ';
    }
  }

  return 0;
}
