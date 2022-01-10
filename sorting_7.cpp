/*Bubble Sort*/

#include<iostream>
using namespace std;
void swap(int *p, int *q){
    int temp =*p;
    *p=*q;
    *q=temp;
}
void bubblesort(int a[], int n){
    for(int i=0;i<(n-1);i++){
        for(int j=0;j<(n-i-1);j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubblesort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
