#include<bits/stdc++.h>
using namespace std;

class heap{
    public:
      int arr[100];
      int size;

    heap(){
        size=0;
        arr[0]= -1;
    }

    void insert(int val){
        size+=1;
        int index = size;
        arr[index]=val;

        while(index>1){
            int parents=index/2;
            
            if(arr[parents]<arr[index]){
                swap(arr[parents],arr[index]);
                index=parents;
            }
            else{
                return;
            }
        }

    }

    void deletefromheap(){
        if(size==0){
            cout<<"notinng to delete";
            return ;
        }
        //last element at first
        arr[1]=arr[size];
        //step2: remove last element
        size--;

        //step3: take root node to its correct position
        int i=1;;
        while(i<size){
            int leftindex=2*i;
            int rightindex=2*i+1;

            if(leftindex<size && arr[i]<arr[leftindex]){
                swap(arr[i],arr[leftindex]);
                i=leftindex;
            }
            else if(rightindex<size && arr[i]<arr[rightindex]){
                swap(arr[i],arr[rightindex]);
                i= rightindex;
            }
            else{
                return;
            }
        }

    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";

        }cout<<endl;
    }

};
int main(){
    heap h;
    h.insert(50);
    h.insert(51);
    h.insert(52);
    h.insert(54);
    h.insert(70);
    h.insert(24);
    h.print();
    h.deletefromheap();
    h.print();
    return 0;

}