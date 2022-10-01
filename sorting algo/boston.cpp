#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sumOfTheDigitsOfAllPrimeFactors=0;
    int cn=n;
    for(int i=2;i<=n;i++)
    {
        int count=0;
        while(n%i==0){
            n=n/i;
            count++;
        }
        int sumofdigitofI=0;
        int ci=i;
        while(ci!=0){
            sumofdigitofI = sumofdigitofI + (ci%10);
            ci=ci/10;
        }
        sumOfTheDigitsOfAllPrimeFactors = sumOfTheDigitsOfAllPrimeFactors + (sumofdigitofI*count);
    }
    int sumOfDigitsOfN = 0;
    while(cn!=0){
       sumOfDigitsOfN += (cn%10);
       cn = cn/10;
    }
    if(sumOfDigitsOfN == sumOfTheDigitsOfAllPrimeFactors){
        cout<<"1"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    return 0;
}