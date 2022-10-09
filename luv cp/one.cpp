// #include<iostream>
// using namespace std;
// class Base{
//     public:
//     void f(){
//         cout<<"base\n";
//     }
// };
// class Derived:public Base{
//     public:
//     void f(){
//         cout<<"Derived\n";
//     };
// };
// main(){
// Derived obj;
// obj.Base::f();
// }
// #include<iostream>
// using namespace std;
// main(){
// int a[]={10,20,30};
// cout<<*a+1;
// // }
// #include<iostream>
// using namespace std;
// class Space{
//     int mCount;
//     public:
//     Space(){
//         mCount=0;
//     }
// Space operator ++(){
//     mCount++;
//     return Space(mCount);
// }
// };
// int main(){
//     Space objSpace;
//     objSpace++;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int z=10;
   
    cout<<&z<<endl;
    
    cout<<endl;
    return 0;
}