#include <iostream>

using namespace std;

int main()
{
  short int t, i;
  long long int x0, n, itr;

  long long int result = 0;

  cin >> t;

  for (i = 0; i < t; i++) {
    cin >> x0 >> n;
    result = x0;

    for (itr = 0; itr < n; itr++) {
      if (result % 2 == 0) {
        result -= (itr + 1);
      } else {
        result += itr + 1;
      }
    }

    cout << result << endl;
  }

  return 0;
}
