#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
void heapify(int a[], int n, int i){//heap create
	int largest = i; //node goc
	int l = 2*i + 1; //node trai
	int r = 2*i + 2; //node phai
	if (l<n and a[l] > a[largest]){
		largest = l;
	}
	if (r<n and a[r] > a[largest]){
		largest = r;
	}
	if (largest != i){
		swap (a[i], a[largest]);
		heapify(a, n, largest);//tao tiep node con
	}
}
void heapSort(int a[], int n){
	for (int i = n/2; i>=0; i--){
		heapify(a, n, i);
	}
	for (int i = n-1; i>=0; i--){
		swap(a[0], a[i]);
		heapify(a, i, 0);
	}
}
main(){
	int a[] = {7,2,3,1,9,2,2,3,0,5,6,4,2,4,6,8,9,8,5};
	int n = 19;
	heapSort(a, n);
	for (int i = 0; i<n; i++){
		cout << a[i] << ' ';
	}
}