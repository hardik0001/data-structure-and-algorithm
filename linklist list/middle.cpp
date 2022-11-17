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
};
//middle
void middle(Node* head){
    Node* fast=head;
    Node* slow=head;
    while(fast==NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
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
    cout<<(head==NULL?"null":"something is there")<<endl;
    
    Node* a=middle(head);
    cout<<a-val;
    
    print(head);

}