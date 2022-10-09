#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
           set<int> s1;
           bool f=true;
           for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s1.insert(x);
           }
           if(s1.size() & 1){
            if(!(n-s1.size())){
                f=false;
            }
           }
           cout<<(a ? "YES":"NO")<<endl;
    }
    return 0;
}