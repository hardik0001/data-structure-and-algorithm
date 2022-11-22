#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;

    Node(Node* n,int d){
        next=n;
        data=d;
    }


};
class stackll{
public:
    Node* head,* tail;
    stackll(){
        head=tail=NULL;
    }
    void push(int data){
        if(head==NULL && tail==NULL){
            head=tail= new Node(NULL,data);
        }
        else{
            tail->next=new Node(NULL,data)
            tail=tail->next;
        }
    }

    void pop(){
        if(head==NULL && tail==NULL){
            cout<<"stack is empty"<<endl;
            return;
        }
        else{
            if(head==tail){
                delete head;
                head=tail=null;
                return;
            }
            

            Node* temp=head;
            while(temp->next!=tail){
                temp=temp->next;
            }
            delete tail;
            temp->next=NULL;
            tail=temp;
        }

    }
    int top(){
        if(tail==NULL){
            cout<<"stack is empty"<<endl;
        }
        else{
            return tail->val;
        }
    }
};
int main(){
    stackll s;
    s.push(12);
    cout<<" top"<<s.top()<<endl;
    s.push(13);
    cout<<" top"<<s.top()<<endl;
    s.push(14);
    cout<<" top"<<s.top()<<endl;


}