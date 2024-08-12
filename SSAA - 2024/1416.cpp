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
		this->left = NULL;
		this->right = NULL;
	}
};
Node* make_node(int v){
	// Node node = NULL;
	Node* node;
	node->val = v;
	node->right = node->left = NULL;
	return node;
}
void build_(Node* tree, int x, int y, char c){
	if (tree!=NULL){
		if (tree->val == x){
			if (c == 'L'){
				tree->left = new Node(y);
			} else if (c == 'R'){
				tree->right = new Node(y);
			}
		} else {
			build_(tree->left, x,y,c);
			build_(tree->right,x,y,c);
		}
	}
}
void traversal(Node* root){
	if (root!=NULL){
		traversal(root->left);
		cout << root->val <<  ' ';
		traversal(root->right);
	}
}
int count_leaf(Node* root){
	if (root == NULL) return 0;
	if (root->left == root->right and root->left == NULL) return 1;
	return count_leaf(root->left) + count_leaf(root->right);
}
void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	int x, y;
	char c;
	Node* root = NULL;
	while (n--){
		cin >> x >> y >> c;
		if (root==NULL){
			root = new Node(x);
		}
		build_(root, x, y, c);
	}
	// traversal(root);
	cout << (count_leaf(root->left) == count_leaf(root->right));
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