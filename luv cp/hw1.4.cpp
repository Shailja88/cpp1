//write a program to input an array of integer having 5 elements. Find the sum , largest and smallest elements 
#include<bits/stdc++.h>
using namespace std;
class Arr{
private:
int a[50];int n;
public:
void accept(void);
void sum(void);
void largest(void);
void smallest(void);
};
void Arr :: accept(){

    cout<<"SIZE "<<endl;
    cin>>n;
        cout<<"Array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
} 
void Arr :: sum(){
    int sum=0;
    cout<<"SUM : ";
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    cout<<sum<<endl;
}
void Arr :: largest(){
    int larg=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=larg){
            larg=a[i];
        }
    }
    cout<<"LARGEST EMELENT : "<<larg<<endl;
}
void Arr :: smallest(){
    int smal=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<=smal){
            smal=a[i];
        }
    }
    cout<<"SMALLEST ELEMENT : "<<smal<<endl;
}
int main (){
    Arr ob1;
    ob1.accept();
    ob1.sum();
    ob1.largest();
    ob1.smallest();
    
    return 0;
}