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
	int w, p;	
//	item(int w, int p){
//		this->p = p;
//		this->w = w;
//	}
};
bool cmp(struct item a, struct item b){
	double r1 = (double)a.p/(double)a.w;
	double r2 = (double)b.p/(double)b.w;
	return r1>r2;
}
double solve(struct item a[], int n, int b){
	double res = 0.0;
	sort(a, a+n, cmp);
	for (int i=0; i<n; i++){
		if (a[i].w <= b){
			b-=a[i].w;
			res += a[i].p;
		} else {
			res += a[i].p * ((double)b / (double)a[i].w);
			break;
		}
	}
	
	return res;
}
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n, b; cin >> n >> b;
		struct item a[100];
		for (int i=0; i<n; i++){
			int x, y; cin >> x >> y;
			a[i].w = y;
			a[i].p = x	;
		}
		cout << precision(2) << solve(a, n, b) << endl;
	}
}