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
	Node(int x){
		this->val = x;
		this->left = this->right = NULL;
	}
};
typedef Node* tree;
void postorder(tree root){
	if (root == NULL) return;
	postorder(root->left);
	postorder(root->right);
	cout << root->val << ' ';
}
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
bool equal(tree a, tree b){
	if (a == NULL and b == NULL) return true;
	if (a!=NULL and b!=NULL and a->val == b->val){
		return equal(a->left, b->left) and equal(a->right, b->right);
	}
	return false;	
}
void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	tree a = NULL;
	while (n--){
		int x, y; char c;
		cin >> x >> y >> c;
		if (a == NULL){
			a = new Node(x);
		}
		build_(a, x, y, c);
	}
	int m; cin >> m;
	tree b = NULL;
	while (m--){
		int x, y; char c;
		cin >> x >> y >> c;
		if (b == NULL){
			b = new Node(x);
		}
		build_(b, x, y, c);
	}
	cout << equal(a, b);
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