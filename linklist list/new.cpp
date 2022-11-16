#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;

    //contructor
    Node(){
		cout << " Default Constructor " << endl;
	}

    Node(int data){
        val=data;
        next=NULL;
    }
};
void InsertAtHead(Node* &head,int data){

    Node* temp=new Node(data);
    temp->next=head;
    head=temp;

}
void InsertAtEND(Node* &head,Node* &tail,int data){
    if(head==NULL && tail==NULL){
        Node* temp=new Node(data);
        head=temp;
        tail=temp;

    }
    else{
    Node* temp=new Node(data);
    tail->next=temp;
    tail=tail->next;

    }


}
void insertFromPos(Node* &head , Node* &tail , int pos , int data){
    if(pos==1){
        InsertAtEND(head,tail,data);
        return;
    }
    else{
        Node* n = new Node(data);
	    Node* temp = head;
        for(int i = 1 ; i < pos - 1 ; i++){
            temp = temp->next;
	}
	    Node* a = temp;
	    Node* b = temp->next;

	    a->next = n ;
	    n->next = b;
    }
}

void print(Node* &t){
    while(t!=NULL){
        cout<<t->val<<" ";
        t=t->next;
    }
    return;

}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    InsertAtEND(head,tail,100);
    InsertAtEND(head,tail,101);
    InsertAtEND(head,tail,102);
    InsertAtEND(head,tail,103);
    insertFromPos(head,tail,2,600);
    
    /*InsertAtHead(head,10);
    InsertAtHead(head,11);
    InsertAtHead(head,12);
    InsertAtHead(head,13);
    

    //cout<<head<<" ";*/
    print(head);
    
    //cout<<endl;

    

    cout<<(head==NULL? "null":"something is there")<<endl;

    print(head);


}