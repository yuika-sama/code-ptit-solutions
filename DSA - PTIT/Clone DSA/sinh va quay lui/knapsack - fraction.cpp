#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
#define MAX 100
using namespace std;
struct item{
	int val, wg;
};
bool cmp(struct item a, struct item b){
	double r1 = (double)a.val / (double)a.wg;
	double r2 = (double)b.val / (double)b.wg;
	return r1>r2;
}
main(){
	int n, k; cin >> n >> k;
	item a[MAX];
	for (int i=0; i<n; i++){
		cin >> a[i].val >> a[i].wg;
	}
	double res = 0;
	sort(a, a+n, cmp);
	for (int i=0; i<n; i++){
		if (a[i].wg <= k){
			k -= a[i].wg;
			res += a[i].val;
		} else {
			res += a[i].val * ((double)k / (double)a[i].wg);
			break;
		}
	}
	cout << precision(2) << res;
}