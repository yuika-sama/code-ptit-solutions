#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pb push_back
using namespace std;
int sum(long long n){
	int r = 0;
	while (n){
		r+=n%10;
		n/=10;
	}
	return r;
}
main(){
	bool check[100007];
	memset(check, true, sizeof(check));
	check[0] = false, check[1] = false;
	for (int i=2; i*i<=100007; i++){
		if (check[i] == true){
			for (int j = i*2; j<=100007; j+=i){
				check[j] = false;
			}
		}
	}
	long long n;
	int r1, r2;
	cin >> n;
	if (n<1e5+7 && check[n] == true) cout << "NO"; else {
		r1 = sum(n);
		while (n%2==0){
			r2+=2;
			n/=2;
		}
		for (int i=3; i<=sqrt(n); i+=2){
			if (n%i==0){
				int cnt = 0;
				while (n%i==0){
					n/=i;
					cnt++;
				}
				r2+=sum(i) * cnt;
			}
		}
		if (n>1) r2+=sum(n);
		if (r1==r2) cout << "YES"; else cout << "NO";
	}
}