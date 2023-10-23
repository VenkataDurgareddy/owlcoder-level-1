#include <bits/stdc++.h>
using namespace std;

int countDistinctFactors(int n) {
    int factors = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (i * i == n) {
                factors++;
            } else {
                factors += 2;
            }
        }
    }
    return factors;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int count = 0;
        for (int i = l; i <= r; i++) {
            int factors = countDistinctFactors(i);
            if (factors == 4) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
