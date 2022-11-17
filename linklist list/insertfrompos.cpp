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


//insertformpos
void insesrtfromhead(Node* &head,int data){
    if(head==NULL){
        Node* ANY=new Node(data);
        head=ANY;
        return ;
    }
    else{
        Node* temp=new Node(data);
        temp->next=head;
        head=temp;
        
    }
}
void insertFromPos(Node* &head , Node* &tail , int pos , int data){

    if(pos==1){
        insesrtfromhead(head,data);
    }
    
    else{
        Node* temp=new Node(data);
        Node* n=head;
        for(int i=1;i<pos-1;i++){
            n=n->next;
        }
        Node* a=n;
        Node* b=n->next;
        a->next=temp;
        temp->next=b;
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
    
    insertFromPos(head,tail,1,10);
    
    print(head);
    cout<<(head==NULL?"null":"something is there")<<endl;

}