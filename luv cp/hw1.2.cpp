//hw1.2.cpp
//write a program to enter data of 3 employees and display them using class and object.
#include<bits/stdc++.h>
using namespace std;
class Employee{
    private:
    string name;
    int age;
    char gender;
    string city;
    double salary;
    public:
    void data(void);
    void display(void);
};
void Employee::data(void){

    cout<<"Enter the name of the employee "<<endl;
  cin>>name;
    cout<<"Enter the age of the employee"<<endl;
    cin>>age;
    cout<<"Enter the gender of the employee 'F' for Female and 'M' for male"<<endl;
    cin>>gender;
    cout<<"Enter the city of the  employee "<<endl;
    cin>>city;
    cout<<"Enter the salary of the employee"<<endl;
    cin>>salary;
    }
    void Employee:: display(void){
     cout<<"---------------OUR DATA IS-------------- "<<endl;
     cout<<"NAME : "<<name<<endl;
     cout<<"AGE : "<<age<<endl;
     cout<<"GENDER : "<<gender<<endl;
     cout<<"CITY : "<<city<<endl;
     cout<<"SALARY : "<<salary<<endl;


}
int main (){
    Employee ob1,ob2,ob3;
    cout<<"Enter the details of employee 1 "<<endl;
    ob1.data();
    cout<<"Enter the details of employee 2 "<<endl;
    ob2.data();
    cout<<"Enter the details of employee 3 "<<endl;
    ob3.data();
    ob1.display();
    ob2.display();
    ob3.display();





















    
    return 0;
}