#include <iostream>
using namespace std;
int myCompare(string X, string Y)
{
    string XY = X.append(Y);
    string YX = Y.append(X);
    return XY.compare(YX) > 0 ? 1 : 0;
}
 

void printLargest(vector<string> arr)
{
    sort(arr.begin(), arr.end(), myCompare);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i];
}
int main() {
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        int arr[x];
        for(int j=0;j<x;j++){
            cin>>arr[j];
        }
        biggest(arr);
    }
}
