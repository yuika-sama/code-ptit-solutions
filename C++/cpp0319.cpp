#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
using namespace std;
main(){
	int m, s;
	cin >> m >> s;
	if (s==0 and m==1) cout << "0 0"; else
	if (s<1 or s>9*m) cout << "-1 -1"; else{
		string max = "", min = "";
		int sum = s;
		while (m){
			if (sum>=9){
				max += '9';
				sum-=9;
			} else {
				max += sum + '0';
				sum=0;
			}
			m--;
		}
		min = max;
		reverse(min.begin(), min.end());
		if (min[0] == '0'){
			min[0] = '1';
			int i = 1;
			while(min[i] == '0'){
				i++;
			}
			min[i]-=1;
		}
		cout << min << " " << max;
	}
}
