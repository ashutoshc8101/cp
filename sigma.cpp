#include <iostream>
#include <map>

using namespace std;

map<long long unsigned int, long long unsigned int> m;

long long unsigned int sigma(long long unsigned int i) {

    long long unsigned n = 1;

    while(i % n == 0) {
        n++;
    }

    m.insert(make_pair(i, n));

    return n;
}

int main() {
    const unsigned int M = 1000000007;
    unsigned int t, i;
    long long unsigned int n, k;
    long long unsigned int sum = 0;
    cin >> t;
    for(i = 0; i < t; i++) {
        cin >> n;
        sum = 0;
        for (k = 1; k <= n; k++) {
            sum = (sum + sigma(k)) % M;
        }
        cout << sum << endl;
    }

    return 0;
}

