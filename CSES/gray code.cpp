#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pb push_back
#define ll long long
#define lmao cout << "lmao"
using namespace std;
main(){
	int n; cin >> n;
	vector<string> gray;
	gray.pb("");
	for (int i=0; i<n; i++){
		int size = gray.size();
		for (int j = size-1; j>=0; j--){
			gray.pb(gray[j]); //dublicate the previous ones
		}
		size*=2;
		for (int j = 0; j<size; j++){
			if (j<gray.size()/2){
				gray[j] += "0";
			} else gray[j] += "1";
		}
	}
	for (int i=0; i<gray.size(); i++){
		cout << gray[i] << endl;
	}
}