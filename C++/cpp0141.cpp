#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
vector<long long> f(1e6 + 1, 0);
void fibo()
{
    f[0] = 0, f[1] = 1;
    for (int i = 2; i <= 1e6; ++i)
        f[i] = f[i - 1] + f[i - 2];
}

void TestCase()
{
    long long n;
    cin >> n;
    for (int i = 0; i < f.size(); ++i)
    {
        if (f[i] >= n)
        {
            if (n == f[i])
                cout << "YES\n";
            else
                cout << "NO\n";
            return;
        }
    }
}

main()
{
    fibo();
    int T;
    cin >> T;
    while (T--) TestCase();
}
