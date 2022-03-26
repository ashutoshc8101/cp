#include <iostream>
#include <stack>

using namespace std;

int main() {
  unsigned int t, i, num, minuend;
  int k, z;
  cin >> t;

  string a, s, answer;

  for (i = 0; i < t; i++) {
    cin >> a >> s;

    z = s.length() - 1;
    stack<int> st;

    for (k = a.length() - 1; k >= 0; k--, z--) {
      if (z < 0 && k >= 0) {
        st.push(-1);
        break;
      }
      num = ((int) s[z] - '0');
      minuend = ((int) a[k] - '0');
      if (num < minuend) {
        z--;
        num = 10 * ((int) s[z] - '0') + num;
      }
      if (num - minuend > 9) {
        st.push(-1);
        break;
      }

      st.push(num - minuend);
    }
    if (st.top() == -1) {
      cout << -1 << endl;
    } else {
      while(z >= 0) {
        st.push((int) s[z] - '0');
        z--;
      }

      while(st.top() == 0) {
        st.pop();
      }

      while(!st.empty()) {
        cout << st.top();
        st.pop();
      }
      cout << endl;
    }
  }

  return 0;
}
