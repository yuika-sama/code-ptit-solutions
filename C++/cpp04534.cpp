#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
int search(long long a[], long long x, int l, int r) {
    int m = (l + r) / 2;
    if (a[m] == x) return m;
    if (m == r) return -1;
    if (a[m] > x) return search(a, x, l, m - 1);
    else return search(a, x, m + 1, r);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        long long a[n + 5];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i] *= a[i];
        }

        bool check = false;
        sort(a, a + n);

        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                if (search(a, a[i] + a[j], 0, n - 1) != -1) {
                    check = true;
                    break;
                }
            }
            if (check) break;  // Exit the loop early if a match is found
        }

        if (check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;  // Add a return statement to main
}