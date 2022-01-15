#include<iostream>
#include<algorithm>
using namespace std;
bool twosum(int a[], int n, int sum){
    int l=0,r=n-1;
    while(l<=r){
        if(a[l]+a[r]==sum){
            return 1;
        }
        else if(a[l]+a[r]<sum){
            l++;
        }
        else{
            r--;
        }
    }
    return 0;
}
int main(){
    int n,sum;
    cout<<"Enter array size: ";
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cout<<"Enter data: ";
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<"Enter number: ";
    cin>>sum;
    cout<<twosum(a,n,sum)<<endl;
    return 0;
}
