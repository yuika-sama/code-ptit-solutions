#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
void interpolation_search(int a[], int n, int x){
	int l = 0, r = n-1;
	while (a[l] <= x and a[r]>=x){ 
		if (a[r] - a[l] == 0){ //khoang gia tri giong nhau
			cout << (l+r)/2;
			return;
		}
		int m = l+((x-a[l])*(r-l)) / (a[r] - a[l]); //cai loz j day?
		if (a[m] < x) l = m+1; //giong binary
		else if (a[m] > x) r = m-1;
		else {
			cout << m;
			return;
		}
	}
	if (a[l] == x){ //het cuu 
		cout << l;
		return;
	}
	cout << -1;
	return;
}
void search(int a[], int n, int x){
	interpolation_search(a, n, x);
}
main(){
	int a[] = {7,2,3,1,9,2,2,3,0,5,6,4,2,4,6,8,9,8,5};
	int n = 19;
	int x = 1;
	sort(a, a+n);
	search(a,n,x);
	//true input: 1
}