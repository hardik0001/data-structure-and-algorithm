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
    int n,no;
    cin>>no;
    for(int j=0;j<no;j++){
        cin>>n;
        int a[n];
        for(int i=0; i<n;i++){
        cin>>a[i];
         }
   /* //sort(a.begin(),a.end());
    do{
        ans.push_back(a);
    }*/
        next_permutation(a,a+n);

    //permutation(a,0);
        cout<<a[0]<<a[1]<<a[2]<<endl;


    }
return 0;
    
}
