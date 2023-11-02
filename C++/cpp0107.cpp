#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
int a[15]= {0,1,1,0,3,2,2,0,1,3,2,2,0,1,3}; //ma de 101
int b[15]= {0,2,2,0,1,2,3,3,1,1,2,3,3,1,1}; //ma de 102
main(){
	faster();
	int t; cin >> t;
	while (t--){
		int n; cin >> n; //ma de
		double sum = 0;
		for (int i=0; i<15; i++){
			char x; cin >> x; //nhap tung dap an
			if (n==101){
				if (x-'A'==a[i]) sum = sum + (double)10/15; //check dap an de 101
			} else if (n==102){
				if (x-'A'==b[i]) sum = sum + (double)10/15; //check dap an de 102
			}
		}
		cout << precision(2) << sum << endl;
	}
}

