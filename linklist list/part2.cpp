#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    node(){
        cout<<"default contructor"<<endl;
    }
    Node(int data){
        val =data;
        next=NULL;
    }
    
};

void insertFromEnd(Node* &head,Node* &tail,int data){
    if(head==NULL && tail==NULL){
        Node* n=new Node(data);
        head=n;
        tail=n;
    }
    else{
        Node* n=new Node(data);
        tail->next=n;
        tail=tail->next;
    }
}
void insertFromFront(Node* &head , Node* &tail , int data){
    Node* n=new Node(data);
    if(head==NULL && tail==NULL){
        
        head=n;
        tail=n;
        return;
    }
     n->next=head;
     head=n;

}
void  insertFromPos(Node* &head , Node* &tail , int pos , int data){
    if(pos==1){
        insertFromFront(head,tail,data);
        return;
    }
    Node* n=new Node(data);
    Node* temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    Node* a=temp;
    Node* b=temp->next;
    a->next=n;
    b->next=b;

}
void printLL(Node* t){

	

	while(t){
		cout << t->val << " --> ";
		t = t->next;
	}
	cout<<endl;
	return;

}
int findlen(Node* head){
    Node* temp=head;
    int len=0;
    while(temp){
        temp=temp->next;
        len++;
    }
    return len;
}
Node* findMid(Node* head){
    int l = findlen(head);
    if(head->next==NULL){
        return head;
    }
    Node* temp=head;
    int mid;
    if( l%2 == 0 ){

		mid = l/2 - 1 ;

	}else{

		mid = l / 2 ;

	}

	for(int i = 1 ; i <= mid ; i++){
			temp = temp->next;
	}
    return temp;
}


int main(){
   // Node* n1 = new Node; // default constructor
	// n1->val = 1;
	// n1->next = NULL;



	// cout << n1->val << endl;

	// Node* n2 = new Node(2);

	// cout << n2->val << endl;

	Node* head = NULL;
	Node* tail = NULL;

	// insertFromFront(head,tail,100);
	insertFromEnd(head,tail,2);
	insertFromEnd(head,tail,3);
	insertFromEnd(head,tail,4);
	insertFromEnd(head,tail,5);

	insertFromFront(head,tail,1);
	printLL(head);
	// insertFromFront(head,tail,0);

	Node* head1 = NULL;
	Node* tail1 = NULL;

	insertFromEnd(head1,tail1,-12);
	insertFromEnd(head1,tail1,-3);
	insertFromEnd(head1,tail1,5);
	insertFromEnd(head1,tail1,12);

	insertFromFront(head1,tail1,-101);
	printLL(head1);

	insertFromPos(head,tail,6,100);


	//Node* mergedInSorted = merge(head,head1);

	//cout << " merged list " << endl;
	//printLL(mergedInSorted);






	// printLL(head);

	// cout << "\n length of ll is : " << findLength(head) << endl;

	// cout << endl;

	// Node* mid = findMid(head);

	// cout << " mid node is : " << mid->val << endl;

	// cout << ( head == NULL ? "null " : "SOMETHING IS THERE") <<endl;

	// printLL(head);


	// 1 -> 2 -> 3 -> 4




}