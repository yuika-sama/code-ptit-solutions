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
Node* create_(int x){
	Node* node = new Node(x);
	return node;
}
void build(Node* root, int x, int y, char c){
	if (root!=NULL){
		if (root->val == x){
			if (c == 'L'){
				root->left = create_(y);
			} else if (c == 'R') {
				root->right = create_(y);
			}
			return;
		}
		build(root->left, x, y, c);
		build(root->right, x, y, c);
	}
}
void spiral_order(Node* root){
	stack<Node*> st1, st2;
	st1.push(root);
	Node* top;
	while (st1.size() or st2.size()){
		while (!st1.empty()){
			top = st1.top(); st1.pop();
			cout << top->val << ' ';
			if (top->right!=NULL){
				st2.push(top->right);
			}
			if (top->left!=NULL){
				st2.push(top->left);
			}
		}
		while (!st2.empty()){
			top = st2.top(); st2.pop();
			cout << top->val << ' ';
			if (top->left != NULL){
				st1.push(top->left);
			}
			if (top->right != NULL){
				st1.push(top->right);
			}
		}
	}
}
void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	Node* root = NULL;
	int x, y;
	char c;
	cin >> x >> y >> c;
	root = create_(x);
	build(root, x, y, c);
	n--;
	while (n--){
		cin >> x >> y >> c;
		build(root, x, y, c);
	}
	spiral_order(root);
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