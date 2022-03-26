#include <iostream>

using namespace std;

int num_divisors(long long unsigned int n) {
  long long unsigned int i = 1;
  long long unsigned int count = 0;
  for (i = 1; i <= n; i++) {
    if (n % i == 0) {
      count++;
    }
  }

  return count;
}

int main() {
  long long unsigned int a, b, i;
  short int n;
  cin >> a >> b >> n;

  unsigned int count = 0;
  for (i = a; i <= b; i++) {
    if (num_divisors(i) == n) {
      count++;
    }
  }

  cout << count;

  return 0;
}
