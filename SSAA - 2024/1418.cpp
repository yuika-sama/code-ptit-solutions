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
bool leaf(tree root){
	return (root->left == root->right and root->left == NULL);
}
bool isFull(tree root){
	if (root!=NULL){
		if (!leaf(root)){
			if (root->left == NULL or root->right == NULL){
				return false;
			} 
			return isFull(root->left) and isFull(root->right);
		}
	}
	return true;
}
void solve(){
	/*hav fun with coding*/
	int n; 
	cin >> n;
	int x, y; char c;
	unordered_map<int, tree> m;
	tree root = NULL;
	cin >> x >> y >> c;
	root = new Node(x);
	if (c == 'L'){
		root->left = new Node(y);
		m[y] = root->left;
	} else if (c == 'R'){
		root->right = new Node(y);
		m[y] = root;
	}
	m[x] = root;
	n--;
	while(n--){
		cin >> x >> y >> c;
		if (c == 'L'){
			m[x]->left = new Node(y);
			m[y] = m[x]->left;
		} else if (c == 'R'){
			m[x]->right = new Node(y);
			m[y] = m[x]->right;
		}
	}
	// postorder(root);
	cout << isFull(root);
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