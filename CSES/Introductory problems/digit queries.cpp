#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp pake_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
main(){
	faster();
	int q; cin >> q;
	vector<ll> p(19, 1);
	for (int i=1; i<19; i++){
		p[i] = p[i-1]*10;
	}
	while (q--){
		ll n; cin >> n;
		ll numbers = 0; // so luong chu so cua block hien tai
		ll last = 0; //vi tri cuoi cung cua block lien phia truoc
		int digit_num;// which block is this
		for (int i=1; i<19; i++){
			numbers += (p[i] - p[i-1])*i;
			if (numbers >= n){
				digit_num = i;
				break;
			}
			last += ((p[i] - p[i-1])*i);
		}
		ll l = p[digit_num-1];
		ll r = p[digit_num] - 1;
		ll best  = 0, start;
		while (l<=r){
			ll mid = (l+r)/2;
			ll start_block = last + 1 +(mid - p[digit_num-1]) * digit_num;
			if (start_block <= n){
				if (mid > best){
					best  = mid;
					start = start_block;
				}
				l = mid+1;
			} else r = mid-1;
		}
		string res = to_string(best);
		cout<< res[n-start] << endl;
	}
}