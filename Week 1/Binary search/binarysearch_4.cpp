#include<iostream>
using namespace std;
int binarysearch(int a[], int n,int l, int h,int key, bool x){
    while(h-l>1){
        int m=l+(h-l)/2;
        if(a[m]<=key){
            l=m;
        }
        else{
            h=m;
        }
    }
    if(key<a[0]){
        if(x==true){
            return -1;
        }
        else{
            return a[0];
        }
    }
    else if(key==a[l] || key == a[h]){
        if(x==true || x==false){
            return key;
        }
    }
    else if(key>a[n-1]){
        if(x==true){
            return a[n-1];
        }
        else{
            return -1;
        }
    }
    else{
        if(x==true){
            return a[l];
        }
        else{
            return a[h];
        }
    }
}
int main(){
    int a[]={1,2,4,5,6,7,9};
    int n=sizeof(a)/sizeof(a[0]);
    int key;
    cout<<"Enter number: ";
    cin>>key;
    if(binarysearch(a,n,0,n-1,key,true)==-1){
        cout<<"Floor does not exist for the given number."<<endl;
    }
    else{
        cout<<"Floor for the given number is "<<binarysearch(a,n,0,n-1,key,true)<<endl;
    }
    if(binarysearch(a,n,0,n-1,key,false)==-1){
        cout<<"Ceiling does not exist for the given number."<<endl;
    }
    else{
        cout<<"Ceiling for the given key is "<<binarysearch(a,n,0,n-1,key,false)<<endl;
    }
    return 0;
}

