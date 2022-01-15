#include<iostream>
#include<algorithm>
using namespace std;
void unionof(int a[], int b[], int n, int m){
    int i=0,j=0;
    while(i<n && j<m){
        if(a[i]==b[j]){
            cout<<a[i]<<" ";
            i++;j++;
        }
        else if(a[i]<b[j]){
            cout<<a[i]<<" ";
            i++;
        }
        else{
            cout<<b[j]<<" ";
            j++;
        }
    }
    while(i<n){
        cout<<a[i]<<" ";
        i++;
    }
    while(j<m){
        cout<<b[j]<<" ";
        j++;
    }
}
void intersection(int a[], int b[], int n, int m){
    int i=0,j=0;
    while(i<n && j<m){
        if(a[i]==b[j]){
            cout<<a[i]<<" ";
            i++;j++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else{
            j++;
        }
    }
}
int main(){
    int n,m;
    cout<<"Enter the size of array 1: ";
    cin>>n;
    cout<<"Enter the size of array 2: ";
    cin>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a,a+n);sort(b,b+m);
    cout<<"Union is: "<<endl;
    unionof(a,b,n,m);
    cout<<endl<<"Intersection is: "<<endl;
    intersection(a,b,n,m);
    return 0;
}

