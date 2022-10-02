#include<bits/stdc++.h>
using namespace std;
int main() {
	int number,Ayush,Harshit;
	cin>>number;
	while(number--)
	{
        cin>>Ayush;
		cin>>Harshit;
        int count2=0,count1=0;
        for(int j=1;;j++)
        {
            if(j%2==0)
            {
              if(count1 + j<=Harshit){
                  count1 = count1 + j;
                  }
                  else{
                      cout<<"Ayush"<<endl;
                      break;
                    }
            }
            else{
                if(count2+ j <=Ayush){
                  count1 = count2 + j;
                  }
                else{
                      cout<<"Harshit"<<endl;
                      break;
                    }

            }

        }

	}
	return 0;
}