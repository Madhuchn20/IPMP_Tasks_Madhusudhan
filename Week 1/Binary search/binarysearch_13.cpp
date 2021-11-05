#include<iostream>
using namespace std;
int firstappear(int a[], int l, int h){
    int result=-1;
    while(l<=h){
        int m=l+(h-l)/2;
        if(a[m]==1){
            result = m;
            h=m-1;
        }
        else{
            l=m+1;
        }
    }
    return result;
}
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<firstappear(a,0,n-1);
    delete[] a;
    return 0;
}

