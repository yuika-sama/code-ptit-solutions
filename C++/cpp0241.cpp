#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	faster()
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		int a[n+5];
		for (int i=0; i<n; i++) cin >> a[i];
		int l = n-1, r = 0, d = 0;
		while (l>=r){
			if (a[r] == a[l]) {
				r++, l--;
			} else if (a[r] > a[l]){
				l--;
				a[l] = a[l] + a[l+1];
				d++;
			} else {
				r++;
				a[r]= a[r] + a[r-1];
				d++;
			}
		}
		//check xem co phai bien doi o dau ben phai hoac ben trai hay khong. neu co thi d++ va bien doi, neu khong thi skip. co the dung deque de thay the cach daq tren
		cout << d << endl;
	}
}
