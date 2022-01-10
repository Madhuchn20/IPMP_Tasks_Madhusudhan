#include<iostream>
#include<algorithm>
using namespace std;
int  binarysearch(int a[], int l, int r, int key){      //function for binary search
    while(r-l>1){
        int mid = l+(r-l)/2;
        if(a[mid]<=key){
            l=mid;
        }
        else{
            r=mid;
        }
    }
    if(a[l]==key){
        return l;
    }
    else if(a[r]==key){
        return r;
    }
    else{
        return -1;
    }

}
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int *p=new int[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    sort(p,p+n);        //sorting the array before binary search
    cout<<"Sorted array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
    int key;
    cout<<endl<<"Enter element to be searched: ";
    cin>>key;
    if(binarysearch(p,0,n-1,key)==-1)
        cout<<"Element not present";
    else
        cout<<"Index is : "<<binarysearch(p,0,n-1,key);
    return 0;
}
