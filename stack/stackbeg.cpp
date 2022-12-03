#include<bits/stdc++.h>
using namespace std;
class stack{
    public:
    int *arr;
    int top;
    int size;


    stack(int size){
        this->stack=size;
        arr=new int[size];
        top=-1; 
    }


    void push(int data){
        if(size-top > 1){
            top++;
            arr[top]=data;
        }
        else{
            cout<<"stack overflow "<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack under flow"<<endl;
        }
    }
    void peek(){
        if(top>=0 && top<size){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
       

    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    
    cout<<s.peek()<<endl;

}