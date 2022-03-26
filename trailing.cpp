#include <iostream>

using namespace std;

int main() {
  unsigned long long int n;
  cin >> n;

  unsigned long long int count = 0, temp;

  count = n / 5;
  temp = count;

  while (temp / 5 > 0) {
    count += temp / 5;
    temp /= 5;
  }

  cout << count << endl;

  return 0;
}
