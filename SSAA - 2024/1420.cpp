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
	Node(int val){
		this->val = val;
		this->left = this->right = NULL;
	}
};
typedef Node* tree;
void build_(tree root, int x, int y, char c){
	if (root == NULL) return;
	if (root->val == x){
		if (c=='L'){
			root->left = new Node(y);
		} else if (c == 'R'){
			root->right = new Node(y);
		}
	} else {
		build_(root->left, x, y, c);
		build_(root->right, x, y, c);
	}
}
void traversal(tree root){
	if (root!=NULL){
		traversal(root->left);
		traversal(root->right);
		cout << root->val << ' ';
	}
}
int res;
bool leaf(tree root){
	return (root->left == root->right and root->left == NULL);
}
int cal(tree root){
	if (root == NULL) return 0;
	int L = cal(root->left), R = cal(root->right);
	if (leaf(root)){
		return root->val;
	}
	if (root->left == NULL){
		return R+root->val;
	}
	if (root->right == NULL){
		return L+root->val;
	}
	res = max(res, L+R+root->val);
	return max(L, R) + root->val;
}
void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	tree root = NULL;
	while (n--){
		int x, y;
		char c;
		cin >> x >> y >> c;
		if (root == NULL){
			root = new Node(x);
		}
		build_(root, x, y, c);
	}
	// traversal(root);
	res = -1e9;
	cal(root);
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