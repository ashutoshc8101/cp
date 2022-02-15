#include <iostream>

using namespace std;

int main() {
  unsigned long long int n;
  cin >> n;

  unsigned long long int count = 0;

  while (n > 0) {
    if (n % 5 == 0 && n % 2 == 0 || n % 10 == 0) {
      count++;
    }
    n--;
  }

  cout << count << endl;

  return 0;
}
