// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long a;
//     long long ans=1;
//     cin>>a;
    
//     for(int i=1;i<=a;i++){
// ans=ans*i;
//     }
//     cout<<ans<<endl;

//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// void fact(long long n){
//     long long ans=1;
// for(int i=1;i<=n;i++){
//     ans=ans*i;
    
// }
// cout<<ans;
// }
// int main(){
//  //passing a number
//  long long a;
//  cin>>a;
//  fact(a);
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// long long fact(long long a){
//     if(a==0||a==1)
//     return a;
//     else 
//     {
//        return (a*fact(a-1));
//     }
//    return a;

// }
// int main(){
// long long a;
// cin>>a;
// fact(a);
// }
// #include<bits/stdc++.h>
// using namespace std;
// const int M=1e9+7;
// const int N=1e5+10;
// long long fact[N];
// int main (){
//     fact[0]=fact[1]=1;
//     for(int i=2;i<N;i++)
//     {
//         fact[i]=fact[i-1]*i;
//     }
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         cout<<fact[n]<<endl;
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
// const int M=1e9+7;
// const int N=1e5+10;
// long long fact[N];
// int main(){
// //precomputation 
//    fact[0]=fact[1]=1;
// for(int i=2;i<N;i++){
//  fact[i]=fact[i-1]*i;
// }
// int t;
// cin>>t;
// while(t--){
//     int n;
//     cin>>n;
//      cout<<fact[n]<<endl;
// }
//     return 0;
// }
/*Given T test cases and in eachtest case a number 
N. Print its factorial for each test case %M
where M =10^9+7
Constraints 
1<=T<=10^5
1<=N<=10^5;
*/
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
const int M=1e7+7;
long long fact[N];
int main(){
    fact[0]=fact[1]=1;
    for(int i=2;i<N;i++){
   fact[i]=fact[i-1]*i;
    }
    int t;
    cin>>t;
    while(t--){
         int n;
    cin>>n;
    cout<<fact[n]<<endl;
    }
    return 0;
}