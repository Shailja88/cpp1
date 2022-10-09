#include<bits/stdc++.h>
using namespace std;
int main (){
	
	for(int  i=1;i<=6;i++){
		for(int j=1;j<=4;j++){
			if(i==1||i==6){
				cout<<5<<" ";
			}
			else if(j==1||j==4){
				cout<<5<<" ";
			}
			else 
			{
				cout<<"  ";
			}
		}
		cout<<endl;
	}
	return 0;
}