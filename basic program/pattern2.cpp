// Your First C++ Program

#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int w=1;
    
    for(int i=1;i<=n;i++){
        cout<<endl;
        for(int j=1;j<=i;j++){

            cout<<w;
            w=w+1;
           
        }
    }
    return 0;
}
