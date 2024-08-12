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
void build_(tree root, int x, int y, char c){
	if (root!=NULL){
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
}
void inorder(tree root, priority_queue<int, vector<int>, greater<int>> &s){
	if (root!=NULL){
		inorder(root->left, s);
		s.push(root->val);
		inorder(root->right, s);	
	}
}
void build_post(tree &root, priority_queue<int, vector<int>, greater<int>> &s){
	if (root!=NULL){
		build_post(root->left, s);
		root->val = s.top(); 
		s.pop();
		build_post(root->right, s);
	}
}
void traversal(tree root){
	if (root!=NULL){
		traversal(root->left);
		cout << root->val << ' ';
		traversal(root->right);	
	}
}
void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	tree root = NULL;
	int x, y; char c;
	while (n--){
		cin >> x >> y >> c;
		if (root == NULL){
			root = new Node(x);
		}
		build_(root, x, y, c);
	}
	priority_queue<int, vector<int>, greater<int>> s;
	inorder(root, s);
	while (!s.empty()){
		cout << s.top() << ' ';
		s.pop();
	}
	// build_post(root, s);
	// traversal(root);
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