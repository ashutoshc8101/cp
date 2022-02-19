#include <iostream>
#include <math.h>

using namespace std;

int main() {
  unsigned short int q;
  cin >> q;
  unsigned long long int k, temp;
  unsigned long long int width;

  for (unsigned short int i = 0; i < q; i++) {
    cin >> k;
    temp = k;
    width = 0;
    while (temp > 0) {
      width++;
      temp = temp / 10;
    }

    if (k < 10) {
      cout << k << endl;
    } else {
      if (k % 2 != 0) {
        k -= 9;
        cout << (9 + k / width) % 10 << endl;
      } else {
        k++;
        k -= 9;
        cout << (int) ((9 + k / width) / 10) << endl;
      }
    }

  }

  return 0;
}
