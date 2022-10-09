//hw1.3Enter two numbers and  perform the following operations 
// a.division
// b.substraction
// c.multiplication 
// d.addition
#include<bits/stdc++.h>
using namespace std;
class Calculator{
    private:
    double a,b;
    public:
    void accept();
    void addition();
    void multiplication();
    void subtraction();
    void division();
};
void Calculator::accept(){
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;
}
void Calculator :: addition(void){
double sum=a+b;
// cout.precision(3);
cout<<"SUM : "<<sum<<endl;
}
void Calculator :: multiplication(void){
double multi=a*b;
// cout.precision(3);
cout<<"MULTIPLICATION "<<multi<<endl;
}
void Calculator:: subtraction(void){
double sub=abs(a-b);
// cout.precision(3);
cout<<"SUBTRACTION : "<<sub<<endl;
}
void Calculator :: division(void){
if(b==0){
    cout<<"NOT POSSIBLE!"<<endl;
}
else {
    double div=a/b;
    // cout.precision(3);
cout<<"DIVISION : "<<div<<endl;

}
}
int main(){
    Calculator ob;
    ob.accept();
    ob.addition();
    ob.subtraction();
    ob.division();
    ob.multiplication();
    return 0;
}