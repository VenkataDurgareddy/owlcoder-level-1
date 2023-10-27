#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> sorted_a(a);
    sort(sorted_a.begin(), sorted_a.end());

    if (a == sorted_a) {
        cout << "YES" << endl;
        cout << "1 1" << endl;
    } else {
        int start = -1, end = -1;

        for (int i = 0; i < n; i++) {
            if (a[i] != sorted_a[i]) {
                start = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            if (a[i] != sorted_a[i]) {
                end = i;
                break;
            }
        }

        reverse(a.begin() + start, a.begin() + end + 1);

        if (a == sorted_a) {
            cout << "YES" << endl;
            cout << start + 1 << " " << end + 1 << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
