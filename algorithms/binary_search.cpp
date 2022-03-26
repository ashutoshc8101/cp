#include <iostream>

using namespace std;

int binary_search(int arr[], int l, int r, int query) {

  int mid = l +  (r - l) / 2;

  if (l >= r) {
    if (arr[mid] != query) {
      return -1;
    }
  }

  if (arr[mid] < query) {
    return binary_search(arr, mid + 1, r, query);
  }

  if (arr[mid] > query) {
    return binary_search(arr, l, mid - 1, query);
  }

  if (arr[mid] == query) {
    return mid;
  } else {
    return -1;
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 23, 44, 67, 99};
  int size = sizeof(arr) / sizeof(arr[0]);
  int x = 67;

  int pos = binary_search(arr, 0, size - 1, x);

  if (pos > 0) {
    cout << "Found at position : " << pos << endl;
  } else {
    cout << "Not found" << endl;
  }

  return 0;
}
