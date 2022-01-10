/*Position of only set bit*/

#include<iostream>
using namespace std;
bool powtwo(int n){
    if((n&(n-1))==0){
        return 1;
    }
    else{
        return 0;
    }
}
int position(int n){
    int i=1,count=0;
    while((i&n)!=n){
        i=i<<1;
        count++;
    }
    return count+1;
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if(powtwo(n)==1){
        cout<<"Position of the only set bit is:"<<position(n)<<endl;
    }
    else{
        cout<<"Position of the only set bit is:"<<-1<<endl;
    }
    return 0;
}
