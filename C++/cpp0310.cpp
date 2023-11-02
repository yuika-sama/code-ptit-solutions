#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
long long Min(string a, string b)
{
    for (int i = 0; i < a.length(); ++i) {
        if (a[i] == '6')
            a[i] = '5';
    }
    for (int i = 0; i < b.length(); ++i) {
        if (b[i] == '6')
            b[i] = '5';
    }
    long long x = stoll(a), y = stoll(b);
    return x + y;
}

long long Max(string a, string b)
{
    for (int i = 0; i < a.length(); ++i) {
        if (a[i] == '5')
            a[i] = '6';
    }
    for (int i = 0; i < b.length(); ++i) {
        if (b[i] == '5')
            b[i] = '6';
    }
    long long x = stoll(a), y = stoll(b);
    return x + y;
}

main(){
	faster();
	int t; cin >> t;
	while (t--){
		string a, b;
		cin >> a >> b;
		cout << Min(a,b) << ' ' << Max(a,b) << endl;
	}
}
