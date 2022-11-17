#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;

    //contructor
    Node(){
		cout << " Default Constructor " << endl;
	}

    Node(int data){
        val=data;
        next=NULL;
    }
};


void  FindKthElement(Node* head,int ele){
    
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    if (len < ele)
        return;

    temp = head;
    for(int i=1;i<len-ele+1;i++){
        temp=temp->next;
    }
    cout<<temp->val;
    
    
}


Node* creat(){
    int data;
    cin>>data;
    Node* head=NULL;
    Node* tail=NULL;
    while(data!=-1){
        Node* temp=new Node(data);
        if(head==NULL ){
        
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
void print(Node* &t){

    while(t!=NULL){
        cout<<t->val<<" ";
        t=t->next;
    }
    return;

}

int main(){
    Node* head=creat();
    int tar;
    cin>>tar;
    //print(head);
    FindKthElement(head,tar);
    //cout<<(head==NULL? "null":"something is there")<<endl;
    //print(head);

    
    
    
    
   

    


}