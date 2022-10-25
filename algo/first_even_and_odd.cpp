#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int arr[n];
   for(int j=0;j<=n;j++){
       cin>>arr[j];
   }
   int count=0;
   int odd=0;
    for(int i=0;i<=n;i++){
       if(arr[i]%2==0 && count!=1){
           cout<<"even pp "<<i<<endl;
           count++;
           break;
       }
       else if(arr[i]%2!=0 &&  odd!=1 ){
           cout<<"odd "<<i<<endl;
           odd++;

       }
       else if(arr[i]%2!=0){
           cout<<"-1";
       }
   }


}
