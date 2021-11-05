#include<iostream>
using namespace std;
int sameindex(int a[], int l, int h){
    if(l>h){
        return -1;
    }
    int m=l+(h-l)/2;
    if(a[m]==m){
        return m;
    }
    else{
        sameindex(a,l,m-1);
        sameindex(a,m+1,h);
    }
}
int main(){
    int a[]={-10,-5,0,3,7};
    int n=sizeof(a)/sizeof(a[0]);
    int i=sameindex(a,0,n-1);
    cout<<i;
    return 0;
}
