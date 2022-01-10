/*Rotate bits of an integer*/

#include<iostream>
using namespace std;
#define INT_BITS 32     // for a 16-bit number, replace 32 with 16

int leftrotate(int n, int m){
    return (n<<m)|(n>>(INT_BITS-m));
}

int rightrotate(int n, int m){
    return (n>>m)|(n<<(INT_BITS-m));
}

int main(){
    int n,m;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Enter number of bits by which number should be rotated: ";
    cin>>m;
    cout<<"After left-rotation: "<<leftrotate(n,m)<<endl;
    cout<<"After right-rotation: "<<rightrotate(n,m)<<endl;
    return 0;
}
