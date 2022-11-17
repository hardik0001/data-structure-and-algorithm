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


//deletionformpos
void deletionformpos(Node* &head,int pos){
    if(pos==1){
        Node* first=head;
        head=head->next;
        first->next=NULL;
        delete first;

    }
    else{
        Node* curr=head;
        Node* prev =NULL;
        int cnt=1;
        while(cnt<pos){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next =curr->next;
        curr->next=NULL;
        delete curr;
    }

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
    Node* tail=NULL;
    print(head);
    cout<<endl;
    deletionformpos(head,6);
    //insertFromPos(head,tail,1,10);
    
    print(head);
    //cout<<(head==NULL?"null":"something is there")<<endl;

}