#include<iostream>
using namespace std;
int missingnumber(int a[],int n){
    int x=a[0],y=1;
    for(int i=1;i<n-1;i++){
        x=x ^ a[i];
    }
    for(int i=2;i<=n;i++){
        y=y ^ i;
    }
    return (x ^ y);
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int *a=new int[n-1];
    for(int i=0;i<n-1;i++){
        cout<<"Enter data: ";
        cin>>a[i];
    }
    cout<<missingnumber(a,n)<<endl;
    return 0;
}
