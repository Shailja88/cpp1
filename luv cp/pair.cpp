// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // void printVec(vector<int>v){
// // //     cout<<"size: "<<v.size()<<endl;
// // //     for(int i=0;i<v.size();i++){
// // //     cout<<v[i]<<" ";
// // // }
// // // cout<<endl;}
// // // int main (){
// // //     vector<int>v;//declaring a vector;
// // //     int n;
// // //     cin>>n;//entering size of the vector;
// // //     for(int i=0 ;i<n;i++){
// // //         int x;
// // //         cin>>x;//vector element jayega vector me 
// // //         v.push_back(x);//y gya vector element in the vector;push_back s ;
// // //     }
// // //     printVec(v);
// // // }
// // #include<bits/stdc++.h>
// // using namespace std;
// // void printVec(vector<int>p){
// //     cout<<p.size()<<endl;
// //     for(int i=0;i<p.size();i++){
// //         cout<<p[i]<<" ";
// //     }
// //     cout<<endl;
// // }
// // int main (){
// //     //yha vector element accept krenge size n k
// //     int n;
// //     cin>>n;
// //     vector<int>p;
// //     for(int i=0;i<n;i++){
// //         //vector element lo phle  cin k help s
// //         int x;
// //         cin>>x;
// //         p.push_back(x);
// //     }
// //     printVec(p);
// // }
// #include<iostream>//header file include all standard library
// using namespace std;
// #include<math.h>
// #include<algorithm>
// #include<numeric>

// int main(){
// int a=10;
// int b=34;
// cout<<__gcd(a,b)<<endl;
// cout<<(a*b)/(__gcd(a,b))<<endl;

// }

#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int output=0;
      int n;
      cin>>n; 
    int a[n];
   unordered_map<int ,int>p;//isme mai hr ek  array element  kitne baar aaya hai usko store krungi;{element,uski frequency}
     for(int i=0;i<n;i++){
         cin>>a[i];
         p[a[i]]++;
     }
     for(auto it:p){
         if(it.second>1){
            int freq=it.second;
            output=output+(freq*(freq-1)/2);
         }
     }
     cout<<output<<endl;
     
    
}
return 0;
}
