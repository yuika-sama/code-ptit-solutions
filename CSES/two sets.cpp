#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	long long n; cin >> n;
	long long sum = (n*(n+1))/2;
	vector<long long> r1, r2;
	if (sum % 2 == 0){
		cout << "YES" << endl;
//		vector<long long> r1, r2;
		long long mid = sum/2;
		for (int i=n; i>=1; i--){
			if (i <= mid){
				r1.push_back(i);
//				mid-=i;
				mid = mid - i;
			} else r2.push_back(i);
		}
		cout << r1.size() << endl;
		for (long long i = 0; i<(int)r1.size(); i++){
			cout << r1[i] << ' ';
		}
		cout << endl;
		cout << r2.size() << endl;
		for (long long i = 0; i<(int)r2.size(); i++){
			cout << r2[i] << ' ';
		}
	} else cout << "NO";
}
