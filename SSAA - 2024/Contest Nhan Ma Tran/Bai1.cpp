#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sqr(x) x*x
#define fi first
#define sc second
#define pb push_back
#define eb emplace_back
#define ins insert
#define sz size()
#define len length
#define mp make_pair
#define al(v) (v).begin(), (v).end()
#define sp << ' ' <<
#define endl '\n'
#define precision(x) setprecision(x) << fixed
#define nekonooke {cout << "Ame nara ashita wa hareru darou~"}
const ll MOD = 1000000000019;

//end of template

map<unsigned ll, string> f;

string addStrings(string num1, string num2) {
    string result = "";
    int carry = 0;
    int i = num1.length() - 1, j = num2.length() - 1;
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += num1[i--] - '0';
        if (j >= 0) sum += num2[j--] - '0';
        carry = sum / 10;
        result += (sum % 10) + '0';
    }
    reverse(result.begin(), result.end());
    return result;
}

string multiplyStrings(string num1, string num2) {
    int n = num1.size(), m = num2.size();
    vector<int> result(n + m, 0);
    
    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + result[i + j + 1];
            result[i + j] += sum / 10;
            result[i + j + 1] = sum % 10;
        }
    }
    
    string res = "";
    for (int num : result) if (!(res.empty() && num == 0)) res += to_string(num);
    return res.empty() ? "0" : res;
}

string modString(string num, ll mod) {
    ll result = 0;
    for (char c : num) {
        result = (result * 10 + (c - '0')) % mod;
    }
    return to_string(result);
}

string fib(unsigned ll n) {
    if (f.count(n)) return f[n];
    unsigned ll k = n / 2;
    if (n % 2 == 0) {
        string res = addStrings(multiplyStrings(fib(k-1), fib(k-1)), multiplyStrings(fib(k), fib(k)));
        return f[n] = modString(res, MOD);
    } else {
        string res = addStrings(multiplyStrings(fib(k), fib(k+1)), multiplyStrings(fib(k), fib(k-1)));
        return f[n] = modString(res, MOD);
    }
}

void solve() {
    ll n; cin >> n;
    n++;
    f.clear();
    f[0] = f[1] = "1";
    cout << (n == 0 ? "0" : fib(n-1));
}

int main() {
    faster();
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
        cout << endl;
    }
    cerr << "Time elapsed: " << (1.0 * clock() / CLOCKS_PER_SEC) << "s.\n";
    return 0;
}
