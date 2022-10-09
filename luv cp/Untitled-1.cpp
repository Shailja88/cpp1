#include<bits/stdc++.h>
using namespace std;
int main(){
	long long t;long long  k=1;
	cin>>t;
	while(t--){
		int n; 
		cin>>n;
		for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
				if(i==0||j==0){
				k=1;
				}
				else{
					k=k*(i-j+1)/j;
				}
			cout<<k<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}