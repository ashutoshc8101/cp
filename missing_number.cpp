#include <iostream>

using namespace std;

int main() {
  unsigned long long int n;
  unsigned long long int temp;
  cin >> n;

  unsigned long long int sum = (n * (n + 1)) / 2;

  for (unsigned long long int i = 0; i < n - 1; i++) {
    cin >> temp;
    sum -= temp;
  }

  cout << sum << endl;
  return 0;
}
