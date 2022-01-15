#include<iostream>
#include<algorithm>
using namespace std;
bool triplet(int a[], int n, int val){
    for(int i=0;i<n-2;i++){
        int l=i+1,h=n-1;
        while(l<h){
            if(a[l]+a[h]==val-a[i]){
                cout<<"Triplet is: "<<a[i]<<" "<<a[l]<<" "<<a[h]<<endl;
                return true;
            }
            else if(a[l]+a[h]>val-a[i]){
                h--;
            }
            else{
                l++;
            }
        }
    }
    return false;
}
int main(){
    int n,val;
    cout<<"Enter array size: ";
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cout<<"Enter data: ";
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<"Enter value: ";
    cin>>val;
    cout<<triplet(a,n,val);
    return 0;
}
