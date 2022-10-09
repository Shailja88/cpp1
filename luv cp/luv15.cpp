// //sum of array
// //without recursion 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// { /* code
//  */
// int n;
// cin>>n;
// int a[n];
// int sum=0;
// for(int i=0;i<n;i++){
// 	cin>>a[i];
// }
// for(int i=0;i<n;i++){
//     sum=sum+a[i];
// }
// cout<<sum<<endl;
// return 0;
// }


//sum of arrays through recursion ;
#include<bits/stdc++.h>
using namespace std;
int sum(int a[],int n){
    if(n<0)return 0;
    else
    {
        return (a[n]+sum(a,n-1));
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<sum(a,n);
}