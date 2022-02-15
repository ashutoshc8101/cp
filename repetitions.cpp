#include <iostream>

using namespace std;

int main() {
  unsigned int n, max, tempMax;
  char ch, prev;
  string inp;
  max = 0;
  tempMax = 0;

  cin >> inp;

  for (int i = 0; inp[i] != '\0'; i++) {
    ch = inp[i];
    if (tempMax == 0) {
      tempMax = 1;
    } else if (prev == ch) {
      tempMax++;
    } else if (prev != ch) {
      if (max < tempMax) {
        max = tempMax;
      }
      tempMax = 1;
    }
    prev = ch;
  }

  if (max < tempMax) {
    max = tempMax;
  }

  cout << max;

  return 0;
}
