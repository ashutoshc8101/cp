#include <iostream>

using namespace std;

void swap(int arr[], int i, int j) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

int main() {
  const int n = 9;

  int arr[n] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};

  int j = 0;

  // for (int i = 0; i < n; i++) {
  //   if (arr[i] < 0) {
  //       swap(arr, i, j);
  //       j++;
  //   }
  // }

  // Two pointer method.

  for (int i = 0, j = n - 1; i < j;) {
    if (arr[i] < 0) {
      if (arr[j] >= 0) {
        j--;
      }
      i++;
    } else {
      if (arr [j] < 0) {
        swap(arr, i, j);
        i++;
      }
      j--;
    }
  }

  for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }

  return 0;
}
