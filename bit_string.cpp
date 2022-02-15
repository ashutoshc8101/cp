#include <iostream>
#include <math.h>

using namespace std;

int main() {
  const unsigned int M = 1000000007;
  unsigned int n;
  cin >> n;

  unsigned long long int answer = 1;

  for (unsigned int i = 0; i < n; i++) {
    answer = (answer * 2) % M;
  }

  cout << answer;

  return 0;
}
