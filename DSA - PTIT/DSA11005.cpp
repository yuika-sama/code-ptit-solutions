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
	int val;
	Node *left, *right;
};
Node* create_(int x){
	Node* _Node = new Node;
	_Node -> val = x;
	_Node -> left = NULL;
	_Node -> right = NULL;
	return _Node;
}
Node* build_(int n, int *in, int *lv, int st, int e){
	if (n>0){
		Node* root = create_(lv[0]);
		int ind = -1;
		unordered_map<int, int> m;
		for (int i = st; i<=e; i++){
			if (in[i] == lv[0]){
				ind = i;
				break;
			}
			m[in[i]]++;
		}
		int L[m.size()], R[e-st-m.size()], l, r;
		l = r = 0;
		for (int i=1; i<n; i++){
			if (m[lv[i]]){
				L[l++] = lv[i];
			} else {
				R[r++] = lv[i];
			}
		}
		root -> left = build_(ind - st, in, L, st, ind-1);
		root -> right = build_(e - ind, in, R, ind+1, e);
		return root;
	}
	return NULL;
}
void post_order(Node* root){
	if (root->left != NULL){
		post_order(root->left);
	}
	if (root->right != NULL){
		post_order(root->right);
	}
	cout << root->val << ' ';
}
void solve(){
	/*hav fun with coding*/
	int n;
	cin >> n;
	int in[n], lv[n];
	for (int i=0; i<n; i++) cin >> in[i];
	for (int i=0; i<n; i++) cin >> lv[i];
	Node* root = build_(n, in, lv, 0, n-1);
	post_order(root);
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