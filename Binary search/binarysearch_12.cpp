/*Won't work if duplicates are present in the array*/

#include<iostream>
using namespace std;
int minimum(int a[], int n){
    int l=0, h=n-1;
    while(l<=h){
        if(a[l]<=a[h]){
            return a[l];
        }
        int m=l+(h-l)/2;
        int next = (m+1)%n;
        int prev = (m-1+n)%n;
        if(a[m]<=a[prev] && a[m]<=a[next]){
            return a[m];
        }
        else if(a[m]<=a[h]){
            h=m-1;
        }
        else if(a[m]>=a[l]){
            l=m+1;
        }
    }
    return -1;
}
int main(){
    int a[]={5,7,11,2,3};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<minimum(a,n);
    return 0;
}
