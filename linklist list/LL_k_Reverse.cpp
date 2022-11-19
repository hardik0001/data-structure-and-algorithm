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
Node* rev(Node* &head,int pos){
    if(head==NULL && head->next==NULL){
        return NULL;
    }
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=NULL;
    int count=0;
    while(curr!=NULL && count<pos){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;

    }
    if(forward!=NULL){
        head->next=rev(forward,pos);
    }
    return prev;
}


Node* create(int n){
    int data;
    cin>>data;
    Node* head=NULL;
    Node* tail=NULL;
    int cnt=0;
    while(cnt<n){
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
        cnt++;

    }
    return head;
}
void print(Node* t){
    while(t!=NULL){
        cout<<t->val<<" ";
        t=t->next;
    }
    return;
}
int main(){
    int pos,n;
    cin>>n>>pos;
    Node* head=create(n);

   
    
    print(rev(head,pos));

    
    //print(head);
    //cout<<"null"<<endl;

}