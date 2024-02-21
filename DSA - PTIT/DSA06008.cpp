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
#define fi first
#define sc second
#define pb push_back
#define eb emplace_back
#define ins insert
#define sz size()
#define len length
#define mp make_pair
#define sp << ' ' <<
#define endl '\n'
#define precision(x) setprecision(x) << fixed
#define keocon {cout << "I used to be your Tinkle Bell, we are too old for fairytales, my love."}


//end of template
ll count(int b[], int m, int d[], int x){
	if (x == 0) return 0;
	if (x == 1) return d[0];
	int tmp = upper_bound(b, b+m, x) - b;
	ll ans = m - tmp; //so luong phan tu lon hon x trong b
	ans += d[0] + d[1]; // 
	if (x == 2) ans -= (d[3] + d[4]);
	if (x == 3) ans += d[2];
	return ans;
}
void solve(){
	/*hav fun with coding*/
	int n, m; cin >> n >> m;
	int a[n+5], b[m+5];
	for (int i=0; i<n; i++) cin >> a[i];
	int d[10] = {0};
	for (int i=0; i<m; i++){
		cin >> b[i];
		if (b[i] < 5) d[b[i]]++;
	}
	sort(b, b+m);
	ll res = 0;
	for (int i=0; i<n; i++){
		res += count(b, m, d, a[i]);
	}
	cout << res;
}
// y tuong: goi 2 day lan luot la a, b;
// ta se sort day b 
// mathematic base: x^y > y^x neu y<x
// tuy nhien, se co mot vai truong hop dac biet ma ta can xu ly(tuc la voi x>y, ket qua x^y > y^x khong dung)
// goi res: so luong phan tu trong b ma lon hon phan tu a[i]
// d[]: tan suat xuat hien cac phan tu trong b
// dat: a[i] = x, b[j] = y;
// - x = 0 -> x^y <= y^x -> res += 0
// - x = 1, y = 0 -> x^y > y^x -> res += 1(return instantly)
// - x = 2, y = 3, 4 -> x^y < y^x -> res -= (d[3] - d[4])
// - x = 3, y = 2 -> x^y > y^x -> res += d[2]
main(){
	faster();
	int T = 1;
	cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	return 0;
}