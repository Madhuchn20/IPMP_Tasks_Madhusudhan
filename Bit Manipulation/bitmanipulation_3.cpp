/*Counting set bits in an integer*/
/*Approach 1*/

/*#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter number: ";
    cin>>n;
    while(n){
       count+=n&1;
       n>>=1;
    }
    cout<<"Number of set bits: "<<count<<endl;
    return 0;
}*/

/*Approach 2*/

#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter number: ";
    cin>>n;
    while(n){
        n=(n&(n-1));
        count++;
    }
    cout<<"Number of set bits: "<<count<<endl;
    return 0;
}
