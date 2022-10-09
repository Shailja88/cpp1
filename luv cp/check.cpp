#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll t;
cin>>t;
ll r=t;
while(t--){
	ll n,k;

	cin>>n>>k;
	ll a[n];
	ll b[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	for(ll i=0;i<n;i++){
		cin>>b[i];
	}
	
	if(k==0){
		ll c3=0;
		for(ll i=0;i<n;i++){
			if(a[i]==b[i]){
            c3++;
			}
		}
		if(c3==n){
			cout<<"Case #"<<r-t<<": YES"<<endl;
		}
		else {
			cout<<"Case #"<<r-t<<": NO"<<endl;
		}
	}
	else if(n==2){
		if(a[0]==b[0]){
             if(k%2==0){
             	cout<<"Case #"<<r-t<<": YES"<<endl;
             }
             else {
             	cout<<"Case #"<<r-t<<": NO"<<endl;
             }
		}
		else{

             if(k%2!=0){
             	cout<<"Case #"<<r-t<<": YES"<<endl;
             }
             else {
             	cout<<"Case #"<<r-t<<": NO"<<endl;
             }
		}
	}
	else{
		//for a[]
		ll flag=0;ll c1=0;ll c2=0;
          for(ll i=0;i<n;i++){
		     if(a[c1]==b[i])
			{
			c1++;
			flag++;	
			}
		  }
		    for(ll i=0; i<n;i++){
		     if(b[c2]==a[i])
			{
			c2++;
			flag++;	
			}
		  }
		  if(flag==n){
              cout<<"Case #"<<r-t<<": YES"<<endl;
		  }
		  else{
			cout<<"Case #"<<r-t<<": NO"<<endl;
		  }



	
	}
}
	return 0;
}