#include<iostream>
using namespace std;
unsigned int reversebits(int n){
    unsigned int count = sizeof(n)*8-1;
    unsigned int reverse_n=n;
    n>>=1;
    while(n!=0){
        reverse_n<=1;
        reverse_n|=(n & 1);
        n>>=1;
        count--;
    }
    reverse_n<<=count;
    return reverse_n;
}
int main(){
    unsigned int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<reversebits(n)<<endl;
    return 0;
}