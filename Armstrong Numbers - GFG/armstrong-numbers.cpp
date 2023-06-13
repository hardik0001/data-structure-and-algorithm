//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        long long num=0;
        string Y="Yes";
        string N="No";
        int final=n;
        int count= floor( log10(n)+1);
         while( n!=0){
            int rem=n%10;
           
            n/=10;
            num+=pow(rem,count);
        }
        if(num==final ){
            return Y;
            
        }
        else{
            return N;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends