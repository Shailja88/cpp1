//reverse the string 
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string s_r;
   cin>>s;
//    for(int i=s.size()-1;i>=0;i--){
// s_r=s_r+s[i];
//    }
for(int i=s.size()-1;i>=0;i--){
    s_r.push_back(s[i]);
}
   cout<<s_r<<endl;


    return 0;
}