#include <iostream>
#include <queue>

using namespace std;

int main() {
    long long unsigned int t, n, i, j;
    queue<long long unsigned int> stack;

    cin >> t;
    for(i = 0; i < t; i++) {
      cin >> n;

      while (n > 1) {
        n--;
        stack.push(n);
        n--;
      }

      while(stack.size() > 1) {
        stack.pop();
        stack.push(stack.front());
        stack.pop();
      }

      cout << stack.front() << endl;

      stack.pop();
    }

    return 0;
}
