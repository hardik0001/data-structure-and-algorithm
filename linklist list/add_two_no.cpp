#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    
    Node(){
        val=0;
        Node* next;
    }
    Node(int data){
        val=data;
        next=NULL;
       }

    ~Node(){
        int data=this->val;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }

};
Node* rev(Node* &head,Node* prev){
    if(head==NULL){
        return NULL;
    };
    Node* forward=NULL;
    Node* curr=head;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
Node* add(Node* &first,Node* &sec){
    Node* prev=NULL;
    first=rev(first,prev);
    Node* cool=NULL;
    sec=rev(sec,cool);
    Node* dummy=new Node();
    Node* temp=dummy;
    int carry=0;
    while(first!=NULL || sec!=NULL  || carry ){
        int sum=0;
        if(first!=NULL){
            sum+=first->val;
            first=first->next;
        }
        if(sec!=NULL){
            sum+=sec->val;
            sec=sec->next;
        }
        sum+=carry;
        carry=sum/10;
        Node* car=new Node(sum%10);
        temp->next=car;
        temp=temp->next;
    }
    return rev(dummy->next,prev);
}





Node* create(int n){
    Node* head= NULL;
    Node* tail=NULL;
    int cnt=0;
    while(cnt<n){
        int data;
        cin>>data;
        Node* temp=new  Node(data);
        if(head==NULL){
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            tail=tail->next;
        }
        cnt++;
    }
    return head;

}
void print(Node* head){
    if(head==NULL){
        return;
    }
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    return;
    
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    //Node* prev=NULL;
    Node* first=create(n1);
    Node* second=create(n2);
    Node* head=add(first,second);
    //Node* value=rev(head);
    print(head);
}