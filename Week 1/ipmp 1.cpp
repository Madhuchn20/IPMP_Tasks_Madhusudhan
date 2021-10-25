#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int num;
    cout<<"The number to be searched: ";
    cin>>num;
    int f=0,l=n-1, mid;
    mid=(f+l)/2;
    while(f<=l){
        if(a[mid]<num){
            f=mid+1;
        }
        else if(a[mid]==num){
            cout<<endl<<"The number is present in the array";
            break;
        }
        else{
            l=mid-1;
        }

        mid=(f+l)/2;
    }
    if(f>l)
        cout<<endl<<"The number does not exist in the array";

    return 0;
}
