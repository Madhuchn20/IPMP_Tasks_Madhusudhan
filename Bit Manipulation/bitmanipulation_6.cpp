#include<iostream>
using namespace std;
int returnabs(int n){
    int m=n>>31;
    return (n^m)-m;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Absolute value of the given number is: "<<returnabs(n)<<endl;
    return 0;
}
