#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
vector<long long> v(1e3 + 1, 0);
void fibo()
{
    v[0] = v[1] = 1;
    int f1 = 0, f2 = 1;
    for (int i = 2; f1 + f2 <= 1000; ++i)
    {
        int f = f1 + f2;
        v[f] = 1;
        f1 = f2;
        f2 = f;
    }
}

void TestCase()
{
    int n; cin >> n;
    for (int i=0; i<n; i++){
    	int x; cin >> x;
    	if (v[x]) cout << x << " ";
	}
	cout << endl;
}

main()
{
    fibo();
    faster();
    int T;
    cin >> T;
    while (T--) TestCase();
}
