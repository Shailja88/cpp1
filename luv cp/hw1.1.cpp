 #include<bits/stdc++.h>
 using namespace std;
 const int m=50;
 class Arrr{
    private:
    int a[m];
    int count;
    
    public:
  void display(void);
  void sum(void);
  void maxmin(void);
  void sort(void);
  void reverse(void);
 };
 void Arrr::display(void){
    cout<<"Enter the size of the array "<<endl;
  cin>>count;
for(int i=0;i<count;i++){
    cin>>a[i];
}
cout<<"Array elemets are : "<<endl;
for(int i=0;i<count;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
 }
 void Arrr :: sum(void){
    int ans=0;
    cout<<"Sum of the array elements is "<<endl;
    for(int i=0;i<count;i++){
        ans=ans+a[i];
    }
    cout<<ans<<endl;
 }
 void Arrr :: maxmin(void){
    int max=INT_MIN;
    int  min=INT_MAX;
    for(int i=0;i<count;i++){
      if(a[i]<min){
        min=a[i];
      }
      
    }
    for(int i=0;i<count;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<"MAXIMUM VALUE IS "<<max<<endl;
    cout<<"MINIMUM VALUE IS "<<min<<endl;


 }
 ///sort and reverse;
 void Arrr:: sort(void){
    int min;int temp;
    int  sorted[count];
   for(int i=0;i<count;i++){
    sorted[i]=a[i];
   }
    for(int i=0;i<count-1;i++){
      
for(int j=i+1;j<count;j++){
        if(sorted[j]<sorted[i]){
         temp=sorted[j];
         sorted[j]=sorted[i];
         sorted[i]=temp;
        }
}
}
cout<<"Sorted array"<<endl;
for(int i=0;i<count;i++){
    cout<<sorted[i]<<" ";
}
cout<<endl;
    }
    void Arrr::reverse(void){
        cout<<"ARRAY AFTER REVERSIG THE ELEMENTS "<<endl;
        for(int i=(count-1);i>=0;i--){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

    

 

 int main (){
    Arrr obl;
    obl.display();
    obl.sum();
     obl.maxmin();
     obl.sort();
     obl.reverse();
     
    return 0;
 }