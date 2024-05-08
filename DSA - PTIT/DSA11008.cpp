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
		this->data = x;
		this->left = this->right = NULL;
	}
};
void MakeNode(Node* root, int y, char c){
	if (c == 'L'){
		root->left = new Node(y);
		return;
	} else if (c == 'R'){
		root->right = new Node(y);
		return;
	}
}
void Insert(Node* root, int x, int y, char c){
	if (root == NULL){
		return;
	}
	if (root->data == x){
		MakeNode(root, y, c);
	} else {
		Insert(root->left, x, y, c);
		Insert(root->right, x, y, c);
	}
}
int CountLeaf(Node* root){
	if (root == NULL){
		return 0;
	}
	if (root->left == NULL and root->right == NULL){
		return 1;
	}
	return CountLeaf(root->left) + CountLeaf(root->right);
}
void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	Node* root = NULL;
	while (n--){
		int x, y;
		char c;
		cin >> x >> y >> c;
		if (root == NULL){
			root = new Node(x);
		}
		Insert(root, x, y, c);
	}
	cout << (CountLeaf(root->left) == CountLeaf(root->right));
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