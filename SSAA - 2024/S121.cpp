#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> vt_show;
vector<bool> vt_check;
void Cout() {
	for(int i=1; i<=n; i++) cout << vt_show[i] ;
	cout << endl;
}
void Try(int k) {
	// cau hinh day du thi in
	if(k == n) Cout();
	// neu chua du dkien
	if(k < n) {
		for(int i=1; i<=n; i++) {
			if(vt_check[i] && abs( vt_show[vt_show.size() - 1] - i ) != 1 ) {
				// backtrack neu i thoa man
				vt_check[i]=false;
				vt_show.push_back(i);
				Try(k+1);
				// reset gia tri cho vong lap tiep theo
				vt_check[i]=true;
				vt_show.erase(vt_show.end() - 1);
			}
		}
	} 
}
int main() {
	int test; cin >> test;
	while(test--) {
		// nhap gtri, reset vector sau moi vong lap
		cin >> n;
		vt_show.clear();
		vt_check.resize(n+1);
		vt_check[0]=false;
		for(int i=1; i <= n; i++) vt_check[i]=true;
		// de vong lap dau tien nhan gtri i=1
		vt_show.push_back(-1);
		Try(0);
	}
}