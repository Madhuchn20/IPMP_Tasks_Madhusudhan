/*Position of rightmost bit*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int i=1, count=1;
    while((i&n)==0){
        i<<=1;
        count++;
    }
    cout<<"The position of the rightmost bit is: "<<count<<endl;
    return 0;
}
