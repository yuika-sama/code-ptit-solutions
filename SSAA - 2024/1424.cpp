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
	Node *left, *right;
	Node(int x){
		data = x;
		left = right = NULL;
	}
};
int n, id;
vector<int> a(1005), f(1005);
void insert(Node* &root, int x){
	if (root == NULL){
		root = new Node(x);
		return;
	}
	if (root->data>x) insert(root->left, x);
	if (root->data<x) insert(root->right, x);
}
void inOrder(Node *root){
	if (root == NULL) return;
	if (root->left) inOrder(root->left);
	// cout << root->data << ' ';
	f[id++] = root->data;
	if (root->right) inOrder(root->right);
}
void solve(){
	/*hav fun with coding*/
	Node* root = NULL;
	cin >> n;
	a.assign(1005, 0);
	f.assign(1005, 0);
	id = 1;
	for (int i=1; i<=n; i++){
		cin >> a[i];
		insert(root, a[i]);
	}
	inOrder(root);
	cout << (a == f);
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