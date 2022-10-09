#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    string removeChars(string string1,string string2){
        for(int i=0;i<string2.size();i++){
           char s=string2[i];
           
               
            for(int j=0;j<string1.size();j++){
                if(string1[j]==s){
              string1.replace(s,'\0');
                }
            }
         
        }
           return string1;
    } 
    };
int main(){
    int t;
    cin>>t;
    while(t--){
        string string1,string2;
        cin>>string1;
        cin>>string2;
        Solution ob;
        cout<<ob.removeChars(string1,string2)<<endl;
    }
    return 0;
}