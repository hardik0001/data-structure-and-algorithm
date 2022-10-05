#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
/*void permutation(vector<int>&a,int no){
    if(no==a.size()){
        ans.push_back(a);
        return;
    }
    for(int i=no;i<a.size();i++){
        swap(a[i],a[no]);
        permutation(a,no+1);
        swap(a[i],a[no]);
        
    }
    return;

}*/
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &i:a){
        cin>>i;
    }
    sort(a.begin(),a.end());
    do{
        ans.push_back(a)
    }
    while(next_permutation(a.begin(),a.end()));

    //permutation(a,0);
    for(auto v:ans){
        for(auto i:v){
            cout<<i<<" "<<endl;
        }
    }

}
