#include<bits/stdc++.h>
using namespace std;
void tower(int n,string from,string mid,string end,int &count){
    if(n==0){
        return;
    }
    count++;
    tower(n-1,from,end,mid,count);
    cout<<"Move "<<n<<" disc from "<<from<<" to "<<end<<endl;
    count++;
    tower(n-1,end,mid,from,count);
}
int main(){
    int n;
    cin>>n;
    int count=0;
    tower(n,"T1","T3","T2",count);
    //cout<<endl;
    cout<<count/2;
    return 0;

}