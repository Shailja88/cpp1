//write a cpp program for fibonacci series using recursive function
#include<bits/stdc++.h>
using namespace std;
fib(int n){
    if(n<=1)
    return n;
    else{
        return (fib(n-1)+fib(n-2));
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    cout<<fib(i)<<" ";
    }
    return 0;
}