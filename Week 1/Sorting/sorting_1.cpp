//Merge Sort

#include<iostream>
using namespace std;
void merge(int a[], int low, int mid, int high){
    int i=0,j=0,k=0;
    int n1= mid-low+1;
    int n2=high-mid;
    int L[n1],R[n2];
    for(i=0;i<n1;i++){
        L[i]=a[low+i];
    }
    for(j=0;j<n2;j++){
        R[j]=a[mid+1+j];
    }
    i=0,j=0,k=low;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            a[k]=L[i];
            i++;
            k++;
        }
        else{
            a[k]=R[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=R[j];
        j++;
        k++;
    }
}
void mergesort(int a[], int low, int high){
    if(low<high){
        int mid= low+(high-low)/2;

        mergesort(a,low,mid);
        mergesort(a,mid+1,high);

        merge(a,low,mid,high);
    }
}
int main(){
    int a[]={8,6,7,2,3,1,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
