#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  unsigned short int n, i;
  cin >> n;

  unsigned long int temp;
  unsigned long long int sum = 0;
  vector<unsigned long long int> s1;

  for(i = 0; i < n; i++) {
    cin >> temp;
    sum += temp;
    s1.push_back(temp);
  }

  sort(s1.begin(), s1.end(), greater<int>());

  if (sum % 2 == 1) {
    sum++;
  }

  unsigned long long int sum1 = 0, sum2 = 0;
  for(int i = 0; i < s1.size(); i++) {
    if (s1[i] + sum1 < (sum / 2)) {
      sum1 += s1[i];
    } else {
      sum2 += s1[i];
    }
  }

  cout << (sum1 > sum2 ? sum1 - sum2 : sum2 - sum1) << endl;

  return 0;
}
