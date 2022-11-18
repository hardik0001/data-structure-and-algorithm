#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;

        //constructor
        Node(int data){
            val=data;
            next=NULL;
        } 

        //des
        ~Node(){
            int value=this->val;
            if( this->next!=NULL){
               delete next;
               this->next=NULL;
           }

        } 
};


//rev
Node* rev(Node* &head,Node* &prev){
    if(head==NULL && head->next==NULL){
        return head;
    }
    
    Node* curr=head;
    Node* forward=NULL;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;

    }
    return prev;
}


Node* create(){
    int data;
    cin>>data;
    Node* head=NULL;
    Node* tail=NULL;
    while(data!=-1){
        Node* temp=new Node(data);
        if(head==NULL){
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            tail=tail->next;

        }
        cin>>data;

    }
    return head;
}
void print(Node* t){
    while(t!=NULL){
        cout<<t->val<<"->";
        t=t->next;
    }
    return;
}
int main(){
    Node* head=create();
    Node* prev=NULL;
    Node* tail=NULL;
    print(head);
    cout<<"null";
    cout<<endl;
    rev(head,prev);
    
    print(prev);
    cout<<"null"<<endl;

}