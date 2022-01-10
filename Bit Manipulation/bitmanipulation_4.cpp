/*number of bits to be flipped to convert one number to another*/

#include<iostream>
using namespace std;
int countbit(int n){
    int count=0;
    while(n){
        n=n&(n-1);
        count++;
    }
    return count;
}
int main(){
    int a,b;
    cout<<"Enter the two numbers: ";
    cin>>a>>b;
    cout<<"Number of bits to be flipped: "<<countbit((a^b));
    return 0;
}
