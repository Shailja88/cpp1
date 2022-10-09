//c++ program to check number can express as sum of  prime  numbers.
#include<bits/stdc++.h>
using namespace std;
prime(int i){
    int flag=0;
    for(int k=2;k<=i;k++){
        if(i%k==0){
            flag=flag+1;
        }}
        if (flag==1){
            return 1;
        }
return 0;
    }

sumOfPrime(int n){
    int sum=0;
       //CALLING ANOTHER FUNCTION FOR FINDING THE SUM OF PRIME NUMBER;
        if(n==0||n==1){return 0;}
        for(int i=2;i<=n;i++){
            if(prime(i)){
                sum=sum+i;
            }
            if(sum==n){
                return 1;
            }
        }
        return 0;

}
int main (){
 int n;cin>>n;
 if(sumOfPrime(n))cout<<"YES";
 if(!sumOfPrime(n))cout<<"NO";
    return 0;
}