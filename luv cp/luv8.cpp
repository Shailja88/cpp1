#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--){
	    long long n;
	    long long i,j;
	    cin>>n;
	    long long a[n];
	    for(long long i=0;i<n;i++){
	        cin>>a[i];
	    }
	    long long greatest=LLONG_MIN;
	    long long smallest=LLONG_MAX;
	    for( i=0;i<n;i++){
	         
	        if(a[i]<=smallest){
	          
	           smallest=i;
	          }
	    }
	        for( j=0;j<n;j++){
	        if(a[i]>=greatest){
	            greatest=j;
	          }
	          
	    }
	        
	    
	    //sum calculating 
	    long long sum=0 ;
	    for(int k=0;k<n;k++){
	        sum=sum+a[k];
	    }
	        sum=sum-a[greatest]+gcd(a[smallest],a[greatest]);
	        cout<<sum<<endl;
	        
	    }
	   
	    
	
	return 0;
}
