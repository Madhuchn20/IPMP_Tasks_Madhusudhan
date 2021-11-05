#include<iostream>
using namespace std;
void print_unsorted(int a[], int n){
    int i=0,j=n-1;
    for(i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            break;
        }
    }
    if(i==(n-1)){
        cout<<"The array is sorted already";
        exit(0);
    }
    for(j=n-1;j>0;j--){
        if(a[j]<a[j-1]){
            break;
        }
    }
    int max=a[i], min=a[i];
    for(int k=i+1;k<=j;k++){
        if(a[k]>max){
            max=a[k];
        }
        if(a[k]<min){
            min=a[k];
        }
    }
    for(int k=0;k<i;k++){
        if(a[k]>min){
            i=k;
            break;
        }
    }
    for(int k=n-1;k>j;k--){
        if(a[k]<max){
            j=k;
            break;
        }
    }
    cout<<"The subarray between indices "<<i<<" and "<<j<<" should be sorted";
}
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    print_unsorted(a,n);
    return 0;
}
