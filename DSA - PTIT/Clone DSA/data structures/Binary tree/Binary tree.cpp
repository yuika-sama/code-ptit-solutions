#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
}*T;
class Tree{
	public:
		Tree(void){
			T = NULL;
		}
		void *make_node(void);
		void make_root(void);
		void push_left(node *root, int value);
		void push_right(node *root, int value);
		void pop_left(node *root, int value);
		void pop_right(node *root, int value);
		void clear_leaf(node *root);
		void pre_order(node *root);
		void in_order(node *root);
		void post_order(node *root);
		void Funtion(void);
};
node *Tree::make_node(void){
	node *tmp;
	int value; cin >> value;
	tmp = new node;
	tmp->data = value;
	tmp->left = NULL;
	tmp->right = NULL;
	return tmp;
}
void Tree::make_root(void){
	if (T==NULL){
		node *tmp = make_node();
		T = tmp; tmp->left = NULL; tmp->right = NULL;
	}
	else {
		return;
	}
}
void Tree::push_left(node *root, int value){
	if (root!=NULL){
		if (root->data == value){
			if (root->left==NULL){
				return;
			} else {
				root->left = make_node(value);
				return;
			}
		}
		push_left(root->left, value);
		push_left(root->right, value);
	}
}
void Tree::push_right(node *root, int value){
	if (root!=NULL){
		if (root->data == value){
			if (root->right == NULL){
				return;
			} else {
				root->right = make_node(value);
				return;
			}
		}
		push_right(root->left, value);
		push_right(root->right, value);
	}
}
void Tree:pop_left(node *root, int value){
	if (root->data == value){
		if (root->left == NULL){
			return;
		} else if ((root->left)->left != NULL or (root->left)->right != NULL){
			return;
		}
		else if ((root->left)->left == NULL and (root->left)->right == NULL){
			node *rp = root->left;
			root->left=NULL;
			delete(rp);
			return;
		}
	}
	pop_left(root->left, value);
	pop_left(root->right, value);
}
void Tree:pop_right(node *root, int value){
	if (root->data == value){
		if (root->right == NULL){
			return;
		} else if ((root->right)->left != NULL or (root->right)->right != NULL){
			return;
		}
		else if ((root->right)->left == NULL and (root->right)->right == NULL){
			node *rp = root->right;
			root->right=NULL;
			delete(rp);
			return;
		}
	}
	pop_right(root->left, value);
	pop_right(root->right, value);
}
void Tree::clear_leaf(node *root){
	if (root!=NULL){
		clear_leaf(root->left);
		clear_leaf(root->right);
		delete(root);
	}
}
void Tree::pre_order(node *root){
	if (root!=NULL){
		cout << root->data << " ";
		pre_order(root->left);
		pre_order(root->right);
	}
}
void Tree::in_order(node *root){
	if (root!=NULL){
		in_order(root->left);
		cout << root->data << ' ';
		in_order(root->right);
	}
}
void Tree::post_order(node *root){
	if (root !=NULL){
		post_order(root->left);
		post_order(root->right);
		cout << root->data << ' ';
	}
}
void Tree::Function(){
	int choice, value;
	node *tmp, *root;
	do{
		cout << "1. make root" << endl;
		cout << "2. make left node" << endl;
		cout << "3. make right node" << endl;
		cout << "4. remove left node" << endl;
		cout << "5. remove right node" << endl;
		cout << "6. remove tree" << endl;
		cout << "7. post order traversal" << endl;
		cout << "8. in order traversal" << endl;
		cout << "9. post order traversal" << endl;
		cout << "0. exit" << endl;
		cin >> value;
		switch (choice){
			case 1:
				make_root();
				break;
			case 2:
				root = T;
				cin >> value; cout << endl;
				push_left(value);
				break;
			case 3:
				root = T;
				cin >> value;
				cout << endl;
				push_right(value);
				break;
			case 4:
				root = T;
				cin >> value;
				pop_left(root, value);
				break;
			case 5:
				root = T;
				cin >> value;
				pop_right(root, value);
				break;
			case 6:
				clear_leaf(root, value);
				T = NULL;
				break;
			case 7:
				root = T;
				pre_order(root);
				cout << endl;
				break;
			case 8:
				root = T;
				in_order(root);
				cout << endl;
				break;
			case 9;
				root = T;
				post_order(root);
				cout << endl;
				break;
			case 0:
				exit(0);
			default:
				system("cls");
				cout << "Choose again" << endl;
				break;
		}
	}
}
main(){
	Tree X;
	X.function();
}