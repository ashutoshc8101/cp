#include <iostream>

using namespace std;

int main() {
  unsigned long int n;
  cin >> n;
  unsigned long long int moves = 0;
  unsigned long long int prev, curr;

  cin >> prev;
  for (unsigned int i = 0; i < n - 1; i++) {
    cin >> curr;
    if (curr < prev) {
      moves += (prev - curr);
      curr = prev;
    }

    prev = curr;
  }

  cout << moves;

  return 0;
}
