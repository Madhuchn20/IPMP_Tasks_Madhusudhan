/*To test if given number is a power of 2*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if((n&(n-1))==0){
        cout<<"The number is a power of 2";
    }
    else{
        cout<<"The number is not a power of 2.";
    }
    return 0;
}
