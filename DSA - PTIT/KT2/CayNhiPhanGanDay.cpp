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
void inorder(Node* root){
	if (root!=NULL){
		inorder(root->left);
		cout << root->val << ' ';
		inorder(root->right);
	}
}
Node* insert_(Node* root, int v, queue<Node*>& q){
	Node* node = new Node(v);
	if (root == NULL){
		root = node;
	} else if (q.front()->left == NULL){
		q.front()->left = node;
	} else {
		q.front()->right = node;
		q.pop();
	}
	q.push(node);
	return root;
}
Node* create_(int a[], int n){
	Node* root = NULL;
	queue<Node*> q;
	for (int i=0; i<n; i++){
		root = insert_(root, a[i], q);
	}
	return root;
}
void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	int a[n+5];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	Node* root = create_(a, n);
	inorder(root);
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