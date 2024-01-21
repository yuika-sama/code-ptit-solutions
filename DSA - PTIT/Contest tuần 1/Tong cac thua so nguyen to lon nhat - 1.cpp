#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pi pair<int, int>
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
int maxPrimeFactors(int n)
{
    int largest_prime = -1;
    int i = 2;
    while (i * i <= n) {
        while (n % i == 0) {
            largest_prime = i;
            n = n / i;
        }
        i = i + 1;
    }
    if (n > 1) {
        largest_prime = n;
    }
    return largest_prime;
}
main(){
	faster();
	vector<int> f(100001, 0);
	f[1] = 0;
	for (int i=2; i<=100000; i++){
		f[i] = maxPrimeFactors(i);
	}
	int t; cin >> t;
	while (t--){
		int l, r; cin >> l >> r;
		ll sum = 0;
		for (int i=l; i<=r; i++){
			sum += f[i];
		}
		cout << sum << endl;
	}
}