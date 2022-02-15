#include <iostream>

using namespace std;

void swap(int arr[], int n, int i) {

  if (!(i < n / 2)) return;

  int temp = arr[i];
  arr[i] = arr[n - i - 1];
  arr[n - i - 1] = temp;

  swap(arr, n - 1, i + 1);
}

int main() {
  int n = 5;
  int arr[n] = {1, 2, 3, 4, 5};
  int temp;

  // // Iterative.
  // for (int i = 0; i < n / 2; i++) {
  //   temp = arr[i];
  //   arr[i] = arr[n - i - 1];
  //   arr[n - i - 1] = temp;
  // }


  // Recursive
  swap(arr, n, 0);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }

  return 0;
}


