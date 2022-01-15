#include<iostream>
using namespace std;
int nodd(int a[], int n){
    int k;
    for(int i=0;i<n;i++){
        k=k^a[i];
    }
    return k;
}
int main(){
    int a[]={1,2,3,2,3,4,5,4,6,1,6,1,5};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<nodd(a,n)<<endl;
    return 0;
}




