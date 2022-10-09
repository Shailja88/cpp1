//binary to octal
//binary to decimal to octal.
#include<bits/stdc++.h>
using namespace std;
void binToOct(string s){
 int a[100];
  
    int si=s.size();
    int k=1;int rem=0;
    int i=0;
    int dec=0;
    for(int l=si-1;l>=0;l--){
        int value=s[l]-48;
         dec=dec+value*k;
         k=k*2;

    }
    //cout<<"Value is decimal number is "<<dec<<endl;//decimal value
    //convert decimal into octal
    
    while(dec!=0){
          
        rem=dec%8;
        // cout<<"rem "<<rem<<endl;
        a[i]=rem;
 
        // cout<<a[i]<<" ai"<<endl;
        
        dec=dec/8;
        // cout<<"dec" <<dec<<endl;
        i++;
    }
    cout<<"Octal number is ";
    for(int j=i-1;j>=0;j--){
        
        cout<<a[j];
    }
}
int main(){
    string s;
    cin>>s;
    binToOct(s);
    
    return 0;
}