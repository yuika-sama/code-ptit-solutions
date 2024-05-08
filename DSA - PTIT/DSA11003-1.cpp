#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define fi first
#define sc second
#define pb push_back
#define eb emplace_back
#define ins insert
#define sz size()
#define len length
#define mp make_pair
#define sp << ' ' <<
#define endl '\n'
#define precision(x) setprecision(x) << fixed
#define keocon {cout << "I used to be your Tinkle Bell, we are too old for fairytales, my love."}


//end of template
struct Node{
	int data;
	Node* left;
	Node* right;
	Node(){

	}
	Node(int val){
		data = val;
		left = right = NULL;
	}
};
int n;
vector<int> in, pre;
int c = 0;
Node* init_(int l1 = 0, int r1 = n-1, int l2 = 0){
	if (l1>r1) return NULL;
	Node* root = new Node(pre[l2]);
	auto it = find(in.begin(), in.end(), pre[l2]);
	int m = it - in.begin();
	root->left = init_(l1, m-1, l2+1);
	root->right = init_(m+1, r1, l2+m-l1+1);
	return root;
}
void postOrder(Node* root){
	if (root){
		postOrder(root->left);
		postOrder(root->right);
		cout << root->data << ' ';
	}
}
void solve(){
	/*hav fun with coding*/
	cin >> n;
	in.resize(n);
	pre.resize(n);
	for (int i=0; i<n; i++){
		cin >> in[i];
	}
	for (int i=0; i<n; i++){
		cin >> pre[i];
	}
	Node* root = init_();
	postOrder(root);
}
main(){
	faster();
	int T = 1;
	cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	return 0;
}