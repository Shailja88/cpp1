//print the set which is divisible by given two numbers(number a or number b ,number a and number b) up to certain given limit;
#include<bits/stdc++.h>
using namespace std;
int main(){
long long  a,b,c;
cin>>a>>b>>c;
cout<<"{ ";
for(int i=1;c>0;i++){
    if(i%a==0||i%b==0){
        cout<<i<<",";
        c--;
    }
}
cout<<" }";
    return 0;
}