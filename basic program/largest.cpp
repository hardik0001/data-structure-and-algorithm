// Your First C++ Program
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,curno,cur,largest=INT_MIN,smallest=INT_MAX;
    cin>>n;
    int i=1;
    
    while(i<=n){
        cin>>curno;
        if(curno>largest){
            largest= curno;
        }
         if(curno<smallest){
            smallest= curno;
        }
        i=i+1;

    }
    cout<<"largest:"<<largest<<" "<<smallest;

    return 0 ;
}
