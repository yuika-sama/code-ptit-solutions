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
	Node(int v){
		this->val = v;
		this->left = this->right = NULL;
	}
};
typedef Node* tree;
void build_(tree &root, int x){
	if (root == NULL){
		root = new Node(x);
		return;
	}
	if (root->val > x){
		build_(root->left, x);
	} else build_(root->right, x);
}
bool leaf(tree root){
	return (root->left == root->right and root->left == NULL);
}
int res;	
void traversal(tree root, int lv = 0){
	if (root!=NULL){
		if (leaf(root)){
			res = max(res, lv);
		} else {
			traversal(root->left, lv+1);
			traversal(root->right, lv+1);
		}
	}
}
void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	tree root = NULL;
	int x;
	while (n--){
		cin >> x;
		build_(root, x);		
	}
	res = -1;
	traversal(root);
	cout << res;
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