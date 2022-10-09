#include<bits/stdc++.h>
using namespace std;
int main (){
	string s;int len;int sum=0;
	
	cin>>s;
	len=s.length();
	for(int i=0;i<len;i++){

     if(isupper(s[i])){
         
		 sum=sum-(s[i]+32);
      }
    else {
      sum=sum+(s[i]-32);
         }
	}
	    sum=abs(sum);
		if(sum==0||sum==1){
			cout<<0;
		}
		int flag=0;
		for(int i=2;i<=sum;i++){
			if(sum%i==0){
				flag=flag+1;
				}
				}
				if(flag==1){
					cout<<1<<endl;
				}
				else{
					cout<<0<<endl;
				}
return 0;
}