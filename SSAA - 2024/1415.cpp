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
		data = x;
		left = right = NULL;
	}
};
void reverseLevelOrder(Node* root){
	queue<Node*> Q;
	Q.push(root);
	stack<Node*> S;

	while (!Q.empty()){
		Node* node = Q.front(); Q.pop();
		S.push(node);
		if (node->right) Q.push(node->right);
		if (node->left) Q.push(node->left);
	}
	while (!S.empty()){
		cout << S.top()->data << ' ';
		S.pop();
	}
}
void insert(Node *root, int n1, int n2, char c){
	if (root == NULL) return;
	if (root -> data == n1){
		if (c == 'L') root->left = new Node(n2);
		else root->right = new Node(n2);
	} else {
		insert(root->left, n1, n2, c);
		insert(root->right, n1, n2, c);
	}
}
void solve(){
	/*hav fun with coding*/	
	int n; cin >> n;
	Node *root = NULL;
	while (n--){
		int n1, n2; char c;
		cin >> n1 >> n2 >> c;
		if (root == NULL){
			root = new Node(n1);
			if (c == 'L') root->left = new Node(n2);
			else root->right = new Node(n2);
		} else insert(root, n1, n2, c);
	}
	reverseLevelOrder(root);
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