/* Given rectangle of length l and b. Print area of rectangle.
contraints:
1<=l<=10^9
1<=b<=10^9
Input format:
2 space separated integer l and b;
output format:
single number which is area of rectangle
sample input:
3 4 
sample output
12;
*/
#include<bits/stdc++.h>
using namespace std;
int main (){
    int  l,b;
    // long long int area;
    cin>>l>>b;
    // area=l*b;
    cout<<l * 1LL * b<<endl;
    return 0;
}