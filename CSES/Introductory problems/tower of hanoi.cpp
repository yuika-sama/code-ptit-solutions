#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp pake_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
void Try(int source, int aux, int des, int n){
	if (n==0) return;
//	cout << source << ' ' << des << endl;
	Try(source, des, aux, n-1);
	cout << source << ' ' << des << endl;
	Try(aux, source, des, n-1);
}
main(){
	int n;
	cin >> n;
	cout << ((1<<n) - 1) << endl;
	Try(1, 2, 3, n);
}