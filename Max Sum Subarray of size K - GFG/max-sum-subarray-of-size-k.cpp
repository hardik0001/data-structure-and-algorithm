//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &Arr , int N){
        // code here 
        long sum=0,maxi=0;
        // int m=0;
        // int right =0, left=0;
        // while(right<N){
        //     if(m!=K){
        //         sum+=Arr[right];
               
        //         right++;
        //         m++;
                
        //     }
        //     else{
        //         m=0;
        //         right=left+1;
        //         left=right;
        //         sum=0;
                
        //     }
        //      maxi=max(maxi,sum);
            
        // }
        
        for(int i=0;i<k;i++){
            sum+=Arr[i];
        }
        maxi=sum;
        for(int i=k;i<N;i++){
            sum=sum+Arr[i]-Arr[i-k];
            maxi=max(maxi,sum);
            
        }
        return maxi;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends