/*Given array of N integers. Given Q queries and in each query given L and R print sumof array elements from index  L to R ( L , R included)
Constraints
1<=N<=10^5
1<=a[i]<=10^9
1<=Q<=10^5
1<=L,R<=N
*/

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
const int Q=1e5+7;
long long a[N];
long long b[N];
int main(){
        
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            b[i]=a[i]+b[i-1];
        }


        int t;
        cin>>t;
        while(t--){
            long long l,m;
            cin>>l>>m;
            cout<<b[m]-b[l-1]<<endl;
            
        }

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int sum =0;
    
//     int l,m,n;
//     cin>>l>>m>>n;
//     int a[n];
// for(int i=0;i<10;i++){
//     cin>>a[i];
// }
// for(int i=l;i<=m;i++){
// sum=sum+a[i];
// }
// cout<<sum<<endl;
//     return 0;
// }