// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,q;
//         cin>>n>>q;
//         int a[n];
//         for(int i=1;i<=n;i++){
//             cin>>a[i];
//         }
//     while(q--){
//         int l,r;int gc=0;
//         cin>>l>>r;
//         for(int i=1;i<l;i++){
//            gc=__gcd(gc,a[i]);
//         }
//         for(int i=r+1;i<=n;i++){
//             gc=__gcd(gc,a[i]);
//         }
//         cout<<gc<<endl;
//     }

//     }
//     return 0;
// }
#include<bits/stdc++.h>

using namespace std;
const int N=1e5+10;
int a[N];
// int g[N];
int main(){
       int t;
       cin>>t;
       while(t--){
        int n,q;
        cin>>n>>q;
        for(int i=1;i<=n;i++){
            cin>>a[i];
         
        }
         for(int i=1;i<=n;i++){
          
            a[i]=__gcd(a[i],a[i-1]);
        }
        while(q--){
          int l,r;
          cin>>l>>r;
          if(l==r){
            cout<<a[n]-a[r]<<endl;
          }
          else 
          cout<<a[l]+a[n]-a[r]<<endl; 
        }
       }    
    return 0;
}

