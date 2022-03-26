#include <iostream>
#include <vector>

using namespace std;


int fibonaci(int n, vector<int> &dp) {
  if (n < 0) {
    return -1;
  }

  if (n <= 1) {
    return n;
  }

  if (dp[n] != -1) return dp[n];

  dp[n] = fibonaci(n -1, dp) + fibonaci(n - 2, dp);

  return dp[n];
}

int main() {

  int i = 0;
  vector<int> dp(20, -1);

  while (i < 20) {
    cout << fibonaci(i, dp) << endl;
    i++;
  }

  return 0;
}
