#include<iostream>
using namespace std;
void swap(int *p, int *q){
    int temp = *p;
    *p=*q;
    *q=temp;
}
int pivot(int a[], int l, int h){
    int p=a[h];
    int q=l;
    for(int i=l;i<h;i++){
        if(a[i]<p){
            swap(&a[i],&a[q]);
            q++;
        }
    }
    swap(&a[q],&a[h]);
    return q;
}
void quicksort(int a[], int l, int h){
    if(l<h){
        int p=pivot(a,l,h);
        quicksort(a,l,p-1);
        quicksort(a,p+1,h);
    }
}
int main(){
    int a[]={11,7,2,3,5};
    int n=sizeof(a)/sizeof(a[0]);
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
