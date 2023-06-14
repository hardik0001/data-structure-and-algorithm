//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&nums, int n)
    {   
        // Your code here
        unordered_map<long long, int >mapp;
        int k=0;
        int maxi=0;
        int sum=0;
        if(n==1){
            maxi=1;
        }
        for( int i=0; i<n; i++){
            sum+=nums[i];
            if(sum==0){
                maxi=max(maxi, i+1);
            }
            long long rem=sum-k;
            if(mapp.find(rem)!=mapp.end()){
                int len=i-mapp[rem];
                 maxi=max(maxi, len);
                
            }
            else{
                 mapp[sum]=i;
            }
           
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
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends