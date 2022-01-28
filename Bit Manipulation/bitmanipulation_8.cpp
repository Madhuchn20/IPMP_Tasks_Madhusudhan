/* Adding 2 numbers without using arithmetic operators*/

#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter 2 numbers: ";
    cin>>x>>y;
    while(y!=0){
        int c =(x & y);
        x=(x^y);
        y=(c<<1);
    }
    cout<<x<<endl;
    return 0;
}
