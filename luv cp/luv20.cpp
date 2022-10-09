//merge sort
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N];
void merge(int l,int r,int mid){
    int l_sz=mid-l+1;
    int L[l_sz+1];
    int r_sz=r-mid;
    int R[r_sz+1];
    L[l_sz]=R[r_sz]=INT_MAX;
    for(int i=l;i<l_sz;i++){
        L[i]=a[l+i];

    }
    for(int i=r;i<r_sz;i++){
        R[i]=a[r-mid+1];
    }
    //merging ;
    int i_l=0;
    int i_r=0;
    for(int i=0;i<=r;i++){
        if(L[i]>=R[i]){
            a[i]=R[i];
            i_r++;
        }
        else{
            a[i]=L[i];
            i_l++;
        }
    }
    for(int i=0;i<r;i++){
        cout<<a[i]<<" "<<endl;
    }

}
void mergesort(int l,int r){

    int mid=(l+r)/2;
    if(l==r)return ;
    mergesort(l,mid);
    mergesort(mid+1,r);
    merge(l,r,mid);

}
int main(){
 
    return 0;
}