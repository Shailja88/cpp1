
// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     int n;
//     int t;
//     int x;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//   cin>>t;
//   while(t--){
//     cin>>x;
//     int ct=0;
//     for(int i=0;i<n;i++){
//         if(a[i]==x){
//             ct++;
//         }
//     }
//     cout<<ct<<endl;
//   }
//     return 0;

// }
/*Given array a of N integers.Given Q queries
and in each query given a number X,print count of 
that number in array.
Constraints
1<=N<=10^5
1<=a[i]<=10^7
1<=Q<=10^5
*/
#include<bits/stdc++.h>
using namespace std;
const int N=1e7+7;
     long long a[N],b[N];
int main(){
 
  int n;
  cin>>n;
 
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   for(long long i =0;i<n;i++){
     b[a[i]]++;
   }
   int t;
   cin>>t;
   while(t--){
    long long x;
    cin>>x;
    cout<<b[x]<<endl;
   }
    return 0;
}