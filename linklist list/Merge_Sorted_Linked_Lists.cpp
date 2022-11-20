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


//rev3er;
Node* solve(Node* &first,Node* &sec){
    Node* curr1=first;
    Node* forward1=curr1->next;
    Node* curr2=sec;
    Node* forward2=curr2->next;
    while(forward1!=NULL && curr2!=NULL){
        if(curr2->val>=curr1->val && curr1->val<=forward1->val){
            curr1->next=curr2;
            forward2=curr2->next;
            curr2->next=forward1;
            //update
            curr1=curr2;
            curr2=forward1;
        }
        else{
            curr1=forward1;
            forward1=forward1->next;
            if(forward1==NULL){
                 curr1->next=curr2;
                 return first;
            }
        }
    }
    return first;
}


Node* merge(Node* &first,Node* &sec){
    if(first==NULL){
        return sec;
    }
    if(sec==NULL){
        return first;
    }

    
    if(first->val<=sec->val){
        solve(first,sec);
    }
    else{
        solve(sec,first);
    }
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
    int t;
    cin>>t;
    while(t!=0){
        int n1,n2;
        cin>>n1;
        Node* first=create(n1);
        cin>>n2;
        Node* sec=create(n2);
        merge(first,sec);
        print(first);
        cout<<endl;
        t--;

    }
    
    //merge(first,sec);
    


}