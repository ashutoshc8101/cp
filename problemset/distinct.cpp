#include <iostream>

using namespace std;

bool search(unsigned long int arr[], unsigned long int temp, unsigned int k) {
  bool found = false;
  for (unsigned int i = 0; i < k; i++) {
    if (arr[i] == temp) {
      found = true;
    }
  }

  return found;
}

int main() {
  unsigned int n, k;
  cin >> n;

  unsigned long int temp;
  unsigned long int arr[n];

  k = 0;
  for (unsigned int i = 0; i < n; i++) {
    cin >> temp;
    if(!search(arr, temp, k)) {
      arr[k] = temp;
      k++;
    }
  }

  cout << k;

  return 0;
}
