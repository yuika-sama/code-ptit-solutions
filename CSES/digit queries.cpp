#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster();
	int q; cin >> q;
	vector<long long> p(19, 1);
	for (int i=1; i<19; i++){
		p[i] = p[i-1]*10;
	}
	while (q--){
		long long n; cin >> n;
		long long numbers = 0;//so chu cai cua block<2 chu so -> 90*2 = 180 chu so>
		long long last = 0; // vi tri cuoi cung cua block truoc do. vi du: n dang o block 3 chu so -> vi tri cuoi cung cua block 2 chu so la 99;
		int digit_num; //block hien tai la gi<block 1, 2, ..., 18>
		for (int i=1; i<19; i++){
			numbers += (p[i] - p[i-1]) * i;
			if (numbers >= n){
				digit_num = i;
				break;
			}
			last += (p[i] - p[i-1])*i;
		}
		long long l = p[digit_num-1];
		long long r = p[digit_num]-1;
		long long best=0, start;
		while (l<=r){
			long long mid = (l+r)/2;
			long long start_block = last + 1 + (mid - p[digit_num-1]) * digit_num;
			if (start_block <= n){
				if (mid > best){
					best = mid;
					start = start_block;
				}
				l = mid+1;
			} else r = mid - 1;
		}
		string rs = to_string(best);
		cout << rs[n-start] << endl;
	}
}