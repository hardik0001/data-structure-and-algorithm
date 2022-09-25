// Your First C++ Program
#include<bits/stdc++.h>
using namespace std;

int main()
 {
    int i,j,l,w,k=0;
    cout<<"enter the no."<<endl;
    cin>>l;
    w=(2*l)-1;
    for(i=0;i<l;i++)
    {
        k++;
        for(j=1;j<=w;j++)
        {
            if(j<(l-i)|| j>(l+i) )
            {
                cout<<" ";
            }
            else{
                cout<<k;
            }

        }
        cout<<endl;
    }
    return 0;
}
