#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s = "";

    while (n != 0) {
        for (int i = 9; i >= 0; i--) {
            if (i <= n) {
                s += to_string(i);
                n -= i;
            }
        }
    }

    reverse(s.begin(), s.end());
    s = s.substr(1);
    cout << s << endl;

    return 0;
}
