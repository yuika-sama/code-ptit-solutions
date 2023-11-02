#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	int a, b;
	cin >> a >> b;
	if (a>b) swap(a,b);
	bool f[b+5];
	memset(f, true, sizeof(f));
	f[0] = false; f[1] = false;
	for (int i=2; i*i<=b; i++){
		if (f[i] == true){
			for (int j=i*i; j<=b; j+=i){
				f[j] = false;
			}
		}
	}
	for (int i=a; i<=b; i++){
		if (f[i] == true){
			cout << i << " ";
		}
	}
}
