#include <iostream>

using namespace std;

int main()
{
  const int N = 5;
  int arr[N] = {-1, -2, -3, -4, -5};

  int maxSum = INT8_MIN;
  int currSum = 0;

  for (int i = 0; i < N; i++) {

    currSum = currSum + arr[i];

    if (maxSum < currSum) {
      maxSum = currSum;
    }

    if (currSum < 0) {
      currSum = 0;
    }
  }

  cout << maxSum << endl;

  return 0;
}
