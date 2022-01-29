/* 2 non-repeating elements in an array of repeating elements*/

#include<iostream>
using namespace std;
void no_repeat(int a[], int n,int *x, int *y){
    int s=0,s1=0,s2=0;
    for(int i=0;i<n;i++){
        s = (s^a[i]);
    }
    int b=(s & (~(s-1)));
    for(int i=0;i<n;i++){
        if((b&a[i])==0){
            s1 =(s1^a[i]);
        }
        else{
            s2=(s2^a[i]);
        }
    }
    *x=s1;
    *y=s2;
    cout<<*x<<" "<<*y<<endl;
}
int main(){
    int a[]={3,2,3,3,3,4,2,5};
    int n=sizeof(a)/sizeof(a[0]);
    int *x=new int;
    int *y=new int;
    no_repeat(a,n,x,y);
}