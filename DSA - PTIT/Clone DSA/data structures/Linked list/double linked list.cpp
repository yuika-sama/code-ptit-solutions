#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
//sth when wrong with search function
struct node{
	int data;
	struct node *next;
	struct node *prev;
}*start;
class double_linked_list{
	public:
		node* create_node(int);
		void push_front();
		void push_back();
		void push_at();
		void pop_at();
		void sort();
		void search();
		void update();
		void for_left(); //duyet trai
		void for_right(); //duyet phai
		double_linked_list(){
			start = NULL; //constructor
		}
};
node *double_linked_list::create_node(int value){
	struct node *temp;
	temp = new(struct node);
	if (temp == NULL){
		cout << "Memory is not enough" << endl;
		return 0;
	} else {
		temp->data = value;
		temp->next = NULL;
		temp->prev = NULL;
		return temp;
	}
}
void double_linked_list::push_front(){
	int value;
	cout << "Getting input: ";
	cin >> value;
	cout << endl;
	struct node *temp, *p;
	temp = create_node(value);
	if (start == NULL){
		start = temp;
		start->next = NULL;
		start->prev = NULL;
	} else {
		p = start;
		start = temp;
		start->next = p;
		p->prev = start;
	}
	cout << "Push front success" << endl;
}
void double_linked_list::push_back(){
	int value;
	cout << "Getting input: ";
	cin >> value;
	cout << endl;
	struct node *temp, *s;
	temp = create_node(value);
	s = start;
	while (s->next != NULL){
		s = s->next;
	}
	temp->next = NULL;
	s->next = temp;
	temp->prev = s;
	cout << "Push back success" << endl;
}
void double_linked_list::push_at(){
	int value, pos, counter = 0;
	cout << "Getting input: ";
	cin >> value;
	cout << endl << "Getting pos: ";
	cin >> pos;
	cout << endl;
	struct node *temp, *s, *ptr;
	temp = create_node(value);
	int i;
	s = start;
	while (s!=NULL){
		s = s->next;
		counter++;
	}
	if (pos == 1){
		if (start == NULL){
			start = temp;
			start->prev = NULL;
			start->next = NULL;
		} else {
			ptr = start;
			start = temp;
			start->next = ptr;
			ptr->prev = start;
		}
	} else if (pos > 1 and pos <= counter){
		s = start;
		for (i = 1; i<pos; i++){
			ptr = s;
			s = s->next;
		}
		ptr->next = temp;
		temp->prev = ptr;
		temp->next = s;
		s->prev = temp;
	} else {
		cout << "Invalid pos" << endl;
	}
}
void double_linked_list::sort(){
	struct node *ptr, *s;
	int value;
	ptr = start;
	while (ptr != NULL){
		for (s=ptr->next; s!=NULL; s = s->next){
			if (ptr->data > s->data){
				value = ptr->data;
				ptr->data = s->data;
				s->data = value;
			}
		}
		ptr = ptr->next;
	}
	cout << "Sorted" << endl;
}
void double_linked_list::pop_at(){
	int pos, i, counter = 0;
	if (start == NULL){
		cout << "Nothing to remove" << endl;
		return;
	}
	cout << "Getting pos: ";
	cin >> pos;
	cout << endl;
	struct node *s, *ptr;
	s = start;
	if (pos == 1){
		start = s->next;
		free(s);
	}
	else {
		while (s!=NULL){
			s = s->next;
			counter++;
		}
		if (pos > 0 and pos <= counter){
			s = start;
			for (i=1; i<pos; i++){
				ptr = s;
				s = s->next;
			}
			if (s->next == NULL){
				ptr->next = NULL;
				s->prev = NULL;
				free(s);
			} else {
				ptr->next = s->next;
				(s->next)->prev = ptr;
				free(s);
			}
		} else {
			cout << "Invalid pos" << endl;
		}
	}
	cout << "Pop success" << endl;
}
void double_linked_list::update(){
	int value, pos, i;
	if (start == NULL){
		cout << "Nothing to change" << endl;
		return;
	}
	cout << "Getting pos: "; cin >> pos;
	cout << endl << "Getting input: "; cin >> value; cout << endl;
	struct node *s, *ptr;
	s = start;
	if (pos == 0){
		start->data = value;
	} else {
		for (i=0; i<pos; i++){
			if (s==NULL){
				cout << "Pos " << pos << " is not valid" << endl;
				return;
			}
			s = s->next;
		}
		s->data = value;
	}
	cout << "Update success" << endl;
}
void double_linked_list::search(){
	int value, pos = 0;
	if (start == NULL){
		cout << "Nothing to search" << endl;
		return;
	}
	cout << "Getting input: "; cin >> value; cout << endl;
	bool flag = true;
	struct node *s; s=start;
	while (s!=NULL){
		if (s->data == value){
			flag = true;
			cout << value <<" is at pos: " << pos << endl;
		}
		s = s->next;
	}
	if (not flag){
		cout << value << " is not exist" << endl;
	}
}
void double_linked_list::for_right(){
	struct node *temp;
	if (start == NULL){
		cout << "Empty list" << endl;
		return;
	}
	temp = start;
	while (temp!=NULL){
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}
void double_linked_list::for_left(){
	struct node *temp;
	if (start == NULL){
		cout << "Empty list" << endl;
		return;
	}
	temp = start;
	while (temp->next!=NULL){
		temp = temp->next;
	}
	while (temp!=NULL){
		cout << temp->data << "->";
		temp = temp->prev;
	}
	cout << "NULL" << endl;
}
main(){
	int choice;
	double_linked_list X;
	start = NULL;
	while (true){
		cout << "1. Push front" << endl;
		cout << "2. Push back" << endl;
		cout << "3. Push at" << endl;
		cout << "4. Sorting" << endl;
		cout << "5. Pop at" << endl;
		cout << "6. Update" << endl;
		cout << "7. Search" << endl;
		cout << "8. Display from left" << endl;
		cout << "9. Display from right" << endl;
		cout << "0. Exit" << endl;
		cout << "Getting choice: ";
		cin >> choice;
		switch (choice){
			case 1:
				X.push_front();
				cout << endl;
				break;
			case 2:
				X.push_back();
				cout << endl;
				break;
			case 3:
				X.push_at();
				cout << endl;
				break;
			case 4:
				X.sort();
				break;
			case 5:
				X.pop_at();
				break;
			case 6:
				X.update();
				break;
			case 7:
				X.search();
				break;
			case 8:
				X.for_right();
				break;
			case 9:
				X.for_left();
				break;
			case 0:
				exit(0);
				break;
			default:
				system("cls");
				cout << "Choose again" << endl;
				break;
		}
	}
}