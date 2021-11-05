#include<iostream>
using namespace std;
int maxelement(int a[],int l, int h){
    int m=l+(h-l)/2;
    if(l==h){
        return a[l];
    }
    else if(h-l==1 && a[h]>=a[l]){
        return a[h];
    }
    else if(h-l==1 && a[l]>=a[h]){
        return a[l];
    }
    else if(a[m]>a[m-1]&&a[m]>a[m+1]){
        return a[m];
    }
    else if(a[m]>a[m+1]&&a[m]<a[m-1]){
        maxelement(a,l,m-1);
    }
    else{
        maxelement(a,m+1,h);
    }
}
int main(){
    int a[]={1,3,5,7,9,10,6};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<maxelement(a,0,n-1);
    return 0;
}
