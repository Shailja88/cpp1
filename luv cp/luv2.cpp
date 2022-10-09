#include<bits/stdc++.h>
using namespace std;
int main(){
    // long long int n;
    // long long int a=0;

    // cin>>n;
    // for(int i=1;i<=n/4;i++){
    //     for(int j=1;j<=n/2;j++){
    //         if(i!=j && 2*(i+j)==n){
    //             a++;
    //         }
    //     }

    // }
    
    // cout<<a<<endl;
    long long int n;

    cin>>n;
    if(n%2!=0){
        cout<<0;
        return 0;
    }
    n/=2;
    if(n%2!=0)cout<<n/2;
    else cout<<(n/2-1);
    return 0;
}