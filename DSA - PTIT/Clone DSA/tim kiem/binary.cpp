#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
void binary_search(int a[], int l, int r, int x){
	while (l<=r){
		int m = (l+r)/2;
		if (a[m] == x){
			cout << m;
			return;
		} else if (a[m] > x){
			r = m-1;
		} else l = m+1;
	}
	cout << -1;
}
void search(int a[], int n, int x){
	binary_search(a, 0, n-1, x);
}
main(){
	int a[] = {7,2,3,1,9,2,2,3,0,5,6,4,2,4,6,8,9,8,5};
	int n = 19;
	int x = 1;
	sort(a, a+n);
	search(a,n,x);
	//true input: 1
}