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
tree build_(int l, int r, vector<int> a){
	if (l>r) return NULL;
	int mid = (l+r)>>1; //(l+r)/2
	tree R = new Node(a[mid]);
	R->left = build_(l, mid-1, a);
	R->right = build_(mid+1, r, a);
	return R;
}	
void traversal(tree root){
	if (root!=NULL){
		cout << root->val << ' ';
		traversal(root->left);
		traversal(root->right);
	}
}
void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	vector<int> a(n);
	for (auto& i:a) cin >> i;
	sort(a.begin(), a.end());
	tree root = build_(0, n-1, a);
	traversal(root);
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