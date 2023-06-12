//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        map<long long, int> mapp;
        long long sum=0;
        int maxsum=0;
        for(int i=0;i<N; i++){
            sum+=A[i];
            if(sum==K){
                maxsum= max(maxsum,i+1);
            }
            
            long long rem=sum-K;
            
            if(mapp.find(rem)!=mapp.end()){
                int len= i-mapp[rem];
                maxsum= max(maxsum,len);
                
            }
             if(mapp.find(sum)==mapp.end()){
               
                mapp[sum]=i;
                
            }
            
        }
        return maxsum;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends