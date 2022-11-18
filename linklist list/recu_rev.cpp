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
void recrev(Node* &head,Node* curr,Node* prev){
    if(curr==NULL){
        head=prev;
        return ;
    }
     Node* forward=curr->next;
     recrev(head,forward,curr);
     curr->next=prev;

}

//rev
Node* rev(Node* &head,Node* &prev){
    
    Node* curr=head;
    recrev(head,curr,prev);
    return head;
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
    
    print(head);
    cout<<"null"<<endl;

}