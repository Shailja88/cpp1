//  #include<iostream>
//  #include <stdio.h>      
//  #include <time.h>   
//  using namespace std;
//  int main() {
//      time_t timetoday;
//      time(&timetoday);
//      cout << "Calendar date and time as per todays is : " << asctime(localtime(&timetoday));
//      return 0;
//  }
#include<iostream>
#include<time.h>
using namespace std;
int main(){
    time_t ct=time(0);
    string currenttime=ctime(&ct);
    cout<<currenttime;
    return 0;
}