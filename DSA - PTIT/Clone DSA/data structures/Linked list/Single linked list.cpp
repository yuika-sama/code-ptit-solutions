#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
//fixed that shit brah. i think the remaining problem right now is positions
using namespace std;	 
struct node {
	int data;
	struct node *next;
}*start;
class single_linked_list{
	public:
		node* create_node(int);
		void push_front();
		void push_at();
		void push_back();
		void pop_at();
		void sort();
		void search();
		void update();
		void reverse();
		void display();
		single_linked_list(){
			start = NULL;//constructor
		}
};
node *single_linked_list::create_node(int value){
	struct node *temp, *s;
	temp = new(struct node); //cap phat bo nho cho temp
	if (temp == NULL){
		cout << "Memory is not enough" << endl;
		return 0;
	}
	else
	{
		temp->data = value; //thiet lap thanh phan thong tin
		temp->next = NULL; //thiet lap thanh phan lien ket
		return temp; //tra lai node
	}
}
void single_linked_list::push_front(){
	int value;
	cout <<"Getting input: ";
	cin >> value;
	cout << endl;
	struct node *temp, *p;
	temp = create_node(value); //tao mot node roi rac co gia tri value
	if (start == NULL){
		start = temp;
		start->next = NULL;
	} else {
		p = start;
		start = temp;
		start->next = p;
	}
	cout << "Added " << value << " at the beginning" << endl;
}
void single_linked_list::push_back(){
	int value;
	cout << "Getting input: ";
	cin >> value;
	cout << endl;
	struct node *temp, *s;
	temp = create_node(value);
	if (start == NULL){
		start = temp;
		temp->next = NULL;
		return;
	} else {
		s = start;
		while (s->next!=NULL){
			s = s->next;
		}
		temp->next = NULL;
		s->next = temp;
		cout << "Added " << value <<" at the end" << endl;	
	}
}
void single_linked_list::push_at(){
	int value;
	cout << "Getting input: ";
	cin >> value;
	cout << endl;
	struct node *temp, *s, *ptr;
	temp = create_node(value);
	int pos;
	cout << "Getting pos: ";
	cin >> pos;
	cout << endl;
	int counter = 0;
	int i;
	s = start;
	while (s!=NULL){
		s = s->next;
		counter++;
	}
	if (pos == 1){
		if (start == NULL){
			start = temp;
			start->next = NULL;
		} else {
			ptr = start;
			start = temp;
			start->next = ptr;
		}
	} else if (pos>1 and pos<=counter){
		s = start;
		for (i=1; i<pos; i++){
			ptr = s;
			s = s->next;
		}
		ptr->next = temp;
		temp->next = s;
	} else {
		cout << "Invalid position" << endl;
	}
	cout << "Added sucess" << endl;
}
void single_linked_list::sort(){
	struct node *ptr, *s;
	int value;
	if (start==NULL){
		cout << "No need to sort" << endl;
		return;
	}
	ptr = start;
	while (ptr!=NULL){
		for (s = ptr->next; s!=NULL; s = s->next){
			if (ptr->data > s->data){
				value = ptr->data;
				ptr->data = s->data;
				s->data = value;
			}
		}
		ptr = ptr->next;
	}
}
void single_linked_list::pop_at(){
	int pos, i, counter = 0;
	if (start==NULL){
		cout << "Empty list" << endl;
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
		return;
	} else {
		while (s!=NULL){
			s = s->next;
			counter++;
		}
		if (pos>0 and pos<=counter){
			s = start;
			for (i=1; i<pos; i++){
				ptr = s;
				s = s->next;
			}
			ptr->next = s->next;
			free(s);
		}
		else {
			cout << "Invalid position" << endl;
		}
	}
}
void single_linked_list::update(){
	int value, pos, i;
	if (start == NULL){
		cout << "Empty list" << endl;
		return;
	}
	cout << "Getting pos: ";
	cin >> pos;
	cout << endl;
	cout << "Getting value: ";
	cin >> value;
	cout << endl;
	struct node *s, *ptr;
	s = start;
	if (pos == 1){
		start->data = value;
	} else {
		for (i=0; i<pos-1; i++){
			if (s==NULL){
				cout << pos <<"is not valid" << endl;
				return;
			}
			s = s->next;
		}
		s->data = value;
	}
	cout << "Success" << endl;
}
void single_linked_list::search(){
	int value, pos = 0;
	bool flag = false;
	if (start == NULL){
		cout << "Empty list";
		return;
	}
	cout << "Getting input: ";
	cin >> value;
	struct node *s;
	s = start;
	while (s!=NULL){
		pos++;
		if (s->data == value){
			flag = value;
			cout << "position of value: " << pos << endl;
		}
		s = s->next;
	}
	if (not flag){
		cout << "Doesnt exist" << endl;
	}
}
void single_linked_list::reverse(){
	struct node *ptr1, *ptr2, *ptr3;
	if (start == NULL){
		cout << "Empty list" << endl;
		return;
	}
	ptr1 = start;
	ptr2 = ptr1->next;
	ptr3 = ptr2->next;
	ptr1->next = NULL;
	ptr2->next = ptr1;
	while (ptr3!=NULL){
		ptr1 = ptr2;
		ptr2 = ptr3;
		ptr3 = ptr3->next;
		ptr2->next = ptr1;
	}
	start = ptr2;
}
void single_linked_list::display(){
	struct node *temp;
	if (start == NULL){
		cout << "Empty list" << endl;
		return;
	}
	temp = start;
	while (temp!=NULL){
		cout << temp->data << " -> ";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}
main(){
	int choice;
	single_linked_list X;
	start = NULL;
	while (true){
		cout << "1. Push front" << endl;
		cout << "2. Push back" << endl;
		cout << "3. Push at" << endl;
		cout << "4. Sorting" << endl;
		cout << "5. Pop at" << endl;
		cout << "6. Update" << endl;
		cout << "7. Search" << endl;
		cout << "8. Display" << endl;
		cout << "9. Reverse" << endl;
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
				X.display();
				break;
			case 9:
				X.reverse();
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