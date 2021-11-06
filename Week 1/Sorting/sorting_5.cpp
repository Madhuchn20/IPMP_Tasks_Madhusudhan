//Insertion Sort

#include<iostream>
using namespace std;
void insertion_sort(int a[], int n){
    for(int i=1;i<n;i++){
        int value =a[i];
        int key=i;
        while(key>0 && a[key-1]>value){
            a[key]=a[key-1];
            key--;
        }
        a[key]=value;
    }
}
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int *a =new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    insertion_sort(a,n);
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
