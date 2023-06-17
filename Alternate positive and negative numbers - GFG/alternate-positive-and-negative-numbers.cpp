//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	 
        vector<int> positive;
        vector<int> negative;
        for (int i = 0; i < n; i++) {
            if (arr[i] < 0)
                negative.push_back(arr[i]);
            else
                positive.push_back(arr[i]);
        }

        int pos = 0, neg = 0, idx = 0;
        while (pos < positive.size() && neg < negative.size()) {
            arr[idx++] = positive[pos++];
            arr[idx++] = negative[neg++];
        }
        while (pos < positive.size())
            arr[idx++] = positive[pos++];

        while (neg < negative.size())
            arr[idx++] = negative[neg++];
    }



	
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends