#include <iostream>

using namespace std;

int main() {
  int n = 10;
  int arr[n] = {5, 22, 12, 235, 1, 234, 0, -12, 4, 3};

  int max = INT16_MIN;
  int min = INT16_MAX;

  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }

    if (min > arr[i]) {
      min = arr[i];
    }
  }

  cout << "MAX : " << max << endl;
  cout << "MIN : " << min << endl;

  return 0;
}
