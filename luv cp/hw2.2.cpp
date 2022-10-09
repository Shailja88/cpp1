#include<bits/stdc++.h>
using namespace std;
int calculate(int n){
    int flag=0;
     if(n==0 || n==1){
        return 0;
     }
     else{
        for(int i=2;i<=n;i++){
            if(n%i==0)
            {
                flag=flag+1;
            }
        }
        
     }
     if(flag==1){

        return 1; 
     }
     return 0;
}
int main (){
    int num1,num2;
    cin>>num1>>num2;
     for(int i=num1+1;i<num2;i++){
        if(calculate(i))cout<<i<<" ";
     }
   
}