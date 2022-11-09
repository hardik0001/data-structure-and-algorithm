#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    node(){
        cout<<"default constructor"<<endl;
    }
    Node(int data){
        val=data;
        next=NULL;
    }
};
void insertFromEnd(Node* &head,Node* &tail,int data){
    if(head==NULL && tail==NULL){
        Node* n=new Node(data);
        head =n;
        tail =NULL;
    }
    else{
        Node* n=new Node(data);
        tail->next=n;
        tail=tail->next;
    }
}
void print(Node* &t){
    while(t){
        cout<<t->val<<"-->";
        t = t->next;
    }
    return;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertFromEnd(head,tail,1);
	/*insertFromEnd(head,tail,2);
	insertFromEnd(head,tail,3);
	insertFromEnd(head,tail,4);*/
    
    print(head);
    cout<<endl;
    cout<<(head== NULL ?"null " : "SOMETHING IS THERE")<<endl;
    print(head);
}